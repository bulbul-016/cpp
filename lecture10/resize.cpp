#include <iostream>     
#include <algorithm>    
#include <vector>     
using namespace std;
int main () {
  int v[] = {10,20,20,20,30,30,20,20,10};
  int n=sizeof(v)/sizeof(int);
  vector<int> mv (v,v+n);
  vector<int>::iterator it = unique (mv.begin(), mv.end()); 
  vector<int>::iterator it2;
  cout<<distance(mv.begin(),it)<<endl;
  mv.resize(distance(mv.begin(),it));
  for (it2=mv.begin(); it2!=it; ++it2){
    cout<< *it2<<" ";
  }
  return 0;
}