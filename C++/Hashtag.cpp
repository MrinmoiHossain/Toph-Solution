#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string s;
	getline(cin, s);

	string a = "";
	stringstream ss(s);
	string b;
	while(ss >> b)
		a += b;

	cout << a << endl;

	return 0;
}
