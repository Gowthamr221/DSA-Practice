#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int testCases;
cin >> testCases;

while(testCases--){
    int number;
    int reverse=0;
    cin >> number;
    int n = number;
    while(n != 0){
        int digit  = n % 10;
        // in the first iternation reverse is 0
        reverse = (reverse*10)+digit;
        n = n/10;
    }

    if (reverse == number){
        cout << "wins" << endl;
    }
    else{
        cout << "loses" << endl;
    }

}

return 0;
}