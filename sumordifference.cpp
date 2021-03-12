#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int num1,num2;
cin >> num1 >> num2;

if(num1>num2){
    cout << num1-num2 << endl;
}
else{
    cout << (num1+num2) << endl;
}

return 0;
}