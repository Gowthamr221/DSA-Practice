#include<iostream>
#include<vector>
#define ll long long int

ll lowerBoundary(int a){
    if(a < 0){
        return 0;
    }
    else {
        return a;
    }
}

ll higherBoundery(int b){
    if(b >= 100){
        return 100;
    }
    else{
        return b;
    }
}


using namespace std;

int main(){
ll testCases;
cin >> testCases;
while(testCases--){
    ll no_cops,hs_min,time;
    cin >> no_cops >> hs_min >> time;
    vector<ll>houses(no_cops);
    for(ll loop=0;loop<no_cops;loop++){
        cin >> houses.at(loop);
    }
    ll search_range = hs_min * time;
    vector<ll>village(100,1);

    for(ll loop = 0;loop < no_cops;loop++){
        
        ll lower_bound = houses.at(loop)-search_range-1;
        ll higher_bound = houses.at(loop)+search_range;

        lower_bound = lowerBoundary(lower_bound);
        higher_bound = higherBoundery(higher_bound);
        for(ll loop2 = lower_bound;loop2<higher_bound;loop2++){
            village.at(loop2) = 0;
            // 0 = police came
        }
    }
    ll sol = 0;
    for(ll loop=0;loop<100;loop++){
        sol = sol + village.at(loop);
    }
    if(sol > 0){
        cout << sol << endl;
    }
    else {
        cout << 0 << endl;
    }
}
}