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

		char p = '1';
		for(int j = 0; j < s.length(); j++){
			char c = s[j];
			if(tolower(p) == tolower(c))
				cout << "#";
			else{
				cout << c;
				p = c;
			}
		}
		cout << endl;
	}

	return 0;
}
