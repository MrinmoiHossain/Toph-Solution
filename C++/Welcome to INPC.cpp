#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	cin.ignore();

	for(int i = 0; i < T; i++){
		string s;
		cin >> s;

		s[0] = toupper(s[0]);
		cout << "Welcome " << s << endl;
	}

	return 0;
}
