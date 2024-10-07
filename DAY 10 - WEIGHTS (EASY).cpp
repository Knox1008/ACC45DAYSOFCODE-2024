#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--)
	{
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    
	    if(w==x || w==x+y ||w==y+z||w==x+z||w==y||w==z||w==x+y+z)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	

}
