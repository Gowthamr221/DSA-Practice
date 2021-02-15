#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>
#define ll long long int
using namespace std;
// lcm * hcf = a*b so if we write one fucntion we could use it for other

ll gcd(int x,int y){
    if(y==0){
        return x;
    }
    else{
        return gcd(y,x%y);
    }
}

ll lcm(int x,int y){
    return (x/gcd(x,y))*y;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int testCases;
cin >> testCases;
while (testCases--)
{
    ll A,B;
    cin >> A >> B;
    cout << gcd(A,B) <<" "<< lcm(A,B)<<endl;
}


return 0;
}