#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	/*vector<vector<int>> v
	{
		{1 ,2, 3, 4, 5}, 
		{6 ,7, 8, 9, 10}, 
		{11, 12, 13, 14, 15},
		{16 ,17, 18, 19, 20},
		{21 ,22, 23, 24, 25}
	};*/
	int n ,m;
	cin >> n >>m;
	vector<vector<int>> v;
	for(int i =0 ; i < n;i++ )
	{
		vector<int > row;
		for(int j =0 ; j< m;j++ )
		{
			int temp;
			cin >> temp;
			row.push_back(temp);
		}
		v.push_back(row);
	}
	for(int i = 0; i < v.size() ; i++)
	{
		for(int j =0 ; j < v[i].size(); j++)
		{
			cout << v[i][j] << " ";
		}
	}
	cout << endl;
	
	int top = 0 , left = 0 , right = v[0].size()-1 , bottom = v.size()-1;

	int dir = 1;

	while(left <= right && top <= bottom)
	{
		if(dir == 1)
		{
			for(int i = left; i <= right ; i++)
			{
				cout << v[top][i] << " ";
			}
			dir = 2;
			top++;
		}
		if(dir == 2)
		{
			for(int i = top; i <= bottom ; i++)
			{
				cout << v[i][right] << " ";
			}
			dir = 3;
			right--;
		}
		if(dir == 3)
		{
			for(int i = right; i >= left ; i--)
			{
				cout << v[bottom][i] << " ";
			}
			dir =4;
			bottom--;
		}
		if(dir == 4)
		{
			for(int i = bottom; i >= top; i--)
			{
				cout << v[i][left] << " ";
			}
			dir = 1;
			left++;
		}


	}


}