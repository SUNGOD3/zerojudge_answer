#include <iostream>
using namespace std;

int main() {
  int x;
  while (cin >> x){
    int y = 25 - x;
    if (y >= 0){
      cout << y;
    }
    else {
      cout << 85 - x;
    }
  }
}
