#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int number;
cin >> number;

if(number%4 == 0){
    cout << number+1 << endl;
}
else{
    cout << number-1 << endl;
}

return 0;
}