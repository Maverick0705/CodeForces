#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n , k , r , c;
		cin >> n >> k >> r >> c;
		char arr[100001][100001];

		for(int i = 1; i<= n;i++)
		{
			for(int j =1 ; j<= n;j++)
			{
				arr[i][j] = '.';
			}
		}

		for(int l = 2 ; l <= n*2 ; l++)
		{
			if(abs(r+c -1) % k == 0)
			{
				for(int i = 1; i<= n;i++)
					{
						for(int j = 1; j <= n ;j++)
						{
							if(i+j == 1)
							{
							arr[i][j] = 'X';
							}
						}
					}
			}
		}


		for(int i = 1; i <= n;i++)
		{
			for(int j = 1; j<=n;j++)
			{
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;

	}
    
  return 0;
}