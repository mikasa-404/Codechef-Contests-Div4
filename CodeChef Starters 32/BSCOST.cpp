#include<iostream>
using namespace std;


void solve(){
    int len, cost_01, cost_10;
    cin>>len>>cost_01>>cost_10;
    string S;
    cin>>S;
    int cnt1=0, cnt0=0;
    for (int i = 0; i < len; i++)
    {
       if(S[i]=='1')
        cnt1++;
       else
        cnt0++;  
    }
    //atleast 1 one and 1 zero
    if (cnt1>=1 && cnt0>=1)
    {
        if (cost_01<cost_10)
        {
            cout<<cost_01<<"\n";
        
        }
        else
            cout<<cost_10<<"\n";
        
    }
    else
        cout<<"0\n";
       

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


