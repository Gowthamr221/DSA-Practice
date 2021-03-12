#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>

using namespace std;

int solution(int a,int b){

    while (a--)
    {
        b = (b*(b+1))/2;
    }

    return b;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int testCases;
cin >> testCases;

while(testCases --){
    int num1,num2;
    cin >> num1 >> num2;
    cout << solution(num1,num2) << endl;
}

return 0;
}