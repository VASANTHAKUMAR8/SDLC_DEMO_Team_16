# **INTRODUCTION**

It's a advanced parking management system. This project is divided into 4 different parts.
- Security Door Lock System
- Parking System
- Automatic parking light system
- Ultrasonic Detection System
- Billing System

## **Security Door Lock System**

## **Introduction:**

- Nowadays most of the systems are automated in order to face new challenges and present day requirements to achieve good results.
  Automated systems have less manual operations, so that the flexibility, reliabilities are high and accurate.
 
 ## **Principle Behind The Circuit:**

- The main component in the circuit is 8051 controller. In this project 4×3 keypad is used to enter the password. The password which is entered is compared with the predefined     password. If the entered password is correct then the system opens the door by rotating door motor and displays the status of door on LCD. If the password is wrong then door     is remain closed and a sound alarm is triggered and displays “Password is wrong” on LCD.

** Hardware Requirements:**

- 8051 Microcontroller
- 4 * 3 Matrix Keypad
- 16 *2 LCD
- DC Motor

** Software requirements**
- Proteus (for circuit diagram and simulation)
- Keil uVision5 IDE (for c code)


## **Parking System**
This system is purely a part of automation sector. In this mechanism we can operate a parking system without any human surveillance. By using some essential componets we can automate our parking area.

**Motivation**
The main motivation is to reduce the traffic jam that occurs in the urban areas which are caused by vehicles searching for parking.

**Features**
- To keep count of vehicles present in the area
- It shows ENTER & EXIT status

**Advantages**
- Enhanced User Experience.
- Optimized parking.
- Reduced traffic.
- Real-Time Data and Trend Insight.

## *Automatic parking light system*

*Motivation*
This Automatic parking light systeam is very useful in parking places to avoid current wastage by turn on the light when the vehicles are arrived at the destination.
Generally, in many areas, parking light control is done manually. That means, some person turns on the light at evening time and turns them off in the morning time. However,
there are few drawbacks to this manual method of controlling the light.  Also if the street lights are not turned off in the morning then it causes electricity wastage. Also if we implement a time-based light controlling system, then it will cause a problem since the  evening start time is different in winter and summer. This project of automatic street light control can be used to overcome all these drawbacks. The lights are turned on at night time because the light intensity is low at night. And the street lights are turned on in the daytime since the light intensity is sufficient in the daytime.

** Hardware Requirements:**

- 8051 Microcontroller
- Buttons
- Relays
- Lamps
- BJT's

## Features of LDR are as follows:

 
-  High reliability.
-  Light weight.
-  Wide spectral response.
-  Wide ambient temperature range.

# State of art/Research

 ![](https://www.projectsof8051.com/project-photos/5126-iot-vehicle-fuel-theft-detection-system-using-arduino-21.jpg)
 
  
 
 # High level requirements
 
 - Along Roads & Highways – High-quality automatic parking  systems used in traffic.
  
- Schools & Universities – Automatic parking system is an excellent choice for schools, colleges & universities.

 With plenty of accessible areas, ranging from bus shelters to parking lots institutions can install them throughout the campus.
 
- Avoid accidents.
 
 # Low level requirements
 
 - To study on equipments and tools used and their specifications.

 - To study on the features of microprocessor to more focus in respect of working- This application is implemented using C programing language.

 - Writing the program to control the parking system.

 - Connecting IR sensors and GPIO pins.

 - Power on the system and testing the functionality of it placing some obstacles in front of the IR sensors observing the LED glow.

## **Ultrasonic Detection System**
Ultrasonic sensors work by sending out a sound wave at a frequency above the range of human hearing. It uses a single transducer to send a pulse and to receive the echo. The transducer of the sensor acts as a microphone to receive and send the ultrasonic sound. The sensor determines the distance to a target by measuring time lapses between the sending and receiving of the ultrasonic pulse.

**Features**
### a) HARDWARE :-

**1] SimulIDE:**
* SimulIDE provides AVR, Arduino and PIC microcontrollers that can be accessed just like other components. 
* Features like gpsim and simavr allow you to use PIC and AVR microcontrollers, respectively.

**2] AVR:**
* An automatic voltage regulator (AVR) is an electronic device that maintains a constant voltage level to electrical equipment on the same load.
* The AVR regulates voltage variations to deliver constant, reliable power supply.

### b) SOFTWARE :-

**1] ATmega328:**
* ATmega328 is commonly used in many projects and autonomous systems where a simple, low-powered, low-cost micro-controller is needed
* Perhaps the most common implementation of this chip is on the popular Arduino development platform.
      
**2] Sound:**
* A sound sensor is defined as a module that detects sound waves through its intensity and converting it to electrical signals.
      
**3] Display:**
* A display device is an output device for presentation of information in visual or tactile form.


## **Billing System**

**Features**

The main aim of using this System is to maintain the information and payment history of the customer while paying for parking bill. It has the capacity to illustrate and analyze the basic billing system and the main functionalities that surround the billing system from a business prospective and explains how each interacts to complete the billing cycle.
It capable of billing more quickly, accurately and update customer record and enables customer to view bill information.

**Services Offered to the Customers**
* A customer can create an account for his own and give his details such as address to be stored.
* The billing history of the customer is maintained.
* The customer can maintain some amount as balance to pay cash less.
* The customer can edit the information in his account as and when required.

**Accounts**

The customer account includes customer contact, profile information, account number, city and balance amount in the account.

**Payments**

Each customer in the system has an account balance, which affects any invoices requested by the customer and any payments done by the customer.

**Features Provided in the Program**
* To create New Account
* To update the existing account
* To print information of all the customers
* To search for an account
* Adding Amount to Existing Customer's Wallet
