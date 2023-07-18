/**********************************
		--------------------------
	Bismillahir Rahmanir Rahim
---------------------------

**********************************/
#include <bits/stdc++.h>

using namespace std;

#define ll 			long long
#define ull 		unsigned long long
#define inf 		1e9+7
#define gcd(a,b)	 __gcd(a,b)
#define lcm(a,b) 	(a*b)/gcd(a,b)
#define rev(v) 		reverse(v.begin(), v.end())
#define sort(v) 	sort(v.begin(), v.end())
#define forn(a,b)	for(int i = a;i < (b);++i)
#define forR(a,b)	for(int i = a;i < (b);--i)
#define testCase() 	int t;cin >> t;while(t--)
#define optimised()	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

/******************************-[SnowKingTree]-**************************************/

int ans(vector<int>v,vector<tuple<int,int,int>>&l) {
	int cnt = 0;
	for(auto [a,b,c] : l){
		swap(v[a],v[b]);
		if(v[c] == 1) cnt++;
	}

	return cnt;
}

void FrostMelon() {
  ifstream in ("shell.in");
  ofstream out("shell.out");
 	int n;
 	in >> n;
 	vector<tuple<int,int,int>>l;
 	for(int i =0;i<n;++i){
 		int a,b,g;
 		in >> a >> b >> g;
 		l.push_back(make_tuple(a-1,b-1,g-1));
 	}
 	vector<int>v = {1,0,0};
 	vector<int>counter;
	counter.push_back(ans(v,l));

 	vector<int>v1 = {0,1,0};
	counter.push_back(ans(v1,l));

 	vector<int>v3 = {0,0,1};
	counter.push_back(ans(v3,l));

	out << max({counter[0],counter[1],counter[2]});

}


int main() {
	optimised();
	// testCase()
		FrostMelon();

}
