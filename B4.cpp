#include <iostream>
using namespace std;
main()
{
    int m,n;
    cin>>n>>m;
    char a[100][100];
    int ra[100][100];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) {cin>>a[i+1][j+1]; ra[i][j]=0;}
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(a[i][j]=='*') {ra[i+1][j+1]=-1; continue;}
            else
            {
               if(a[i][j+1]=='*') ra[i+1][j+1]++;
                if(a[i][j-1]=='*') ra[i+1][j+1]++;
                    if(a[i+1][j+1]=='*')ra[i+1][j+1]++;
                    if(a[i+1][j-1]=='*') ra[i+1][j+1]++;
                    if(a[i+1][j]=='*') ra[i+1][j+1]++;
                    if(a[i-1][j]=='*') ra[i+1][j+1]++;
                       if(a[i-1][j+1]=='*') ra[i+1][j+1]++;
                         if(a[i-1][j-1]=='*') ra[i+1][j+1]++;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) {
                if(ra[i+1][j+1]==-1) cout<<'*'<<' ';
        else    cout<<ra[i+1][j+1]<<" ";}
        cout<<endl;
    }
}
