#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define pii pair<int,int>
#define pll pair<long long,long long>
#define mod 1000000007
#define MAX 1000000000
#define MIN -1000000000
#define PI acos(-1.0)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define mid(s,e) (s+(e-s)/2)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a*b)/gcd(a,b))
#define sq(n) n*n
#define cube(n) n*n*n
// #define READ freopen("input.txt", "r", stdin);
// #define WRITE freopen("output.txt", "w", stdout);
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main(int argc, char const *argv[])
{
// 	READ WRITE
    FAST_IO

	int t; cin>>t;
	while(t--) {
		int n, ans=0; cin>>n;
		unordered_set<int> m;
		for(int i=0 ; i<n ; i++) {
			int x; cin>>x;
			if(m.count(x) == 0) {
				m.insert(x); ans++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
