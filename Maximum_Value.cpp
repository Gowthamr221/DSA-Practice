#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>
#define ll long long int
using namespace std;

ll expression (ll x ,ll y){
    return x*y+max(x-y,y-x);
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll testCases;
cin >> testCases;
while(testCases --){
    ll n ,i;
    cin >> n;
    vector <ll> a(n);
    for(i=0;i < n;i++)
    cin >> a[i];
    sort(a.begin(),a.end());
    ll mx1 = expression(a[1],a[0]);
    ll mx2 = expression(a[n-1],a[n-2]);
    ll mx3 = expression(a[n-1],a[0]);
    cout << max({mx1,mx2,mx3})<<endl;
}


return 0;
}