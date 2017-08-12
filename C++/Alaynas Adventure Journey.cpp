#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	
	long int a, mx = 0;
	for(int i = 0; i < n; i++){
		cin >> a;
		mx = max(mx, a);
	}

	cout << mx << endl;

	return 0;
}
