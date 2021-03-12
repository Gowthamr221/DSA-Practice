#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>

using namespace std;

float distance(int x1,int y1,int x2,int y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int testCases;
cin >> testCases;
while(testCases --){
    int x1,x2,x3,y1,y2,y3,Radius;
    cin >> Radius >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int count = 0;
    float R1_R2 = distance(x1,y1,x2,y2);
    float R2_R3 = distance(x2,y2,x3,y3);
    float R3_R1 = distance(x3,y3,x1,y1);

    if(R1_R2 > Radius){
        count++;
    }
    if(R2_R3 > Radius){
        count ++;
    }
    if(R3_R1 > Radius){
        count ++;
    }
    if(count == 0 || count ==1){
        cout << "yes" << endl;}
    else {cout << "no" << endl;
    }
   
}
return 0;
}