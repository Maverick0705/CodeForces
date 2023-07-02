#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n , sx , sy, ex , ey;
	cin >> n >> sx >> sy >> ex >> ey;

	string s;
	cin >> s;
	int ans = 0;
	unordered_map<char, int> um;
	for(int i = 0 ; i<n ; i++)
	{
		um[s[i]]++;
	}
	int dx = 0, dy = 0;
	if(ex > sx)
	{
		dx = ex - sx;
	}else if(sx > ex)
	{
		dx = abs(sx+ex);
	}

	if(ey > sy)
	{
		dy = ey - sy;
	}else if(sy > ey)
	{
		dy = abs(sy+ey);
	}

	while(1)
	{
		if(sx > ex)
		for(auto x: um)
		{
			if(x.first == 'W')
			{
				if(x.second >= dx)
				{
					flag = true;
					break;
				}
			}
		}
		else if(ex > sx)
		{
		for(auto x: um)
		{
			if(x.first == 'E')
			{
				if(x.second >= dx)
				{
					flag = true;
					break;
				}
			}
		}
	}
}
	while(1)
	{
		if(sy > ey)
		for(auto x: um)
		{
			if(x.first == 'N')
			{
				if(x.second >= dy)
				{
					flag = true;
					break;
				}
			}
		}
		else if(ex > sx)
		{
		for(auto x: um)
		{
			if(x.first == 'S')
			{
				if(x.second >= dx)
				{
					flag = true;
					break;
				}
			}
		}
	}
}

if(flag == false)
{
	cout << "-1" ; 
	return 0;
}
else
{
	
}



    
  return 0;
}