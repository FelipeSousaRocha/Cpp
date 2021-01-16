#include <iostream>
#include <math.h>
using namespace std;
void retangulo(unsigned long long int selos){
  unsigned long long int i = 2;
  bool primo = true;
  unsigned long long int raiz = (unsigned long long int)sqrt(selos);
  if (selos%2==1){
    for (i = 3; i <= raiz; i=i+2 ){
      if(selos%i == 0){
        primo = false;
        break;
      }
    }
  }else if (selos%2==0 && selos > 2){
    primo = false;
  }if (primo){
    cout << "N\n";
  }else{
    cout << "S\n";
  }

}

int main() {
  unsigned long long int selos;
  cin >> selos;
  retangulo(selos);
  return 0;
}