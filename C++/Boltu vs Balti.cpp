#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main(void)
{
	ll a, b;

	while(cin >> a >> b){
		
		if(a > b)
			swap(a, b);
		ll c = a - 1;

		cout << "Sum of " << a << " to " << b << " is -> " << ((b *(b + 1)) - (c * (c + 1))) / 2 << ";" << endl;
	}

	return 0;
}
