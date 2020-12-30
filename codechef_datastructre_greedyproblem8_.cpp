#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007

void assign_if_possible(string &s,int i){
    if(s[i]!='?' && s[i]!='C')
        return;

    if(s[i+1]!='?' && s[i+1]!='H')
        return;

    if(s[i+2]!='?' && s[i+2]!='E')
        return;

    if(s[i+3]!='?' && s[i+3]!='F')
        return;

    s[i]='C';
    s[i+1]='H';
    s[i+2]='E';
    s[i+3]='F';
}

int main(){
    FIO;
    int t,n,k,i,j;
    string s;
    cin >> t;
    while(t--){
        cin >> s;

        for(i=s.size()-4;i>=0;i--)   // check from right to left
            assign_if_possible(s,i);  // ans make it chef if possibe

        for(char &c:s)
            if(c=='?')
                c='A';

        cout << s << "\n";
    }
	return 0;
}

