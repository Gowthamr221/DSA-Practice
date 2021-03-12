#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>
#define ll long long int
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll testCases;
cin >> testCases;
while(testCases --){
    ll seasons;
    cin >> seasons;
    ll totalDuration = 0;
    vector <ll> intro(seasons);
       for(ll loop=0;loop < seasons;loop++){
           cin >> intro.at(loop);
       }
       for(ll loop=0;loop<seasons;loop++){
           ll no_of_episodes;
           cin >> no_of_episodes;
           for(ll loop2 = 0;loop2 <no_of_episodes;loop2++){
               ll time;
               cin >> time;
               if(loop2 != 0){
                   totalDuration += time - intro[loop];
               }
               else{
                   totalDuration += time;
               }
           }
       }
       cout << totalDuration << endl;
}
 
return 0;
}