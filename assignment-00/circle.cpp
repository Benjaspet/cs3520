/**
 * @file circle.cpp
 * @author Ben Petrillo (me@benpetrillo.dev)
 * @brief Get circle-related data based on the provided radius.
 * @version 0.1
 * @date 2024-05-08
 * 
 * Copyright © 2024 Ben Petrillo. All rights reserved.
 * 
 * Project licensed under the MIT License.
 * This software is not available for public use per
 * university academic integrity policies.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  const string error_message = "Invalid input.";

  cout << "Enter the circle's radius:" << endl;

  const double pi = 3.141592653589793;
  double radius;

  if (cin >> radius) {
    if (radius >= 0.0) {
      cout << setprecision(3) << "Diameter: " << 2 * radius << endl;
      cout << setprecision(3) << "Circumference: " << 2 * pi * radius << endl;
      cout << setprecision(3) << "Area: " << pi * radius * radius << endl;
    } else {
      cout << error_message << endl;
      return -1;
    }
  } else {
    cout << error_message << endl;
    return -1;
  }
  return 0;
}