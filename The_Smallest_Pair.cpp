#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>
#define ll long long int
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int testCases;
cin >> testCases;
while(testCases --){
    ll size,sum;
    cin >> size;
    ll arr[size];
    for(ll loop = 0;loop<size;loop++){
        cin >> arr[loop];
    }
    sort(arr,arr+size);
    sum = arr[0]+arr[1];
    cout << sum << endl;
}

return 0;
}