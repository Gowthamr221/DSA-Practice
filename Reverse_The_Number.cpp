#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>
#define ll long long int
using namespace std;


void solve(ll input){
    ll rev = 0;
    ll rem;
    while(input){
        rem = input%10;
        rev = rev * 10 + rem;
        rem = rem / 10;
    }
    cout << rev << endl;
}



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int testCases;
cin >> testCases;
while (testCases--)
{
    ll user_input;
    cin >> user_input;
    solve(user_input);
}

return 0;
}