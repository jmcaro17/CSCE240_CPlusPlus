// Copyright 2023 bhipp
// test drive the Forecast class
#include"forecast.h"
#include"temperature.h"

int main() {
  Forecast f(Temperature(80, "Fahrenheit"), Temperature(90, "Fahrenheit"));
  f.Print();
  Temperature t(70, "Fahrenheit");
  f.SetChanceOfRain(50);
  f.SetLow(t);
  f.SetHigh(t);
  f.Print();
  return 0;
}
