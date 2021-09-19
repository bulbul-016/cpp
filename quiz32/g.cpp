#include <bits/stdc++.h> 

using namespace std; 
 
char f(string w, int i) { 
 if (w[i] == '\0') return 0; 
 if (w[i]>='A' and w[i]<='Z') return w[i]; 
 return f(w, i+1); 
} 

int main() 
{ 
 string w; cin>>w; 
 char r = f(w,0); 
 if (r!= 0) cout << r; 
    else cout<<"-1";
 return 0; 
}
// abcdElHJ 
// E

// abcdqwerty
// -1
