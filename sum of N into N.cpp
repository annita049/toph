#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char c[100][100];
    int n,i,j;
    cin>>n;

    int a[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            cin>>c[i][j];

            if(c[i][j]>='a' && c[i][j]<='z')
                a[i][j]=(c[i][j]-'a')+1;
            else if(c[i][j]>='A' && c[i][j]<='Z')
                a[i][j]=(c[i][j]-'A')+1;
        }
    }
    int k,s1,s2[n];
    int s3=0,s4=0,S=0;

    for(i=0;i<n;i++){

        s1=0; s2[i]=0;
        for(j=0;j<n;j++){

            s1+=a[i][j];//row sum
            s2[i]+=a[j][i];//column sum
            //major diagonal sum
            if(i==j) s3+=a[i][j];
            //minor diagonal sum
            if(i+j==n-1) s4+=a[i][j];

        }
        //sum of all the elements
        S+=s1; //sum of the row sums

        cout<<s1<<endl;
    }

    for(i=0;i<n;i++)
        cout<<s2[i]<<endl;

    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<S<<endl;

    return 0;
}
