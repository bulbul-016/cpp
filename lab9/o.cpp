#include <iostream>
#include <utility> 
#include <algorithm>
#include <vector>
#include <iterator>
#include <map>
#include <stack>
#include <queue>
using namespace std;
int main(){
	map<string,string> a;
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		string s;
		string s1;
		cin>>s>>s1;
		a[s] = s1;
	}
	cin>>n;
	for (int i=0;i<n;i++){
		string s,s1;
		cin>>s>>s1;
		if (!a.count(s)) cout<<"login error"<<endl;
		else if (a[s]!=s1) cout<<"password error"<<endl;
		else cout<<"correct password"<<endl;
	}
}

