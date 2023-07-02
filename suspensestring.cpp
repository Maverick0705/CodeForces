#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    
	    if(n == 1 || n == 2)
	    {
	        cout << s << "\n"; 
	    }
	    else{
	    int l = 1, r = n-1 , flag = 1;
	    
	    string back,front = "";
	    back.push_back(s[0]);
	    while(l <= r)
	    {
	        if(flag==1)
	        {
	            if(s[r] == '0')
	            {
	                back.push_back(s[r]);
	                r--;
	            }else
	            {
	                front.push_back(s[r]);
	                r--;
	            }
	            flag = 0;
	        }
	        else
	        {
	            if(s[l] == '0')
	            {
	                front.push_back(s[l]);
	                l++;
	            }
	            else
	            {
	                back.push_back(s[l]);
	                l++;
	            }
	            flag = 1;
	        }
	        
	    }
	    reverse(front.begin(),front.end());
	    

	    string ans = front + back;
	    cout << ans << "\n";
	}
	}
	return 0;
}
