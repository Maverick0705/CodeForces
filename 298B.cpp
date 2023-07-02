#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	int n , sx , sy, ex , ey;
	cin >> n >> sx >> sy >> ex >> ey;

	string s;
	cin >> s;
	int ans = -1;
	bool flag = true;

	for(int i = 0; i < n; i++)
	{
		if(ex > sx)
		{
			if(s[i] == 'E')
			{
				sx++;
				if(sx == ex)
				{
					ans = max(ans, i + 1);
					break;
				}
				
			}
			else if(sx!= ex && i == n-1)
				{
					flag = false;
					cout <<"-1";
					return 0;
				}
		}
		else if(ex < sx)
		{
			if(s[i] == 'W')
			{
				sx--;
				
				if(sx == ex)
				{
					ans = max(ans, i + 1);
					break;
				}
				
			}
			else if(sx!= ex && i == n-1)
				{
					flag = false;
					cout <<"-1";
					return 0;
				}
		}

	}

	
	for(int i = 0; i < n; i++)
	{
		if(ey > sy)
		{
			if(s[i] == 'N')
			{
				sy++;
				if(sy == ey)
				{
					ans = max(ans, i + 1);
					break;
				}
				
			}
			else if(sy!= ey && i == n-1)
				{
					flag = false;
				}
		}
		else if(ey < sy)
		{
			if(s[i] == 'S')
			{
				sy--;
			
				if(sy == ey)
				{
					ans = max(ans, i +1 ) ;
					break;
				}
				
			}
			else if(sy!= ey && i == n-1)
				{
					flag = false;
				}
		}

	}

	if(flag == true)cout << ans ;
	else cout <<"-1" <<endl;

    
  return 0;
}