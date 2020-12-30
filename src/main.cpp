#include <Arduino.h>
#include <calculator.h>

Calculator calculator;

void setup()
{
  // put your setup code here, to run once:
  calculator.add(1, 2);
  calculator.minus(2, 1);
}

void loop()
{
  // put your main code here, to run repeatedly:
}