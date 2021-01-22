#include <iostream>

using namespace std;

int main() {
  
  int n1, n2, res;
  char opc;

  inicio:

  cout << "Digite o valor da nota 1:";
  cin >> n1;

  cout << "Digite o valor da nota 2:";
  cin >> n2;

  res = (n1 + n2)/2;


  if(res >= 6){
    cout << "Aprovado" << "\n";
  }
  else if(res >= 4){
    cout << "Recuperação" << '\n';
  }
  else{
    cout << "Reprovado" << '\n';
  }

  cout << "\n Digitar outras notas?(S/N)";
  cin >> opc;
  if(opc == 's' or opc == 'S'){
    goto inicio;
  }

  return 0;
}