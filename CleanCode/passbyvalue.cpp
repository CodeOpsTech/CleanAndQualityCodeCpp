#include <iostream>
#include <string>
using namespace std;

// example from effective c++ book 
class Window {
public:
  string name() const {
    return "WindowName";
  }
  virtual void display() const {
    cout << "Window::display()" << endl;
  }
};

class WindowWithScrollBars: public Window {
public:
  virtual void display() const {
    cout << "WindowWithScrollBars::display()" << endl;
  }
};

void printNameAndDisplay(Window w)
{
  cout << w.name() << endl;
  w.display();
}

int main()
{
  WindowWithScrollBars wwsb;
  printNameAndDisplay(wwsb);
}

