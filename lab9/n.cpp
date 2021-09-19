#include <iostream>
#include <utility> 
#include <algorithm>
#include <vector>
#include <iterator>
#include <map>
#include <stack>
#include <queue>
using namespace std;
bool search(vector<int> a, int x) {
	for (int i=0;i<a.size();i++){
		if (a[i]==x) return true;
	}
	return false;
}
int main(){
	vector<int> a;
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	int cnt=0;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (search(a, (a[i]^a[j])) && i<j) cnt++;
		}
	}
	cout<<cnt;
}

