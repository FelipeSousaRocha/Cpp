#include <iostream>

using namespace std;

int main() {
  int n, e1, e2;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> e1 >> e2;
    if(e1 > e2){
  cout << ">\n"; 
  }
  else if(e2 > e1){
    cout << "<\n"; 
  }
  else if(e1 == e2){
    cout <<"=\n";
  }
  }
  
  return 0;
}