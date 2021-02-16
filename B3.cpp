#include <iostream>

#include<string>
using namespace std;
main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {int a,b,dem=0;
      cin>>a>>b;
      for(int j=a;j<=b;j++)
      {int ra=1;
          string s=to_string(j);
          for(int i=0;i<s.length()/2;i++)
          {
              if(s[i]!=s[s.length()-1-i]) {ra=0; break;}
          }
          if(ra) dem++;
      }
      cout<<dem<<endl;
  }
}
