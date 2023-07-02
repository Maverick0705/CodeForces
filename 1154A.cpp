#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int x1, x2, x3, x4;
	cin >> x1 >> x2 >> x3 >> x4;
	int arr[4];
	arr[0] = x1;
	arr[1] = x2;
	arr[2] = x3;
	arr[3] = x4;

	sort(arr , arr+4);

	int j[3];
	j[0] = arr[3] - arr[0];
	j[1] = arr[3] - arr[1];
	j[2] = arr[3] - arr[2];

	for(int i = 0 ; i < 3 ; i++)
	{
		cout << j[i] << " ";
	}

return 0 ;
}