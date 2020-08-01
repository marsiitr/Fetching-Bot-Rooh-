# **Fetching-bot-Rooh**
---
Srishti 2020

## Abstract

The main objective of our bot is to go and fetch any particular object in a defined area. It works in the following manner:
*  Searches for the QR code on the object in defined area.
*  Scans the QR code just for verifying the object
*  Aligns in the direction of code and moves towards it.
*  Fetches the object upon reaching it.



![Final Product](https://github.com/bhavesh0902/Fetching-Bot-Rooh-/blob/master/Images%20and%20Videos/Images/bot.jpg)

---

## Motivation
It can be used for general household purposes and even in distribution chain of any product, thus making our job easy.

## Workflow
![Final Product](https://github.com/bhavesh0902/Fetching-Bot-Rooh-/blob/master/Images%20and%20Videos/Images/Flowchart%20final.jpg)

## Components

* 2 NORMAL WHEELS 
* 1 CASTOR WHEEL 
* ULTRASONIC SENSOR 
* ARDUINO UNO  
* RASPBERRY PI 3  
* CRYTON MOTOR DRIVER 
* 2 JOHNSON MOTOR      
* 2 SERVO MOTOR    
* SD CARD 

---
## **Mechanical Aspect of the Design**

### Chassis



The main body of the FetchBot is 3D printed and comprises the base, a head, and the outer body to cover and contain all the inside components. The shape of the body is hemispherical and the dimensions are 18cm x 18 cm x 9 cm. The body is supposed to be lightweight and rigid.



### Drive type



The FetchBot uses a two wheel differential for movement, the idea behind it being that this system will simplify the turn movements as well as rectilinear motion.


### Fetching Mechanism



The FetchBot uses two arms hinges at a place and rotated with a common metal servo motor inside the body with a two gear system. For fetching two mini servo motors are placed at the elbow of the arm. This mechanism helps the bot to fetch and lift the object.


![](https://github.com/bhavesh0902/Fetching-Bot-Rooh-/blob/master/Images%20and%20Videos/Images/bot%20cad.png)

---

## **Electronics Aspect of the Design**

### Microcontroller


We have used Arduino Uno to control the movement of the motors and get the feedback from the ultrasonic sensor.

### Actuator


The robot uses two 12 volt- 100 rpm motors. 
We also have two servo motors for the sideways movement of the forearms to grab the object and a metal servo motor to rotate the arms together to lift and drop the object


![Drive _type](https://github.com/bhavesh0902/Fetching-Bot-Rooh-/blob/master/Images%20and%20Videos/Images/arduino%20%26%20motordriver%20connection.jpeg)
### Motor Driver

We used the Cytron motor driver to control the rotation of our dc motors easily. We preferred it over the L298 motor driver because of the simplicity in connection and coding of the motors.

![Drive _type](https://github.com/bhavesh0902/Fetching-Bot-Rooh-/blob/master/Images%20and%20Videos/Images/cytron%20motor%20driver.png)

### Sensor
We have used an ultrasonic sensor to get realtime feedback of the distance between the object and the bot. We have mounted it in the lower front of the bot to get the best measurements possible.

![Drive _type](https://github.com/bhavesh0902/Fetching-Bot-Rooh-/blob/master/Images%20and%20Videos/Images/ultrasonic%20sensor.jpg)


### RASPBERRY PI 3 
Also, we have use Raspberry pi 3 with usb camera to detect QR code which sends feedback to the Arduino Uno.

![Drive _type](https://github.com/bhavesh0902/Fetching-Bot-Rooh-/blob/master/Images%20and%20Videos/Images/rpi.png)


### Installing OpenCV and python3 
Steps to Install OpenCV
1.Install Python on your system
2.Install pip
3.Install OpenCV library using pip
*  Install Python

*     sudo apt-get install python
* Install pip

*     sudo apt-get install python3-pip
* Install OpenCV library with pip

*     pip3 install opencv-python
 ---
### QR Code Scanner with OpenCV
### OBJECTIVE:
The main objective of bot was to identify the object that he wants to fetch. To do that we thought to identify QR code on the object with the help of a camera in bot face, and then bot moves on that way after recognizing QR code.
### ABOUT CODE:
Code identifies QR code with the help of detectandDecode() function that extracts data and coordinates of QR code in data , bbox . And then we use coordinates to make sure that QR code comes in the centre of the Camera so that bot moves in the correct direction. We also planned it to be done by colour identification in OpenCV in future.
Z-bar is a library in python that is more concerned in QR code detection but we didn’tused it .    

![Drive _type](https://github.com/bhavesh0902/Fetching-Bot-Rooh-/blob/master/Images%20and%20Videos/Images/QR%20recognition.png)
### SERIAL COMMUNICATION BETWEEN ARDUINO AND RASPBERRY PI
Serial communication is simply a way to transfer data. The data will be sent sequentially, one bit at a time (1 byte = 8 bits), contrary to parallel communication, where many bits are sent at the same time.
UART protocol
More specifically, when you use Serial with Arduino and Raspberry Pi, you’re using the UART protocol. UART means “Universal Asynchronous Reception and Transmission”.

![Drive _type](https://github.com/bhavesh0902/Fetching-Bot-Rooh-/blob/master/Images%20and%20Videos/Images/rpi.png)
### Install python serial library
You need to install a library to be able to use the Serial interface with Python.To install it:
*     python3 -m pip install pyserial
---
## Cost Structure

| *Components*                    |*Cost(INR.)*|
|-----------------------------------|------------|
| 2 NORMAL WHEELS  |60   |
| 1 CASTOR WHEEL      | 25        |
| ULTRASONIC SENSOR                     | 100        |
| ARDUINO UNO                        | 400        |
| RASPBERRY PI 3              | 3000      |
| CRYTON MOTOR DRIVER                        | 1000       |
| 2 JOHNSON MOTOR                       | 1200       |
| 2 SERVO MOTOR                       | 80      |
| SD CARD                      | 350     |
| OTHER ITEMS                     | 500      |
| *Total*                         | *6715*  |
---
## Applications
*   Can be used in distribution process of factories.
*  Can be used for various domestic purposes.
*  As shopping bots, to deliver products door-to-door
---
## Limitations
*   The weight that bot can lift is limited so that point should be taken into account during the work.
*   We have a predefined area within which our bot works.

---
## Future Improvements

*  It can be extended to be used for a wide variety of objects, not only which have QR code on them. An example is color blob detection.
*  Its field of working can be increased and load limit can also be made variable.

---
## **TEAM MEMBERS**

1. [Bhavesh Shamnani](https://github.com/bhavesh0902)
2. [Harsh Kumar](https://github.com/ohhershey)
3. Mayank Shukla
4. [Navtej Mishra](https://github.com/navtej16)
5. Vaibhav Anuragi
6. [Yash Raj](https://github.com/yashraj-iitr)
---
## Mentors

1. [Dhruv Sehgal](https://github.com/Dhruv1064)
2. Vedant Neekhra
---
## References

* <https://pythonprogramming.net/introduction-raspberry-pi-tutorials/>
* <https://www.arduino.cc/en/Guide/ArduinoUno>
* <https://www.solidworks.com>
* <https://roboticsbackend.com/raspberry-pi-arduino-serial-communication/>



