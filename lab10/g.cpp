#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
	map< pair< pair<string, int>, pair<string, int> >, bool > mp;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s1, s2;
		int n1, n2;
		cin>>s1>>n1>>s2>>n2;
		mp[ make_pair(make_pair(s1,n1), make_pair(s2,n2)) ] = true;
	}
	map< pair< pair<string, int>, pair<string, int> >, bool >::iterator it;

	for(it=mp.begin(); it!=mp.end(); it++)
	{
		string ans1 = ((*it).first.first).first;
		string ans2 = ((*it).first.second).first;
		int sc1 = ((*it).first.first).second;
		int sc2 = ((*it).first.second).second;
		cout<<ans1<<" and "<<ans2<<" "<<sc1+sc2<<endl;

		// string ans1 = it->first.first ;
		// string ans2 = it->second.first ;
		// int sc1 = it->first.second; 
		// int sc2 = it->second.second; 
		// cout<<ans1<<" and "<<ans2<<" "<<sc1+sc2<<endl;
	}

	return 0;
}
