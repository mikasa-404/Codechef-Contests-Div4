#include<iostream>
using namespace std;


void solve(){
    int rent, cost, months, total_rent;
    cin>>rent>>cost>>months;
    total_rent= rent * months;
    if (total_rent<cost)
    {
        cout<<"YES"<<"\n";
    }
    else {
        cout<<"NO"<<"\n";
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

