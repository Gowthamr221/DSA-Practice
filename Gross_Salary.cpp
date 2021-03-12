#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int sal;
        cin >> sal;
        double hra,da;
        hra = 0.10 * sal;
        da = 0.90 *sal;
        if (sal > 1500.00){
            hra=500;
            da = 0.98*sal;
        }
        double gross = sal+hra+da;
        cout << fixed << setprecision(2) << gross <<endl;
    }
    
}