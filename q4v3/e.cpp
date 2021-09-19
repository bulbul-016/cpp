#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map<int, int> mp;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		mp[t] = t;
	}	
	map<int, int>::iterator it = mp.end();
	cout<<(*it).first;
	return 0;

}