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
while (testCases --)
{
    vector <int> arr(4);
for(int loop = 0;loop <4;loop++){
    cin >> arr.at(loop);
}
sort(arr.begin(),arr.end());

if (arr.at(0)==arr.at(1) && arr.at(2)==arr.at(3)){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl; 
}  
}


return 0;
}