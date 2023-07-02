#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int flag =0 ;
		cin >> n;
		int arr[n];

		set<int> s;


		for(int i = 0; i < n ; i++)
		{
			cin >> arr[i];
		}

		for(int j = n-1 ; j>= 0 ; j--)
		{
			if(s.count(arr[j]))
			{
				cout << j+1 << endl;
				flag = 1 ;
				break;
			}
			else
			{
				s.insert(arr[j]);
			}
		}
		if(flag != 1)
		{
		 cout << "0" << endl;
		}
	}
}