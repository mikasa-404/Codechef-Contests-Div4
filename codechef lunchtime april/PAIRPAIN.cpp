#include<bits/stdc++.h>
using namespace std;
int factor(int cnt){
    return ((cnt)*(cnt+1))/2;

}


void solve(){
    int N, cnt=0, cnt2=0;
    cin>>N;
    int A[N];
    for (int j = 0; j < N; j++) {
            cin>>A[j];
        }


    for (int i = 0; i < N; i++)
    {
        if(A[i]==1){
            cnt++;
        }
        if(A[i]==2){
            cnt2++;
        }
    }
    int factor2, factor1;
    
    factor2=factor(cnt2-1);
    factor1=factor(cnt);
    cout<<factor1<<" "<<factor2<<endl;
    int ans= (cnt*N)-factor1+factor2;
    cout<<ans<<endl;

    
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

