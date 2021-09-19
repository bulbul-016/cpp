#include <iostream>
using namespace std;
int main(){
    int n; cin>>n; int w=2*n;  
    char a[w][(w*2)-1];
    for(int i=1; i<=w; i++){
        for(int j=1; j<=(w*2)-1; j++){
            a[i][j]=' ';
        }
    }
    for(int i=1; i<=w; i++){
        for(int j=1; j<=(w*2)-1; j++){
            if(i==1 && j==w){
                a[i][j]='*';
            }
            else if(i==n && j>n && j<3*n){
                a[i][j]='*';
            }
            else if(i==w && j!=w){
                a[i][j]='*';
            }
            else if(i+j==w+1 || j-i==w-1){
                a[i][j]='*';
            }
            else if(i>n && i-j==1 || i>n && j+i==(w*2)+1){
                a[i][j]='*';
            }
        }
    }    
    for(int i=1; i<=(w); i++){
        for(int j=1; j<=(((w))*2)-1; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }   
    return 0; 
}