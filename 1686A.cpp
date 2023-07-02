#include<iostream>
using namespace std;

int main()
{

	int t ;
	cin >> t;
	while(t--){
    int n , arr[100];
	cin >> n;
	for(int i = 0; i < n ; i++)
	{
		cin >> arr[i];
	}
	int x = 0;
    float res = 0;
	for(int i = 0 ; i < n ; i++)
	{
		
	 	for(int j = 0 ; j < n ; j++)
	 	{
	 	  if(j != i)
	 	  {
	 	  	res = res + arr[j];
	 	  }
	 	}
	 	if( (res)/(n-1) == arr[i])
	 	{
	 		x++;
	 		break;
	 	}
	 	else {res = 0;}
	}

	if(x == 1)
	{
	   cout << "YES" << endl ;
	}
	else
	{
	cout << "NO" << endl;
	}
}

	return 0;
}