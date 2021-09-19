#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[]={1,2,3};
    int l=sizeof(a)/sizeof(int);
    do{ for(int i=0; i<l; i++){
            cout<<a[i]<<" ";
        } cout<<endl;
    }while(next_permutation(a,a+l));
    return 0;
}