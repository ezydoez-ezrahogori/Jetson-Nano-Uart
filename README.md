# Jetson-Nano-Uart

This is a C++ class to send and receive over UART on the Nvidia Jetson Nano.
I'm using this to communicate with an Arduino Nano.
The wiring is simple :

<ul>TX -> RX
RX <- TX</ul>
GND -> GND
On the Nvidia Jetson Nano you connect on 8 and 10 on the J41 pin header and a GND.
