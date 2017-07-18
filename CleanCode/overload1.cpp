#include <iostream>
using namespace std;

void f(int) { cout << "f(int)" << endl; }

void f(char) { cout << "f(char)" << endl; }

int main()
{
  double d = 6.02;

  f(d);
}
