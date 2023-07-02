#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define yes  printf("YES\n")
#define no   printf("NO\n")
#define nline "\n"
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1'000'000'007;
const int N = 10e5 + 10, M = N;
//=======================

vi g[N];
ll a[N];
ll pf1[N];  
ll pf2[N];
void solve() {
  ll i, j, n, m , pf1_calc = 0 , pf2_calc= 0;
   cin >> n;
   fo(i,n)cin >> a[i];
	for(i = 0; i<=n;i++)
   		{
   			pf1_calc +=  a[i];      //prefix sum for unsorted
   			pf1[i]= pf1_calc;

   		}
   	sort(a,a+n);
   	for(i = 0; i<=n;i++)
   		{
   			pf2_calc +=  a[i];      //prefix sum for sorted
   			pf2[i]= pf2_calc;
   		}
   		

   ll t;
   cin >> t;
   vector<ll> ans;
   while(t--)
   {
   	
   	ll type , l , r, sum ;
   	cin >> type >> l >> r;

   	if(type == 1)
   	{
   		sum = pf1[r-1] - pf1[l-1-1]; // r-1 because 0 based indexing
   		ans.pb(sum);
   	}
   	else
   	{
   		
   		sum = pf2[r-1] - pf2[l-1-1]; // r-1 because 0 based indexing
   		ans.pb(sum);
   	}
   }

   for(int i = 0;i < ans.size(); i++)
   {
   	cout << ans[i] << nline;
   }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    while(t--) {
      solve();
    }

    return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m){
	int i, u, v;
	while(m--){
		cin>>u>>v;
    u--, v--;
		g[u].pb(v);
		g[v].pb(u);
	}
}

void dfs(int u, int par){
	for(int v:g[u]){
		if (v == par) continue;
		dfs(v, u);
	}
}

