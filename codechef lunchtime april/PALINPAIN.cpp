#include<bits/stdc++.h>
using namespace std;



void solve(){
    //possible to construct
    //if x and y both even or one even one odd
    //both even done
    //one even one odd then odd>1 if odd=1 -1
    //both odd -1
   
    int x,y;
    cin>>x>>y;
    int len=x+y;
    char s1[len];
        char s2[len];

    if(x%2!=0 && y%2!=0){
        cout<<"-1\n";
        return;
    }
    else if(x%2==0 && y%2==0){
        int len=x+y;
        for (int i = 0; i < x/2; i++)
        {
            s1[i]='a';
        }
        for (int i = x/2; i < len/2; i++)
        {
            s1[i]='b';
        }
        for (int i = 0; i < len/2; i++)
        {
            cout<<s1[i];
        }
        for (int j=((len/2)-1); j>=0; j--)
        {
            cout<<s1[j];
        }
        cout<<endl;

        for (int i = 0; i < y/2; i++)
        {
            s1[i]='a';
        }
        for (int i = y/2; i < len/2; i++)
        {
            s1[i]='b';
        }
        for (int i = 0; i < len/2; i++)
        {
            cout<<s1[i];
        }
        for (int j=((len/2)-1); j>=0; j--)
        {
            cout<<s1[j];
        }
        cout<<endl;

        
        

        

        
    
    }
    else {

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

