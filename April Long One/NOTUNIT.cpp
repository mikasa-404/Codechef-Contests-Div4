//consecutive A=B, b=A+1 ans=-1(len=1 or 2)
//else if A is even ans=A, A+2;
//else if A is odd
// if len =3  ans=-1
    // and(B>=A+3 or len>= 4); ans A+1, A+3)
    // 
    #include<iostream>
using namespace std;


void solve(){
    int a, b, len;
    cin>>a>>b;
    len=b-a;
    if (len==0 or len==1)
    {
        cout<<"-1\n";
        return;
    }
    if (a%2==0)
    {
        cout<<a<<" "<<a+2<<"\n";
    }
    else if (len==3)
    {
        cout<<"-1\n";
    }
    else{
        cout<<a+1<<" "<<a+3<<"\n";
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

