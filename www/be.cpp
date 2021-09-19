#include <iostream>
using namespace std;
int main(){
    int n; cin>>n; int m=0;
    while(m<=n){
        int a; 
        while(cin>>a){
            int c=0; int sum=0;
            for(int j=1; j<=a; j++){
                if(a%j==0){
                sum+=j;
                c++;
                }
            }
            cout<<a<<"=>"<<c<<" "<<sum;
        } m++; if(m=n){break;}
    }
    return 0;
} 
// 3
// 1
// 1=>1 1
// 2
// 2=>2 3
// 3
// 3=>2 4