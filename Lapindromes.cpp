#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>
#include<string.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int testCases;
cin >> testCases;
while(testCases --){
    string str;
    cin>> str;
    int strLen = str.length();
    string str_1 = "";
    string str_2 = "";
    for (int loop=0;loop<strLen/2;loop++){
        str_1 += str[loop];
        str_2 += str[strLen-loop-1];
    }
    sort(str_1.begin(),str_1.end());
    sort(str_2.begin(),str_2.end());

    if(str_1 == str_2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
return 0;
}