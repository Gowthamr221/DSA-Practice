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
    int Del_crg,Coupon,A1,A2,A3,B1,B2,B3;
    bool need_coupon = 0;
 
    cin >> Del_crg >> Coupon >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;
    int day1=0,day2=0;
    day1 = A1+A2+A3;
    day2 = B1+B2+B3;
    int day1_cpn=0,day2_cpn=0;
    if(day1 >= 150){
        day1_cpn = A1+A2+A3;
    }
    else{
        day1_cpn = A1+A2+A3+Del_crg;
    }
    if(day2 >= 150){
        day2_cpn = B1+B2+B3;
    }
    else{
        day2_cpn = B1+B2+B3+Del_crg;
    }
    if(day1+day2+2*Del_crg > day1_cpn+day2_cpn+Coupon){
        need_coupon = 1;
    }

    if(need_coupon == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}
return 0;
}