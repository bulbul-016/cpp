#include<iostream>
#include<cmath>
using namespace std;

bool valid2(string s, int n)
{
	int mx = -1, cur = 0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='0' and s[i]<='9') cur++;
		else 
		{
			if(cur>mx) mx = cur;
			cur = 0;
		}
	}
	if(cur>mx) mx = cur;
	if(mx >= n) return true;
	else return false;
}

//w43kup4y0u000  2

int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	if(valid2(s,n) == true) cout<<"Valid";
	else cout<<"Not valid";
}