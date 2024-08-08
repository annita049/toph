#include<iostream>
#include<algorithm>
using namespace std;

int removeDups(int c[],int k){

    int temp[k],z=0;
    for(int i=0;i<k-1;i++){
        if(c[i]!=c[i+1])
            temp[z++]=c[i];
    }
    temp[z++]=c[k-1];

    for(int i=0;i<z;i++) c[i]=temp[i];

    return z;
}


int main()
{
    int n,m,i;
    cin>>n>>m;
    int a[n],b[m];

    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];

    //UnionSet
    int k=0;
    int c[n+m];

    for(int i=0;i<n;i++) c[k++]=a[i];
    for(int i=0;i<m;i++) c[k++]=b[i];

    sort(c,c+k);

    //prints.
    int t=removeDups(c,k);

    for(i=0;i<t;i++)
        cout<<c[i]<<" ";

    cout<<endl;

    return 0;
}


