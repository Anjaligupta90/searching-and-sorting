#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &v) {
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << endl;
}
int main() {
   vector<int> v = {44, 55, 22, 11, 33};
   sort(v.begin(), v.end()); // increasing order sorting
  
   print(v);
   
   return 0;
}
