// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n][n];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin>>a[i][j];
//         }
//     } 
//     int m=a[0][0];
//     int sm=-999;
//      for(int i=1; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(a[i][j]>m){
//                 sm=m;
//                 m=a[i][j];
//             }
//         }
//     } cout<<sm;
    
//          return 0;  
//    }

// #include <iostream>

// using namespace std;
// int main(){    
//     int n;    
//     cin >> n;    
//     int a[n][n];    
//     for(int i = 0; i < n; i++){        
//         for(int j = 0 ; j < n; j++){            
//             cin >> a[i][j];   
//         }
//     } 
    
//     int max=a[0][0];
//     int max2=a[0][0];
//     bool b=false;
//     for(int i = 0; i < n; i++){        
//         for(int j = 0 ; j < n; j++){            
//             if(max<a[i][j]){                
//                 max2 = max;                
//                 max = a[i][j];            
//             }            
//             if(a[i][j] ==a[0][0]){
//                 b=true;
//             } else
//             if(a[i][j]!=a[0][0]){
//                 b=false;
//             }   
                        
//         }  
//     }    
//     if(b == true) cout << "0";    
//     else cout << max2;    
//     return 0;
// }
#include <iostream>

using namespace std;
int main(){    
    int n, max = -10000000, max2 =-10000000;    
    cin >> n;    
    int a[n][n];    
    for(int i = 0; i < n; i++)        
        for(int j = 0 ; j < n; j++)            
            cin >> a[i][j];    
    
    for(int i = 0; i < n; i++){        
        for(int j = 0 ; j < n; j++){            
            if(max<a[i][j]){                
                max2 = max;                
                max = a[i][j];            }            
                else if(a[i][j] > max2 && a[i][j] != max)
                max2 = a[i][j];        
                    }  
                }    
    if(max2 == -10000000) cout << "0";    
    else cout << max2;    
    return 0;
}