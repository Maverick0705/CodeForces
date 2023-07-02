#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n , k;
		cin >> n >> k;
		int br = n/2;
		int flag = 0;
		int u = 0 , m = 0;

		for(int i = 1; i < n; i++)
		{
			for(int j = i+1 ; j < i+2 ; j++)
			{

				if( ((i+k) * j) % 4 == 0 && i != j)
				{
					m++;
					u++;
					br--;
				}
				if(m == 1)
				{
					cout << "YES" << endl;
					m = 10;
				} 
				if(u == 1)
				{
					cout << i << " " << j << endl;
					u = 0;
					i = j+1;
				}
				if(br == 0)
				{
					flag = 1;
					break;
				}
			}
			if(flag == 1)
				break;
		}
		if(br == n/2)
		{
			cout << "NO" << endl;
		}
	
	}
}