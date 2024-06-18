# Automatic Plant Watering System

The automatic watering system is an innovative solution designed to automate the irrigation process for plants using an Arduino microcontroller and a soil moisture sensor. This system ensures efficient and effective plant care by providing the right amount of water based on real-time soil moisture levels, addressing the common issues of over- and under-watering associated with manual watering methods.

#### Components and Design

The system is built around several key components:
1. **Arduino Uno**: The central microcontroller that processes sensor data and controls the water pump.
2. **Soil Moisture Sensor**: This sensor measures the soil's moisture level by detecting changes in its electrical properties, such as conductivity or dielectric constant.
3. **5V Relay Module**: Acts as a switch to control the power supply to the water pump based on the Arduino's signals.
4. **12V DC Mini Water Pump**: This pump irrigates the plants when activated.
5. **12V DC Power Supply**: Powers the entire system.
6. **Breadboard and Jumper Wires**: Used for connecting components in the circuit.

#### Operational Theory

The soil moisture sensor is a critical component that measures the amount of water present in the soil. The sensor operates by detecting changes in soil resistance, dielectric constant, or the time delay of electromagnetic pulses, depending on the sensor type. In this system, the most common types are resistive and capacitive sensors. Resistive sensors detect the soil's resistance, which decreases as moisture content increases, while capacitive sensors measure the soil's dielectric constant, which increases with higher moisture levels.

The Arduino Uno continuously monitors the readings from the soil moisture sensor. When the moisture level drops below a predefined threshold, indicating dry soil conditions, the Arduino activates the 5V relay module. The relay, in turn, powers the 12V DC water pump, which waters the plants until the sensor detects that the soil moisture has reached an adequate level. This feedback loop ensures that the plants receive the optimal amount of water, promoting healthy growth and conserving water.

#### Applications

The automatic watering system is versatile and can be employed in various settings, including home gardens, agricultural fields, and hydroponic systems. Its cost-effectiveness and ease of use make it an attractive solution for both amateur gardeners and professional farmers. By automating the watering process, this system reduces labor, saves time, and helps maintain consistent soil moisture levels, ultimately improving plant health and yield.

Link to the demonstration of the project ---->  https://youtu.be/FpwaZPWnEtA
