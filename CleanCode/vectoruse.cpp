#include <vector>
#include <iostream> 
using namespace std; 

void print_vec(std::vector<int> v) {
  try {
    for(int i = 0; i <= v.size(); i++) {
      std::cout << v.at(i) << endl;
    }
  }
  catch(const std::exception& e) {
    std::cout << e.what() << endl;
  }
}

int main() {
	vector<int> avector = { 1, 4, 9, 16, 25 };
	print_vec(avector);
}
