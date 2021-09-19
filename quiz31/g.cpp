#include <iostream>
using namespace std;
void f(int b, int i ){
    if (b<2){
      return;
    }if (b%i==0){
      cout<<i<<" ";
      f(b/i, i); 
    }else {
      f(b, i+1);
    }
  }

int main(){
    int b;
    cin >> b;
    f(b,2);
return 0;
}
