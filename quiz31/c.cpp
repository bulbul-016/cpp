#include <bits/stdc++.h>
using namespace std;
int N; 
int n1, n2, j; 
char smbl, l1, l2;
vector<int> N1, N2;
vector<char> Smbl, L1, L2;
void f1(int n1, int n2, char smbl, char l1, char l2){

for(int j = 0; j < N; j++){

    cout << L1[j] << " " << Smbl[j] << " " << L2[j] << " " << "= "; 

if (Smbl[j] == '+') cout << N1[j] + N2[j] << endl;
else if (Smbl[j] == '-') cout << N1[j] - N2[j] << endl;
else if (Smbl[j] == '*') cout << N1[j] * N2[j] << endl;
}

}


int main(){

cin >> N;

for (int i = 0; i < N ; i++) {
cin >> smbl >> l1 >> n1 >> l2 >> n2;

N1.push_back(n1);
N2.push_back(n2);
L1.push_back(l1);
L2.push_back(l2);
Smbl.push_back(smbl);

}

f1(n1, n2, smbl, l1, l2);
  
return 0;
}