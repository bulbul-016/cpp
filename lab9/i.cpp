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
	map<string,int> a;
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		string s;
		cin>>s;
		a[s]++;
		if (a[s]>1) cout<<"user already exists"<<endl;
		else cout<<"new user added"<<endl;
	}
}