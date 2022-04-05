#include<iostream>
using namespace std;


void solve(){
    int size, capacity, enrolled, diff;
    cin>>size>>capacity>>enrolled;
    diff= capacity-enrolled;
    if (diff >= size)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";    

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


