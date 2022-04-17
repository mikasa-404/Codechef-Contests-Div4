#include<iostream>
using namespace std;


void solve(){
    long int rent, cost,total_rent;
    cin>>rent>>cost;
    if (rent>=cost)
    {
        cout<<"0\n";
    }
    else {
        total_rent=cost/rent;
        cout<<total_rent<<"\n";
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

