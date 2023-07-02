#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n ; 
	cin >> n;
	int arr[n];
	int arr2[n];
	for(int i=1 ;i<=n;i++)
	{
		cin>>arr[i];
	}
	int i=1,j=1;
	while(i<=n)
	{
         if(arr[i] == j)
         {
         	arr2[j] = arr[i];
         	j++;
         }
         i++;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<arr2[i]<<" ";
	}
	return 0;
}