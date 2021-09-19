#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    } int m=-11111;  
    int w=0;
    int v=0; 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                if(a[i][j]>m){
                    m=a[i][j];
                    w=i+1;
                    v=j+1;
                }
            }
        } 
    } cout<<"Maximum element is: "<<m<<" with coordinates: "<<w<<";"<<v;  
 return 0;
}