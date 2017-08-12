#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string s;
	getline(cin, s);

	int up = 0, low = 0;
	for(int i = 0; i < s.length(); i++){
		if(isupper(s[i]))
			up++;
		if(islower(s[i]))
			low++;
	}

	cout << up << " " << low << endl;

	return 0;
}
