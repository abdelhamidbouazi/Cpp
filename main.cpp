#include <iostream>

class MyClass {
public:
  void myFunction(int arg1, double arg2);
};
void MyClass::myFunction(int arg1, double arg2){
	// Code
}

typedef void (MyClass::*func_ptr)(int, double);

int main() {
  MyClass obj;
  func_ptr ptr = &MyClass::myFunction;
  (obj.*ptr)(42, 3.14);

  std::cout << ptr << std::endl;
  return 0;
}
