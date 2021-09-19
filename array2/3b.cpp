#include <iostream>
using namespace std;
int main(){
    int n,m,o;
    cin>>n>>m>>o;
    int a[n][m][o];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<o; k++){
                cin>>a[i][j][k];
            }
        }
    }    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<o; k++){
                cout<<a[i][j][k]<<" ";
            }
            cout << endl;
        }
        cout << endl;
        cout << endl;
    }    
 return 0;
}