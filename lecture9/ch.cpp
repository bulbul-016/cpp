#include <iostream>
#include <queue>
using namespace std;
int a[8][8];
queue<pair<int, int> > q;
void step(int x, int y, int v){
    if(x>=0 && y>=0 && x<8 && y<8){
        if(a[x][y]==-1){
            q.push(make_pair(x,y));
            a[x][y]=v;
        }
    }
}

int main(){
    for(int i=0; i<8; ++i){
        for(int j=0; j<8; ++j){
            a[i][j]=-1;
        }
    }
    int a0, b0, a1, b1;
    cin>>a0>>b0>>a1>>b1;
    a0--; b0--;
    a1--; b1--;
    
    a[a0][b0]=0;
    q.push(make_pair(a0,b0));
    
    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        step(r+1,c, a[r][c]+1);
        step(r-1,c, a[r][c]+1);
        step(r,c+1, a[r][c]+1);
        step(r,c-1, a[r][c]+1);
    }
    for(int i=0; i<8; ++i){
        for(int j=0; j<8; ++j){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<a[a1][b1];
    return 0;
}
// 3 4
// 4 8
//   1)2)3)4)5)6)7)8)
// 1)5 4 3 2 3 4 5 6
// 2)4 3 2 1 2 3 4 5
// 3)3 2 1 0 1 2 3 4
// 4)4 3 2 1 2 3 4 5
// 5)5 4 3 2 3 4 5 6
// 6)6 5 4 3 4 5 6 7
// 7)7 6 5 4 5 6 7 8
// 8)8 7 6 5 6 7 8 9
// 5