#ifndef _UART_
#define UART_H

//define constants

const char *uart_target = "/dev/ttyTHS1";
#define NSERIAL_CHAR   256
#define VMINIX         1
#define BAUDRATE       B115200

class Uart {
private:
  /* data */
  int fid;
public:
  unsigned char serial_message[NSERIAL_CHAR];


  Uart ();
  void sendUart(unsigned char *msg);
  bool sendUart_fb(unsigned char *msg);
  void readUart();
  void closeUart();

};
#endif
