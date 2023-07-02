#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s= "leet**cod*e";
	int m= s.size();

	stack <char> t ;
        for(int i =0; i< s.size();i++)
        {
            t.push(s[i]);
            if(t.top() == '*')
            {	
                t.pop();
             
                t.pop();

            }
        } 
        string ans = "";
       while(! t.empty())
       {
           ans.push_back(t.top());
            t.pop();
        }
      
         reverse(ans.begin(), ans.end());
        cout << ans;
}
 