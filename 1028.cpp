#include <iostream>
using namespace std;

int mdc(int num1, int num2)
{
    if(num1%num2 == 0)
        return num2;
    else
        return mdc(num2, num1%num2);
}

int main() {
  int n, f1, f2, c;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> f1 >> f2;
    c = mdc(f1, f2);
    cout << c << endl;
  }
  return 0;
}