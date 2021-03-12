#include<iostream>
#include<vector>

using namespace std;

int main(){

    int isPrime[100001];
    isPrime[0]=isPrime[1]=1;
    isPrime[2]=0;
    for(long long int i=3;i<=100001;i++){
        for(long long int j=i*i;j<=100001;j+=i){
            isPrime[j]=1;
        }
    }

    int testCases;
    cin >> testCases;
    vector<int>data(testCases);
    
    for(int loop=0;loop<testCases;loop++){
        cin >> data.at(loop);
    }
    for(int loop=0;loop<testCases;loop++){
        if(isPrime[data.at(loop)]==1){
            cout << "no" << endl;
        }
        else{
        }
    }

}