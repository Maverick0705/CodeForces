#include<bits/stdc++.h>
using namespace std; 
#define ll long long int 

int main()
{ 
	int t=1; 
	cin>>t; 
	while(t--)
	{ 
		ll n,k; 
		cin>>n>>k; 
		ll a[n]; 
		for(int i =0;i<n;i++)
		{ 
			cin>>a[i]; 
		} 
		ll prefi[n]; 
		prefi[0] = a[0]; 
		for(int i = 1;i<n;i++)
		{ 
			prefi[i]= max(prefi[i-1],a[i]); 
		} 
		while(k--){ 
		ll x,y; 
		cin>>x>>y; 
		x--; 
		if(prefi[x]!=a[x]){ 
		cout<<0<<endl; 
		}else
		{ 
		int upper = upper_bound(prefi,prefi+n, a[x])-prefi; 
		if(prefi[x]==prefi[n-1]){ 
		if(x==0){ 
		cout<<max(0ll, y)<<endl;
		}else{ 
		cout<<max(0ll, y-x+1)<<endl; 
		} 
		}else{ 

		if(x!=0) 
		y-=(x-1); 
		cout<<max(0ll,min(y, (x!=0) + upper-x-1))<<endl; 
		} 
	} 
	} 
}

} 
