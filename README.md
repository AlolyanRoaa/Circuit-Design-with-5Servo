# Circuit Design with 5 Servo
Circuit design with 5 servo for *arduino_robot_arm* package, This project has done using Tinkercad


Tinkercad link: https://www.tinkercad.com/things/9ZRViaYLdXT 
 
 
 ## Servo Distribution
 
 *Note: in this design, a micro servo is used. but for the robot arm project, a different servo will be used.*
 
| Part  | Servo Type |
|-------|------------|
| Base  |   MG 995   |
| Shoulder  |   MG 995   |
| Elbow  |   MG 995   |
| Wrist  |   MG 995   |
| Gripper  |   Micro   |


## Circuit Design


when the power is off:


![off](https://github.com/AlolyanRoaa/Circuit-Design-with-5Servo/blob/main/off.PNG)


when switching the power ON, the servos will position at 90 degrees. which is the initial position.

initial position:

![initial position](https://github.com/AlolyanRoaa/Circuit-Design-with-5Servo/blob/main/initialPosition.PNG)


## Assembly

connect the Arduino Uno R3 ground to breadboard (-), then 5v to breadboard (+).

for each servo : brow wire to ground, red to power, and orange for signal to the arduino.

| Part  | Digital pwm |
|-------|------------|
| Base  |   D11   |
| Shoulder  |   D5   |
| Elbow  |   D6   |
| Wrist  |   D10   |
| Gripper  |   D9   |






