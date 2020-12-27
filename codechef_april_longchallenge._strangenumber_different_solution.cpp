#include <bits/stdc++.h>
using namespace std;
template<typename T = int> vector<T> create(size_t n){ return vector<T>(n); }
template<typename T, typename... Args> auto create(size_t n, Args... args){ return vector<decltype(create<T>(args...))>(n, create<T>(args...)); }
vector<int> decompose(int x){
	vector<int> factors;
	for(int i = 2; i * i <= x; i++){
		while(x % i == 0){
			x /= i;
			factors.push_back(i);
		}
	}
	if(x > 1) factors.push_back(x);
	return factors;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int x, k;
		cin >> x >> k;
		cout << (decompose(x).size() >= k) << '\n';
	}
	return 0;
}
