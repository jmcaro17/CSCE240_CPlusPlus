// Copyright 2023 bhipp
// Define the Forecast class
#ifndef _FORECAST_H_
#define _FORECAST_H_

#include"temperature.h"

class Forecast {
 public:
  Forecast(const Temperature& low = Temperature(0, "Fahrenheit"),
           const Temperature& high = Temperature(100, "Fahrenheit"),
           double rain = 0);
  void Print() const;

  void SetChanceOfRain(double r);
  double GetChanceOfRain() const { return chance_of_rain_; }

  void SetLow(const Temperature& newlow);
  void SetHigh(const Temperature& newhigh);

 private:
  Temperature low_;
  Temperature high_;
  double chance_of_rain_;
};

#endif
