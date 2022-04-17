#include<iostream>
using namespace std;


void solve(){
    int x;
    cin>>x;
    if (x%3==0)
    {
        cout<<"NORMAL\n";
    }
    else if(x%3==1){
        cout<<"HUGE\n";
    }
    else
    cout<<"SMALL\n";
        
    
    

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

