#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main(){
	queue<string> q;
	int n; cin>>n;
	for (int i=0;i<n;i++){
        int c; cin>>c;
        if(c==1){
            string s; cin>>s;
            q.push(s);
        } 
        if(c==2) q.pop();
        if(q.empty()) cout<<"queue is empty"<<endl;
        else cout<<q.front()<<endl;
	}
}