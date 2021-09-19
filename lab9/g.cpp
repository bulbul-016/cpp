#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
	string s; cin>>s;
	stack<char> q;
	for (int i=0;i<s.length();i++){
		if (s[i]=='0') q.push('0');
		if (s[i]=='1' && q.empty()) q.push('1');
		else if (s[i]=='1' && q.top()=='0') q.push('1');
		else if (s[i]=='1' && q.top()=='1') q.pop(); 
	}	
	string s1="";
	while(!q.empty()){
        s1+=q.top();
        q.pop();
    }
    reverse(s1.begin(),s1.end());
    cout<<s1;
}