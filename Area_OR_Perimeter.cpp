#include<iostream>
using namespace std;
int main(){
 int len,bre;
 cin >> len >> bre;
 int area = len * bre;
 int peri = 2 *(len+bre);
 if (area == peri){
 cout << "Eq" << endl;
 cout <<
 }
 else if(area > peri){
    cout << "Area"<<endl;
    cout << area << endl;
 }
 else {
    cout << "Peri" <<endl;
    cout << peri << endl;
 }
 return 0;
}