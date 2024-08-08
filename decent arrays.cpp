#include<iostream>
using namespace std;
int main()
{
    int a[100],i,sig=1,n;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            sig=0;
            break;
        }
    }
    if(sig==1)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
