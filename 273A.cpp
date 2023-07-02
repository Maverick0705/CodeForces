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
	   
	   string digit = "";
	   string sign = "";
	   
	   for(int i = 0; i< n ;i++)
	   {
	       if(s[i]!='+' && s[i] != '-')
	       {
	           digit+= s[i];
	       }
	       else
	       {
	           sign+= s[i];
	       }
	   }
	   
	   sort(digit.begin(), digit.end());
	   sort(sign.begin(),sign.end());
	   
	   string ans = "";
	   int j = digit.size();
	   int k = sign.size();
	   
	   int m = k-1;
	   
	   for(int i = 0; i < j ; i++)
	   {
	       if(k>= 0){
	           ans.push_back(digit[i]);
	           ans.push_back(sign[i]);
	           k--;
	       }
	       else
	       {
	           ans.push_back(digit[i]);
	       }
	   }
	   
	   reverse(ans.begin(), ans.end());
	   
	   cout << ans << "\n";
	}
	return 0;
}
