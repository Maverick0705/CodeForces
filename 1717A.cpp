#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      ll n;
      cin >> n;

      ll a = n + (n/2) * 2;
      ll b = (n/3) * 2;

      ll ans;
      ans = a + b;

      cout << ans << endl;
   }
    
  return 0;
}