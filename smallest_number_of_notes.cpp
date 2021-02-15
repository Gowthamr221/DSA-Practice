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
while(testCases --){
    int number;
    cin >> number;
    int count=0;
    if (number >= 100 ){
        count += number / 100;
        number = number % 100;
    }
    if(number >= 50){
        count += number / 50;
        number = number % 50;
    }
    if(number >= 10){
        count += number / 10;
        number = number % 10;
    }
    if(number >= 5){
        count += number / 5;
        number = number % 5;
    }
    if(number >=2){
        count += number / 2;
        number = number % 2;
    }
    if(number>=1){
        count += number;
    }

    cout << count << endl;
}
return 0;
}