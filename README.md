# Robitika-mega
This project is seperated into two parts.
The code for the ArduinoMega, which is this, and the [ArduinoUno](https://github.com/Macka323/Robotika-uno).

## About The Project
- [Summary](##Summary)
- [How it Works](##How-it-Works)
- [Made With](##Made-With)
- [Project Members](##Project-Members)

## Summary
We had three [Braccio Robot Arms](https://store.arduino.cc/products/tinkerkit-braccio-robot).Our goal was to synchronize all three so they would pass the sponges that came in their packaging like you'd see robots inside factories passing boxes from one to the other.Originally we wanted them to pass one sponge around in a circle, but we decided against it because we wanted to use the space we had more properly.
The time this took to finish took a little under two months and we achived our goal.Though that doesn't mean it's the end for this project as we'd like to return to it at some point in the future.

## How it Works
The arms each have six motors going from M1 to M6.Each with different degrees for range of motion.
Each Motor:
1. M1 = 0 to 180 - The Base
2. M2 = 15 to 165 - The Shoulder
3. M3 = 0 to 180 - The Elbow
4. M4 = 0 to 180 - The Vertical Wrist Elbow
5. M5 = 0 to 180 - The Rotatory Wrist
6. M6 = 10 to 73 - The Gripper

Normally, the code for this would be like this:
  Braccio.ServoMovement(20  , 90, 90, 90, 90, 90, 73);

In our case it's like this:
  Serial.println("m1=090");

For one we don't have to set the speed of each movement because they're set in void setup().
We can also only set one joint's movement at a time and they have to be set as strings.This is done to not cause conflicts with the ArduinoMega.
This also means that numbers have to be entered with all three numbers regardless of if it's in the ones,tens or hundreds.
Example:
  Serial1.println("m1=000");
  Serial1.println("m1=090");
  Serial1.println("m1=180");

## Made With
- ### C++
- ### Platform.io

## Project Members
- [Martin](https://github.com/Macka323)
- [Andrej](https://github.com/AndrejGockov)
- [Luka](https://github.com/crackshack?tab=overview&from=2023-06-01&to=2023-06-23)
- [Teodor]()
