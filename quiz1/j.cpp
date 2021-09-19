#include <iostream>

using namespace std;
int main(){
    int T,P,Y,years=0,sum;
    cin>>T>>P>>Y;
    T=T*100;
    Y=Y*100;

    while (T<Y){
        T=((T*P/100)+T);
        years++;
        
    }
    cout<<years;
    return 0;
}