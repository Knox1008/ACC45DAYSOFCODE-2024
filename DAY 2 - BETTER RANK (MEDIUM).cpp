#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  cin>>T;
  while(T--)
{
  int dsa,toc,dm;
   cin>>dsa>>toc>>dm;
  int total=dsa+toc+dm;
  int dsa1,toc1,dm1;
  cin>>dsa1>>toc1>>dm1;
  int total1=dsa1+toc1+dm1;
  
  if(total>total1)
  {
      cout<<"DRAGON"<<endl;
  }
  else if(total1>total)
  {
      cout<<"SLOTH"<<endl;
  }
  else
  {
      if(dsa>dsa1)
      {
          cout<<"DRAGON"<<endl;
      }
      else if(dsa1>dsa)
      {
          cout<<"SLOTH"<<endl;
      }
      else
      {
          if(toc>toc1)
          {
              cout<<"DRAGON"<<endl;
          }
          else if(toc1>toc)
          {
              cout<<"SLOTH"<<endl;
          }
          else
          {
              if(dm>dm1)
              {
                  cout<<"DRAGON"<<endl;
              }
              else if(dm1>dm)
              {
                  cout<<"SLOTH"<<endl;
              }
              else
              {
                  cout<<"TIE"<<endl;
              }
          }
          
      }
  }
  
}
}
