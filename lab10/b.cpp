#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int x = 0;
long long f(int x){
	long long power = 1;
	for(int i=0;i<x;i++){
		power= power*x;
	}
	x++;
	return power;
}

int main(){
	int n;
	cin>>n;
	vector<long long> v(n+1);
	// generate(v.begin(), v.end(), f);

	for(int i=0;i<=n;i++){
		v[i] = f(i);
		// v[i] = pow(i,i);
	}
	for(int i=0;i<=n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}

// [1] [1] [4] [] [] []

// pow(x,x);