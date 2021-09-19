#include<iostream>
#include<set>
using namespace std;
int main()
{
	string s;
	set<char> st;
	cin>>s;
	string ans = "";
	for(int i=0;i<s.size();i++)
	{
		if(st.count(s[i]) != 1) 
		{
			st.insert(s[i]);
			ans+=s[i];
		}
	}
	cout<<ans;
	return 0;
}

// aidaospanova112233

// st = 1 2 3 a d i n o p s v
// ans  = aidospnv123