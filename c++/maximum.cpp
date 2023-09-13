#include <iostream>
using namespace std;
int main() {
  int x, y, z;
  cout << "Enter the three numbers\n";
  cin >> x >> y >> z;
  if ((x == y) && (y == z))
    cout << "All three are euqal\n";
  if (x > y) {
    if (x > z)
      cout << "Minimum is = " << x << endl;
    else
      cout << "Maximum is = " << z << endl;
  } else {
    if (y > z)
      cout << "Maximum is = " << y << endl;
    else
      cout << "Maximum is = " << z << endl;
  }
  return 0;
}
