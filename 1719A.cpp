#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n , m;
		cin >>  n >> m;

		if(n %2 ==1 && m % 2 == 0)
		{
			cout << "Burenka" << endl;
		}
		else if (n %2 ==0 && m % 2 == 1)
		{
			cout << "Burenka" << endl;
		}
		else
		{
		 	cout <<"Tonya" << endl;
		}

	}
}