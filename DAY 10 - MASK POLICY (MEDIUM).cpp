#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--)
	{
	    int a,n;
	    cin>>n>>a;
	    
	    int uninfected=n-a;
	    
	    if(uninfected<a)
	    {
	        cout<<uninfected<<endl;
	    }
	    else
	    {
	       cout<<a<<endl;
	    }
	}
}
