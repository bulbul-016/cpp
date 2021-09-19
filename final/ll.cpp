#include<bits/stdc++.h>

using namespace std;

int min_res(vector <int> massive, int n);

void answer(int minimum, int n, vector <int> massive);

int n, m, t;
vector <int> massive1, massive2;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> m;
        massive1.clear();
        massive2.clear();
        massive1.push_back(0);
        for (int j = 0; j < m; j++){
            cin >> t;
            massive1.push_back(t);
        }
        massive2 = massive1;
        massive1.push_back(1001);
        sort(massive1.begin(), massive1.end());
        answer(min_res(massive1, m), m, massive2);
    }
    return 0;
}

void answer(int minimum, int n, vector <int> massive)
{
    if (minimum == 1002) {
        cout<<"ZA"<< " "<< "WARUDO"<<endl;
    }else{
        for (int j = 1; j < n + 1; j++){
            if (minimum == massive[j]) {cout << j << endl; break;}
        }
    }
}

int min_res(vector <int> massive, int n)
{
    int mina = 1002;
    for (int j = 1; j < n + 1; j++) {
        if (massive[j - 1] != massive[j]) {
            if (massive[j + 1] != massive[j]) {
                if (mina > massive[j])
                    mina = massive[j];
            }
        }
    }
    return mina;
}