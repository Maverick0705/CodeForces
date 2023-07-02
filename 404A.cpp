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
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];

void solve() {
  int i, j, n, m;
  cin >> n;
  char v[n][n];

  for(int i =0 ; i < n; i++)
  {
  	for(int j = 0; j < n ; j++)
  	{
  		cin >> v[i][j];
  	}
  }

  char a = v[0][0], b = v[0][1];
  int ac = 0 , bc = 0;
  
  for(int i =0 ; i< n ;i++)
  {
  	for(int j = 0; j < n;j++)
  	{
  		if(v[i][j] == a)
  		{
  			ac++;
  		}
  		else if(v[i][j] == b)
  		{
  			bc++;
  		}
  	}
  }

  bool flag = false;
  ll a_ct = 2*n - 1;
  ll b_ct = (n*n) - ((2*n) - 1);

 // cout << ac << " " << a_ct << " " << bc << " " << b_ct;
  if(ac == a_ct  && bc == b_ct)
  {
  	flag = true;
  	//cout << "YES";
  }
  else 
  {
  	cout << "NO" << nline;
  	return;
  }

  if(flag == true)
  {
  	int l = 0 , r = n-1;
  	//cout << l << " " << r << nline;
  	bool flag1 = false;
  	while(l < r)
  	{
  		if(v[l][l] == v[r][r])
  		{
  			++l; 
  			r--;
  			flag1 = true;
  		}
  		else
  		{
  			flag1 = false;
  			break;
  		}
  	}
  	int u = l , t = l;
  	//cout << u << " " <<t << nline;
  	while(u>= 0 && t<=n-1 && flag1 != false)
  	{
  		if(v[l][u] == v[r][t] && v[l][u] == a)
  		{
  			l++;
  			r++;
  			t++;
  			u--;
  			flag1 = true;
  		}
  		else {

  			flag1 = false;
  			break;
  		}
  	}

  	if(flag1 == true) cout<<"YES";
  	else cout << "NO";
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

