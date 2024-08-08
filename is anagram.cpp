#include<iostream>
using namespace std;

int main()
{
    string s1,s2;
    int c1[26]={0},c2[26]={0},i;
    cin>>s1>>s2;
    int l1=s1.length(),l2=s2.length();

    for(i=0;i<l1;i++) c1[s1[i]-'a']++;

    for(i=0;i<l2;i++) c2[s2[i]-'a']++;

    int sig=1;

    if(l1!=l2)sig=0;
    else
    {
        for(int i=0;i<26;i++){
            if(c1[i]!=c2[i])
            {sig=0; break;}
        }
    }
    if(sig==1) cout<<"Yes\n";
    else cout<<"No\n";

    return 0;
}
