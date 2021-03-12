#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>

void sieve(arr){
    int max = max(arr.begin(),arr.end());
    bool isPrime[max] = {0};
    for(int i = 2;i<=max;i++){
        if(isPrime[i]==0){
            for(int j = i*i;j<=max;j=j+i){
                isPrime[j]=1;
            }
        }
    }
    for(int i=0;i<arr.length(),i++){
        if(isprime[arr.at(i)]==0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int testCases;
cin >> testCases;
vector<int>arr();
while(testCases--){
    int input;
    arr.push_back(input);
}



return 0;
}