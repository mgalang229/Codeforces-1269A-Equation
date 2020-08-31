#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ll n;
	cin >> n;
	if(n==1)
		cout << "9 8";
	else
		cout << 2*2*n << " " << 2*n+n;
	cout << "\n";
}
