#include <iostream>
using namespace std;
int n, m, res;
char mat[15][15];
bool used[15][15];
int main () {
    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            cin>>mat[i][j];
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(mat[i][j]=='1' && used[i][j]==false) ++res;
            if(mat[i][j]=='1'){
                used[i][j]=true;
                if (mat[i+1][j]=='1')
                    used[i+1][j]=true;
                if (mat[i][j+1]=='1')
                    used[i][j+1]=true;
            }
        }
    }
    if(res)  cout << res;
    else cout << "nothing is left";

    return 0;
}