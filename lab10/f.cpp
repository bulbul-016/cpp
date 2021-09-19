#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

float grade(int a1, int a2, int f)
{
	if(a1+a2<30) return 0.0;
	else if(f<20) return 0.0;
	else if(a1+a2+f < 55) return 1.0;
	else if(a1+a2+f < 60) return 1.0 + double(1/3);
	
	else if(a1+a2+f < 65) return 1.0 + double(2/3);
	else if(a1+a2+f < 70) return 2.0;
	
	else if(a1+a2+f < 75) return 2.0 + double(1/3);
	else if(a1+a2+f < 80) return 2.0 + double(2/3);
	
	else if(a1+a2+f < 85) return 3.0;
	else if(a1+a2+f < 90) return 3.0 + double(1/3);

	else if(a1+a2+f < 95) return 3.0 + double(2/3);
	else if(a1+a2+f <= 100) return 4.0;
}

int main()
{
	int n;
	cin>>n;
	int total = 0;
	double sum = 0;
	for(int i=0;i<n;i++)
	{
		int a1,a2,f,c;
		cin>>a1>>a2>>f>>c;
		total+=c;
		//cout<<grade(a1,a2,f)<<endl;
		sum += grade(a1,a2,f) * c;
	}
	cout<<sum/total;
	return 0;
}


// 6
// 26 28 8 4  
// 17 12 36 4  
// 25 27 6 3
// 13 16 15 2
// 30 15 30 4
// 6 11 10 4

// calc 4.0 4
// discret 3.6 3
// linear 2.0 3
// pp1 4.0 4
// eng 0 3

// (4.0*4 + 3.6 *3 + 2.0 * 3 + 4.0 * 4+ 0 *3) / 17