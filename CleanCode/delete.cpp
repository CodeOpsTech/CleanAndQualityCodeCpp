#include <cstddef>
#include <iostream>
using namespace std;

// example from Effective C++ book 

class EnemyTarget {
public:

  EnemyTarget() {
    cout << "EnemyTarget()" << endl;
    ++numTargets;
  }

  EnemyTarget(const EnemyTarget&) {
    cout << "EnemyTarget(const EnemyTarget&)" << endl;
    ++numTargets;
  }

  ~EnemyTarget() {
    cout << "~EnemyTarget()" << endl;
    --numTargets;
  }
 
  static size_t numberOfTargets() {
    return numTargets;
  }
 
private:
  static size_t numTargets;               // object counter
};

size_t EnemyTarget::numTargets;

class EnemyTank: public EnemyTarget {
public:
  EnemyTank() {
    cout << "EnemyTank()" << endl;
    ++numTanks;
  }
 
  EnemyTank(const EnemyTank& rhs)
  : EnemyTarget(rhs)
  {
    cout << "EnemyTank(const EnemyTank& rhs)" << endl;
    ++numTanks;
  }
 
  ~EnemyTank() {
    cout << "~EnemyTank()" << endl;
    --numTanks;
  }
 
  static size_t numberOfTanks() {
    return numTanks;
  }
 
private:
  static size_t numTanks;         // object counter for tanks
};

size_t EnemyTank::numTanks;

int main()
{
  EnemyTarget *targetPtr = new EnemyTank;
  delete targetPtr;
}
