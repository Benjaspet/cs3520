/**
 * @file numbername.cpp
 * @author Ben Petrillo (me@benpetrillo.dev)
 * @brief Convert an inputted number to its literal name.
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
#include <string>
using namespace std;

int main() {

  const string error_message = "Invalid input.";
  const string name1 = "one";
  const string name2 = "two";
  const string name3 = "three";
  int number;

  if (cin >> number) {
    switch(number) {
    case 1:
      cout << name1 << endl;
      break;
    case 2:
      cout << name2 << endl;
      break;
    case 3:
      cout << name3 << endl;
      break;
    default:
      cout << error_message << endl;
      return -1;
    }
  } else {
    cout << error_message << endl;
    return -1;
  }
  return 0;
}