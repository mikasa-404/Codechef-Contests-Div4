#include<iostream>
using namespace std;


void solve(){
    int x,y;
    cin>>x>>y;
    if (y<=x)
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

