#include <bits/stdc++.h>
using namespace std;

int main() {
 int T;
 cin>>T;
 while(T--)
 {
     int b1,b2,b3;
     cin>>b1>>b2>>b3;
     
     if(b1==1 && b2==0 &&b3==0 ||b1==0 && b2==1 &&b3==0||b1==0 && b2==0 &&b3==1||b1==0 &&b2==0&&b3==0)
     {
         cout<<"Water Filling Time"<<endl;
     }
     else
     {
         cout<<"Not now"<<endl;
     }
 }

}
