/**
 * @file hello.cpp
 * @author Ben Petrillo (me@benpetrillo.dev)
 * @brief A simple hello-world style program.
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
  cout << "Please enter your name:" << endl;

  string name;

  if (getline(cin, name)) {
    cout << "Hello, " << name << "!" << endl;
  } else {
    cout << error_message << endl;
    return -1;
  }
  return 0;
}