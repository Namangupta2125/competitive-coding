#include<bits/stdc++.h>
using namespace std;
#define ll long long 

long long hashfunction(string s)
{
    long long mod = 1000000007;
    ll ans = 0;
    for(int i =0;i<s.size();i++)
    {
        ll k = (s[i]-'a');
        k+=1;
        k*= pow(31,i);
        k%= mod;
        ans+=k;
    }
    return ans;
}
int main()
{
    cout<<(hashfunction("ab") == hashfunction("ab"));
}