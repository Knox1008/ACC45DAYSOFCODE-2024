#include <bits/stdc++.h>
using namespace std;
int max(int & a,int & b)
{
    return a>b?a:b;
}
int main() {
    int T;
    cin>>T;
    
    while(T--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ingredient_1=max(a,b);
        int ingredient_2=max(c,d);
        cout<<ingredient_1+ingredient_2<<endl;
        
    }

}
