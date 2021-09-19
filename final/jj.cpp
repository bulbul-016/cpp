#include <iostream>
using namespace std;
string x, y;
bool t;
void check(){
    for (int i = 0; i < y.size(); ++i){
        t = 1;
        for (int j = 0; j < x.size(); ++j){
            if (y[i + j] != x[j]){
                t = 0;
            }
        }
        if (t){
            cout<<i;
            exit(0);
        }
    }
}
int main(){
    cin>>x>>y;
    if (x.size() != y.size()){
        cout<<"Understandable have a nice day";
        return 0;
    }
    y+=y;
    check();
    cout<<"Understandable have a nice day";
    return 0;
}
