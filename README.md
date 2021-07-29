# ✨ CAR HEATER 🚗 ✨
# Conditions that must be followed to make heater work in a car
## There are few cases for the heater to work
| Cases | Simulation |
|-------|------------|
|Passenger is NOT sitting and Heater is OFF |![P0H0](https://github.com/KCPooja/Emb-C/blob/main/Simulation/P0H0.JPG) |
|Passenger is NOT sitting and Heater is ON |![P0H1](https://github.com/KCPooja/Emb-C/blob/main/Simulation/P0H1.JPG) |
|Passenger is sitting and Heater is OFF |![P1H0](https://github.com/KCPooja/Emb-C/blob/main/Simulation/P1H0.JPG) |
|Passenger is sitting and Heater is ON |![P1H1](https://github.com/KCPooja/Emb-C/blob/main/Simulation/P1H1.JPG) |

## PIN Configuration
|Name|Working| Input/Output |
|----|-------|--------------|
|`PIN D0`| To check if driver is sited (Button Sensor) | Input|
|`PIN D1`| To make the heater ON or OFF (Heater) | Input |
|`PIN C0`| It help passenger to change the temperature using nobe (TempSensor) | Input |
|`PIN B0`| To make LED glow when passenger is sited (LED Actuator) | Output |
|`PIN B1`| To see output in CRO (Display CDD)| Output |

### Serial Monitor:
To monitor the value of temperature everytime after some interval
### RAM Table: 
To see the ADC values 

## The range of temperatures that can be set in heater when passenger is in car
|Conditions| Simulation |
|----------|------------|
| ADC value range: 0-200, Output PWM: 20%, Temperature: 20C | ![TEMP1](https://github.com/KCPooja/Emb-C/blob/main/Simulation/TEMP1.JPG)|
| ADC value range: 201-500, Output PWM: 40%, Temperature: 25C | ![TEMP2](https://github.com/KCPooja/Emb-C/blob/main/Simulation/TEMP2.JPG)|
| ADC value range: 501-700, Output PWM: 70%, Temperature: 29C | ![TEMP3](https://github.com/KCPooja/Emb-C/blob/main/Simulation/TEMP3.JPG)|
| ADC value range: 701-1024, Output PWM: 95%, Temperature: 33C | ![TEMP4](https://github.com/KCPooja/Emb-C/blob/main/Simulation/TEMP4.JPG)|
