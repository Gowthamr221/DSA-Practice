#include<iostream>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

int main(){
   int testCases;
   cin >> testCases;
   while(testCases--){
	float quantity,price;
	cin >> quantity >> price;
    if(quantity > 1000){
	
	cout << fixed << quantity * price - 0.1 * quantity * price << endl;
   }
   else {cout << fixed << quantity * price << endl;
   }
   }
   

}
