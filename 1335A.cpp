#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	long long int n ,x , y;
	cin >> n;

	if(n%2 == 0)
	{
	x = (n/2) - 1;
	}
	else
	{
	x = n/2;
	}

	cout << x << endl;
	}
}