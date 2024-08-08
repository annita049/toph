#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int i,x=0,y=0;
    for(i=0;i<s1.length();i++){
        if(s1[i]>='0' && s1[i]<='9')
            x+=s1[i]-'0';
    }
    for(i=0;i<s2.length();i++){
        if(s2[i]>='0' && s2[i]<='9')
            y+=s2[i]-'0';a
    }
    if(x==1 || y==1)
        printf("\"%d\"",x*y);
    else printf("\"%d\"",x+y);
    return 0;
}