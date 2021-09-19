#include <iostream>    
#include <algorithm>    
#include <vector>       
using namespace std;
void f(int i) {
    cout <<i<< " ";
}
int main () {
  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);

  for_each (v.begin(), v.end(), f);

  return 0;
}