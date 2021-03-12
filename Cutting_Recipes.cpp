#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    while(testCases--){
        int N;
        cin >> N;
        int arr[N];
        for (int loop=0;loop<N;loop++)
        {
            cin >> arr[loop];
        }
        int min = *min_element(arr,arr+N);
        
    }
}