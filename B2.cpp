#include <iostream>
using namespace std;
main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i]) {cout<<"no"; return 0;}
    }
    cout<<"yes";
}
