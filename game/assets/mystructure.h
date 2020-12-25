#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

namespace Brick {
  string Struct_Name = "MyModuleName";
  bool Dependent = false; // If Any Of your module's Functionality Requires Any Git Repositories, Etcetera...
  vector <string> MyDependencies{ "nil" }; // Insert Any Additional Modules Here
  int Allocated = NULL; // Don't Worry about this one if your game has already allocated the required memory. If you haven't, Change NULL to your value.
}