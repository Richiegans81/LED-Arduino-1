#include <Arduino.h>

int ledm = 8;
int ledk = 9;
int ledh = 10;

void setup() {
  // put your setup code here, to run once:
 pinMode(ledm, OUTPUT);
 pinMode(ledk, OUTPUT);
 pinMode(ledh, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(ledm, HIGH);
 digitalWrite(ledk, LOW);
 digitalWrite(ledh, LOW);
 delay(5000);
 digitalWrite(ledm, LOW);
 digitalWrite(ledk, HIGH);
 digitalWrite(ledh, LOW);
 delay(1000);
 digitalWrite(ledm, LOW);
 digitalWrite(ledk, LOW);
 digitalWrite(ledh, HIGH);
 delay(5000);
 digitalWrite(ledm, LOW);
 digitalWrite(ledk, HIGH);
 digitalWrite(ledh, LOW);
 delay(1000);
}
