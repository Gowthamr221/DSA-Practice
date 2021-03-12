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

while(testCases--){
    ll N /*participants*/,K/*no of prolems*/;
    cin >> N >> K;
    ll problem_marks[K];
    ll participant_score[N]={0};
    for(ll loop = 0; loop < K;loop++){
        cin >> problem_marks[loop];
    }
    for(ll i=0;i<N;i++){
        string str;
        cin >> str;
        for(ll j=0;j<str.size();j++){
            if(str[j] == '1'){
                participant_score[i]=problem_marks[j]+participant_score[i];
            }
            
        }
         
    }
     for(ll loop=0;loop<N;loop++){
        cout << participant_score[loop] << endl;
    }
  
}

return 0;
}