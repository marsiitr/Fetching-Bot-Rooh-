import cv2
import serial
import time
# initalize the cam
cap = cv2.VideoCapture(0)
# initialize the cv2 QRCode detector
detector = cv2.QRCodeDetector()
while True:
    _, img = cap.read()
    # detect and decode
    data, bbox, _ = detector.detectAndDecode(img)
    # check if there is a QRCode in the image
    if bbox is not None:
        # display the image with lines
        for i in range(len(bbox)):
            # draw all lines
            cv2.line(img, tuple(bbox[i][0]), tuple(bbox[(i+1) % len(bbox)][0]), color=(255, 0, 0), thickness=2)

            gul = tuple(bbox[i][0])
            gul1 = tuple(bbox[(i+1) % len(bbox)][0])
            gul2 = (gul[0] + gul1[0]) / 2
        if data:
            if gul2 >=0 and gul2 <=500:
                 ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
                 ser.flush()
                 while True:
                    ser.write("[+] QR Code detected, data:", data , gul[0] , gul1[0] )
                    line = ser.readline().decode('utf-8').rstrip()
                    print(1)
        else:
            print(0)
    # display the result

    cv2.imshow("img", img)
    if cv2.waitKey(1) == ord("q"):
        break
cap.release()
cv2.destroyAllWindows()

