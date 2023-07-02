#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
int main()
{

    ll m,n,i,j ,x;
    ll cn=0,ans=0;
    cin>>m>>n>>x;
    i=m%x, j=n%x;
    ans=(i+j)/x;
    if( ans >=1 )
        cn=x- max(i,j);
    ans+=(m/x + n/x );
    cout<< ans <<  " "<<cn<<endl;

    return 0;
}




