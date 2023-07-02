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
	    unordered_map <string, int> um;
	    string a , b , c;
	    vector<string>v1;
	    
	    vector<int>v4;


	    for(int i = 0; i < n; i++)
	    {
	    	cin >> a;
	    	v.push_back(a) ;
	    	um[v[i]]++;
	    }
	    for(int i = 0; i < n; i++)
	    {
	    	cin >> b;
	    	v.push_back(b) ;
	    	um[v[i]]++;
	    }
	    for(int i = 0; i < n; i++)
	    {
	    	cin >> c;
	    	v.push_back(c) ;
	    	um[v[i]]++;
	    }
	    for(int i = 0 ;i < n ;i++)
	    {
	    	int ans = 0;
	    	if(um[v[i]] == 1)
				{
					ans+= 3;
				}
				else if(um[v[i]] == 2)
				{
					ans+= 1;
				}
				else if(um[v[i]] >= 3)
				{
					ans+= 0;
				}

				v4.push_back(ans);
	    }
	    for(int i = 0 ;i < n ;i++)
	    {
	    	int ans = 0;
	    	if(um[v[i]] == 1)
				{
					ans+= 3;
				}
				else if(um[v[i]] == 2)
				{
					ans+= 1;
				}
				else if(um[v2[i]] >= 3)
				{
					ans+= 0;
				}

				v4.push_back(ans);
	    }
	    for(int i = 0 ;i < n ;i++)
	    {
	    	int ans = 0;
	    	if(um[v3[i]] == 1)
				{
					ans+= 3;
				}
				else if(um[v3[i]] == 2)
				{
					ans+= 1;
				}
				else if(um[v3[i]] >= 3)
				{
					ans+= 0;
				}

				v4.push_back(ans);
	    }
	    for(int i = 0 ;i < 3 ;i++)
	    {
	    	cout << v4[i] << " ";
	    }
	    cout << endl;




	}
}