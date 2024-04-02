#include<bits/stdc++.h>
using namespace std;
#define ll long long 

long long gethash(string s)
{
    long long h = 0;
    for(auto x:s)
    {
        h = (h*31+(x-'a'+1));
    }
    return h;
}
bool checkifstring(string orignal,string tobefound)
{
   
    ll tobefoundhash = gethash(tobefound);
    ll window = gethash(string(orignal.begin(),orignal.begin()+tobefound.size()));
  //  cout<<tobefoundhash<<endl;
    int start = 0;
    for(int i = tobefound.size();i<orignal.size();i++)
    {
        
        if(window == tobefoundhash)
        return true;
        else{
            window-=((orignal[start]-'a'+1)*pow(31,tobefound.size()-1));
            window*=31;
            window+=(orignal[i]-'a'+1);
            start++;

        }
    }
    return false;
}

int main()
{
   cout<<checkifstring("abcba","bcb");
}