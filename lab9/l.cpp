#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> s;
	int n; cin>>n;
	for (int i=0;i<n;i++){
        int s1; cin>>s1;
        int s2; cin>>s2; 
        s.push_back((s1+s2));
	}
    vector<int> :: iterator i;
    for(i=s.begin(); i!=s.end(); i++){
        cout<<(*i)<<" ";
    }
}