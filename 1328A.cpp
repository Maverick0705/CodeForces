#include<iostream>
using namespace std;

int main()
{
	int t ;
	cin >> t;
	while(t--)
	{
		long long int a , b ,n ,x , res;
		cin >> a >> b;

		if(a > b)
		{
			n = a/b;
			if(a%b == 0)
			{
				res = 0;
			}else{
			x = n+1;
			res= (b*x) - a;}
		}
		else
		{
			res = b -a;
		}

		cout << res << endl;
	}
}