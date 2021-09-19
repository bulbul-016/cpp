#include<iostream>
using namespace std;

string check(int a[], int i, int k, int n)
{
	if(i == n-1) return "no";
	else 
	{
		if(a[i+1]-a[i] <= k) 
		{
			// cout<<a[i]<<" "<<a[i+1];
			return "cheater";
		}
		else return check(a,i+1,k,n);
	}
}

int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[i]) 
			{ 				
				swap(a[i],a[j]);
			}
		}
	}
	// for(int i =0;i<n;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
	cout<<check(a,0,k,n);

}
// 1 22 12 35 20
// 1 12 20 22 35