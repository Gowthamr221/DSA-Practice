#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<cctype>
#include<algorithm>

using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

//c++ stl
   vector <int> A ={ 11,2,3,14 };
   sort(A.begin(),A.end());  //(N longN)
   bool present = binary_search(A.begin(),A.end(),3);
   std::cout << present << endl;
   A.push_back(100);
   present = binary_search(A.begin(),A.end(),100);
   std::cout << present << endl;
   A.push_back(100);
   A.push_back(100);    
   A.push_back(100);
   A.push_back(100);
   A.push_back(100);
   A.push_back(123);

   vector<int>::iterator it =lower_bound(A.begin(),A.end(),100);
   cout << it << endl;
return 0;
}