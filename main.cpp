#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  cout << "Enter A and B: ";
  int a, b;
  cin >> a >> b;

  cout << "A + B = " << a + b << '\n'
       << "A - B = " << a - b << '\n'
       << a * b << '\n';
  return 0;
}
