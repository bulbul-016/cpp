#include <iostream>
//#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int i=0;
    while(i<a.size()){
        for(int j=i+1; j<a.size(); j++){
            if(a[i]==a[j]){
                a.erase(j,1);
                a.erase(i,1);
                i--; break;
            }
        }
        i++;
    } if(a.size()==0){cout<<"YES";}
    else cout<<"NO";
    return 0;
}