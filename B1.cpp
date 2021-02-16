#include <iostream>
using namespace std;
main()
{
    int n,x;
    cin>>n;
   int b[10000]={0};
    for(int i=0;i<n;i++) {cin>>x; b[x]++; if(b[x]>1) {cout<<"yes"; return 0;}}
    cout<<"no";
}
