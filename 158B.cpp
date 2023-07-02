#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];

	for(int i =0 ; i < n; i++)
	{
		cin >> arr[i];
	}

	int ma = 0;
	for(int i = 0 ; i < n ; i++)
	{
		ma = max(ma , arr[i]);
	}

	int freq[ma+1] = {0};

	for(int i = 0 ; i < n ; i++)
	{
		freq[arr[i]]++;
	}
	/*for(int i = 0 ; i < n ; i++)
	{
		cout << "freq of "<< i << " is " << freq[i] << " ";
		cout << endl;
	}*/
	int taxi = 0;
	taxi = freq[4];

	taxi = taxi + freq[3];
	freq[1] = freq[1] - freq[3];
	if(freq[1] < 0)
	{
		freq[1] = 0;
	}

	taxi = taxi + (freq[2]/2);
	if(freq[2] % 2 == 0)
	{
		freq[2] = 0;
	}
	else
	{
		freq[2] = 1;
	}

	freq[1] = freq[1] + freq[2] * 2;

	if(freq[1] % 4 == 0)
	{
		taxi = taxi + freq[1]/4;
	}
	else
	{
		taxi = taxi + freq[1]/4 + 1;
	}

	cout << taxi << endl;

	}