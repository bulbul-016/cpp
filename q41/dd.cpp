#include <iostream>
using namespace std;
int n, m, res;
char a[12][12];
bool t[12][12];
void f(){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=m){
            if(a[i][j]=='1' && t[i][j]==false) ++res;
            if(a[i][j]=='1'){ t[i][j]=true;
                if (a[i+1][j]=='1') t[i+1][j]=true;
                if (a[i][j+1]=='1') t[i][j+1]=true;
            }
            j++;
        }
        i++;
    }
}
int main(){
    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            cin>>a[i][j];
        }
    }
    f();
    if(res==false) cout << "nothing is left";
    else cout << res;

    return 0;
}