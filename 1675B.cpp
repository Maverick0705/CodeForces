#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; 
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		int arr[n];

		for(int i = 0 ; i < n; i++)
		{
			cin >> arr[i];
		}

		int count = 0;
		bool ans = true;
		for(int i = n-2 ; i >= 0 ; i--)
		{
			if(arr[i+1] == 0)
			{
				ans = false;
				break;
			}

			while(arr[i] >= arr[i+1])
			{
				count++;
				arr[i] /= 2;
			}
	    }

	    
	    if(ans == false)
	    {
	    	cout << "-1" << endl;
	    }
	    else
	    {
	    	cout << count << endl;
	    }
}
}