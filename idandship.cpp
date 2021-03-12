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
    char input;
    cin >> input;
    if(input=='B' || input =='b'){
        cout << "BattleShip" << endl;
    }
    else if(input=='C' || input=='c'){
        cout << "Cruiser" << endl;
    }
    else if(input=='D' || input=='d'){
        cout << "Destroyer" << endl;
    }
    else if(input=='f' || input=='F'){
        cout << "Frigate" << endl;
    }
    else {}
}

return 0;
}