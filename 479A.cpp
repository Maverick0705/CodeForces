#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
	ll a, b , c;
	cin >> a >> b >> c;
	ll maxi = 0, mini = 11 , mid;

	if(a > b){ maxi = a;}
	else {maxi= b;}

	if(maxi < c){maxi = c;}

	if(a < b){mini = a;}
	else{mini = b; }

	if(mini > c){mini = c;}
 	
	mid = (a+b+c) - (mini+maxi);

	ll ans1 = (mini + mid) * maxi;
	ll ans2 = mini*mid*maxi;
	ll ans3 = mini+ (mid*maxi);
	ll ans4 = mini *(mid + maxi);
	ll ans5 = (mini*mid) + maxi;

	ll answer1 = max(ans1,ans2);
	ll answer2 = max(ans3,ans4);

	ll ansf = max(answer1, answer2);
	cout << max(ansf,ans5) << endl;

}