#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
char input;
cin >> input;
if(input == 'A' ||  input == 'E' || input == 'I' ||  input == 'O' ||  input == 'U'){
    cout << "Vowel" << endl;
}
else {
    cout << "Consonant" << endl;
}
return 0;
}