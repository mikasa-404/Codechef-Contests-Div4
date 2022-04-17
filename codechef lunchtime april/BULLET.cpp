#include<iostream>
using namespace std;


void solve(){
    int speed, distance, time_limit, time;
    cin>>speed>>distance>>time_limit;
    time=distance/speed;
    int diff= time_limit-time;
    if (time>=time_limit)
    {
        cout<<"0\n";
    }
    else{
        cout<<diff<<"\n";
    }
    

}

int main()
{
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

