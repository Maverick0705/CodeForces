#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
	long long int a , b , k;
	cin >> a >> b>> k;
    int m ;
	int x;
	
    x = (k /a);
    m = (x*a) + b;
    if(m > k)
    {
    	m = (((x-1) * a) + b);
    }
    cout << m << endl;
}
}