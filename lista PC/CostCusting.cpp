#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, meio[3];
  cin >> n;
  for(int i=1; i<=n; i++){
    cin >> meio[0] >> meio[1] >> meio[2];
    sort(meio, meio+3);
    cout << "Case " << i <<": " << meio[1] << "\n";
  }
  return 0; 
}