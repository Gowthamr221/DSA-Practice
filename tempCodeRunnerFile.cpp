#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){

int testCases;
cin >> testCases;
while(testCases --){
   string str1;
   string str2;
   int strLen = str1.length();
   cin >> str1 >> str2;
   int min=0,max=0;
   for(int loop = 0; loop < strLen; loop++){
	if(str1[loop] == '?' || str2[loop] == '?' || str1[loop] == str2[loop]){
		min++;
	}
	if(str1[loop] == '?' && str2[loop] == '?' && str1[loop] == str2[loop]){
		max++;
	}
}
	cout << min << " " << max;
}
return 0;
}
