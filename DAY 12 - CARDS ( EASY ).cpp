#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin>>T;
  
  while(T--)
  {
      int N,X;
      cin>>N>>X;
      int face_down=N-X;
      int face_up=X;
      
      if(face_down<face_up)
      {
          cout<<face_down<<endl;
      }
      else if (face_down>face_up)
      {
          cout<<face_up<<endl;
      }
      else
      {
          cout<<face_up<<endl;
      }
  }

}
