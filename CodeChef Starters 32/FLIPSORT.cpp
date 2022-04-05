#include<iostream>
using namespace std;
void flip(string &S, int i, int j){
    for (int i = 0; i <=j ; i++)
    {
        if (S[i]=='0')
        {
            S[i]='1';
        }
        else
            S[i]='0';
    }
    
}


void solve(){
    int len, flip_cnt;
    cin>>len;
    string S;
    cin>>S;
	int flip_len[len], k=0;
    for (int i = len-1; i >=0; i--)
    {
        if(S[i]=='0'&& S[i-1]=='1')
        {
            flip(S,0,i-1);
            flip_cnt++;
			flip_len[k]=i;
			k++;
        }
        
    }
    cout<<flip_cnt<<"\n";
	for (int i = 0; i<k; i++)
    {
	cout<<"1 "<<flip_len[i]<<"\n";
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


