#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main(){
	string s; cin>>s;
	stack<int> st;
	for(int i=0;i<s.size();i++){
		// cout<<i;
		st.push(s[i]-'0');
		if(st.size()>=2) {
			int num1 = st.top(); st.pop();
			int num2 = st.top(); st.pop();
			if(num1 == 6 and num2 == 1) continue;
			else if(num1 == 5 and num2 == 2) continue;
			else if(num1 == 6 and num2 == 3) continue;
			else if(num1 == 9 and num2 == 4) continue;
			else if(num1 == 4 and num2 == 6) continue;
			else if(num1 == 1 and num2 == 8) continue;		
			else {
				st.push(num2);
				st.push(num1);
			}
		}
	}
	if(st.empty()) cout<<"Stack is empty";
	else{
		while(!st.empty()){
			cout<<st.top();
			st.pop();
		}
	}
	return 0;
}