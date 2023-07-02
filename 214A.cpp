#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n , m;
	cin >> n >> m;
	vector<pair<int, int>> v;

	int i =0 , j = max(n,m);
	while(i <= j)
	{
		if((pow(i , 2)+ j)< max(n,m))
		{
			i++;
		}
		else if((pow(i , 2)+ j) > max(n,m))
		{
			j--;
		}
		else
		{
			v.push_back(make_pair(i,j));
			i++;
		}
	}
	int count= 0;
	for(int i = 0; i< v.size();i++)
	{
		if((pow(v[i].second , 2) + v[i].first) == m)
		{
			count++;
		}
	}

	cout << count ;
    
  return 0;
}