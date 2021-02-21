#include<iostream>
using namespace std;

int main(){

    int testCases;
    cin >> testCases;
    while(testCases--){
        int N,K,temp=0;
        cin >> N >> K;
        // here we are trying one thing
        // for what value of k the N%K is max
        // we store the maximum N%K that we can gets
        // here i am not writing K-- because it removes one required iteration
        while(K!=0){
            if(N%K > temp){
                temp = N%K;
            }
            K--;
        }
        cout << temp <<endl;
    }
}