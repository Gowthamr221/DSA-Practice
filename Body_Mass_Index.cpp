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
    float height, weight;
    cin >> height >> weight;
    int BMI = height / (weight * weight);
    if(BMI <= 18){
        cout << 1 << endl;
    }
    else if(BMI >18 and BMI <=24){
        cout << 2 << endl;
    }
    else if(BMI > 24 and BMI <= 29){
        cout << 3 << endl;
    }
    else{
        cout << 4 << endl;
    }
}
return 0;
}