#include <iostream>
using namespace std;

int main() {
  int x,y;
  x=rand()%50;
  y=rand()%50;
  if (y > x) {
    cout << "Y lebih besar daripada X";
  } else{cout <<"X lebih besar daripada Y";
  }

  return 0;
}
