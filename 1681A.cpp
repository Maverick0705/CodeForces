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
		vector<int> a(n);
		for(int i = 0; i < n ; i++)
		{
			cin >> a[i];
		}
		int m;
		cin >> m;
		vector<int>b(m);
		for(int i = 0; i < m ; i++)
		{
			cin >> b[i];
		}

		int x= *max_element(a.begin(), a.end());
		int y = *max_element(b.begin() , b.end());
	    
	    if(x>y)
	    {
	        cout << "Alice" << endl;
	        cout << "Alice" << endl;
	    }
	    else if(x<y)
	    {
	        cout << "Bob" << endl;
	        cout << "Bob" << endl;
	    }
	    else
	    {
	       cout <<"Alice" << endl;
	       cout <<"Bob" << endl;
	    }
	}
}