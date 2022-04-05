#include<iostream>
using namespace std;


void solve(){
    int n,m , diff;
    cin>>n>>m;
    diff= n-m;
    if (diff <= 0)
    {
        cout<<n<<"\n";
    }
    else
        cout<<n+diff<<"\n";    

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


