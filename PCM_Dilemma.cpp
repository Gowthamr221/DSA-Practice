#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>
#include<string.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int testCases;
cin >> testCases;
while(testCases--){
    string str;
    cin >> str;
    int counter = 0;
    for(int loop =0;loop<3;loop++){
        if(str[loop] == 'P'){
            counter ++;
            break;
        }
    }
    for(int loop =0;loop<3;loop++){
        if(str[loop] == 'C'){
            counter ++;
            break;
        }
    }
    for(int loop =0;loop<3;loop++){
        if(str[loop] == 'M'){
            counter ++;
            break;
        }
    }
    if(counter == 3){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

return 0;
}