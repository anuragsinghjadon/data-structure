#include<bits/stdc++.h>
#define FOR0(i,n) for(ll i=0;i<n;i++)
#define FOR1(i,n) for(ll i=1;i<=n;i++)
#define FORl(i,l,n) for(ll i=l;i<n;i++)
using namespace std;
#define pi pair<ll,ll>
#define pb push_back
#define ll long long
#define ld long double
#define ff first
#define ss second
#define mp make_pair
#define mst0(x) memset(x,0,sizeof(x));
#define vi vector<ll>
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define sp <<" "<<
#define intmax 1e14
ll power(ll num,ll g,ll mod){
  if(g==0)return 1;
  if(g%2==1)return (num*power((num*num)%mod,g/2,mod))%mod;
  return power((num*num)%mod,g/2,mod);
}



int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		string s;
		cin >> s;
		if(s.size()==1){
			if(s[0]=='?') {
				cout << 0 << endl;
			}
			else if(s[0]-'0' < k){
			    cout << s << endl;
			}
			else cout << "NO" << endl;
			continue;
		}
		if (k == 1){
			if(s.size()==1 && (s[0]=='0' || s[0]=='?')){
				cout << "0" << endl;
			}
			else cout << "NO" << endl;
		}
		else if (k == 2){
			if (s.size()%2 == 1){
				cout << "NO" << endl;
			}
			else {
				int val = 0;
				int flag = 1;
				FOR0(i, s.size())
				{
					if (s[i] == val+'0' || s[i] == '?')
                    {
                    val^=1;

                    cout<<"val = "<< val<<"\n";
                    }
					else {
						flag = 0;
						break;
					}
				}
				if (s[0]==s[s.size()-1] && s[0]!='?') flag = 0;
				if (flag)
                    {
					val = 0;
					FOR0(i, s.size()) cout << val, val^=1;
					cout << endl;
					continue;
				}
				val = 1;
				flag = 1;
				FOR0(i, s.size()){
					if (s[i] == val+'0' || s[i] == '?') val^=1;
					else {
						flag = 0;
						break;
					}
				}
				if (s[0]==s[s.size()-1] && s[0]!='?') flag = 0;
				if (flag){
					val = 1;
					FOR0(i, s.size()) cout << val, val^=1;
					cout << endl;
					continue;
				}
				cout << "NO" << endl;
			}
		}
		else {
			int flag = 1;
			for (int i = 1; i < s.size(); i++){
				if(s[i]==s[i-1] && s[i]!='?'){
					flag = 0;
					break;
				}
			}
			if(s[s.size()-1]==s[0] && s[0]!='?') flag = 0;
			if (flag == 0){
				cout << "NO" << endl;
				continue;
			}

			if (s[0] == '?'){
				for(char cur='0'; cur <='2'; cur++){
					if(s[s.size() - 1]!=cur && s[1]!=cur) {
					    s[0] = cur;
					    break;
					}
				}
			}

			for (int i = 1; i < s.size() - 1; i++){
				if (s[i] == '?'){
					for(char cur='0'; cur <='2'; cur++){
						if(s[i-1]!=cur && s[i+1]!=cur) {
						    s[i] = cur;
						    break;
						}
					}
				}
			}

			if (s[s.size() -1 ] == '?'){
				for(char cur='0'; cur <='2'; cur++){
					if(s[s.size() - 2]!=cur && s[0]!=cur) {
					    s[s.size() - 1] = cur;
					    break;
					}
				}
			}
			cout << s << endl;

		}
	}
}
