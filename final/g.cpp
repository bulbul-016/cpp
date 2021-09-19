#include <bits/stdc++.h>

using namespace std;

int main(){
    string word1, word2;
    cin >> word1 >> word2;
    int res = 0;
    for(;;){
        if(word1 == word2){
            cout << res;
            return 0;
        }
        res++;
        string word3;
        for(int i = 0; i < word1.size() - 1; i++){
            word3 += word1[i];
        }
        word3 = word1.back() + word3;
        word1 = word3;
        if(res > 5555){
            cout << "Understandable have a nice day";
            return 0;
        }
    }
}
