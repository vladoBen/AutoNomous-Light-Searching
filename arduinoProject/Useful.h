#ifndef USEFUL_H_
#define USEFUL_H_

void motorVals(int a, int b, int c, int d);
void ledVals(int a, int b);
void ledLightOff();
void ledLightOn();
void ledLightOnL();
void ledLightOnR();
int giveTurnValue(int leftDistance, int rightDistance);
int dist(int i);
int readLine();
void horn();

#endif
