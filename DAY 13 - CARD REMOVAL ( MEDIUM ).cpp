#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin>>T;
  
  while(T--)
  {
       vector<int>arr;
       int N;
       cin>>N;
       for(int i=0;i<N;i++)
       {
           int x;
           cin>>x;
           arr.push_back(x);
       }
       vector<int>freq(11,0);
       int f=0;
       for(int i=0;i<N;i++)
       {
         freq[arr[i]]++;
         f=max(f,freq[arr[i]]);
       }
       cout<<N-f<<endl;
  }

}
