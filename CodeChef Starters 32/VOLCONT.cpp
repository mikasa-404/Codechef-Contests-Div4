#include<iostream>
using namespace std;


void solve(){
    int x,y, diff;
    cin>>x>>y;
    diff=x-y;
    cout<<abs(diff)<<"\n";
    

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


