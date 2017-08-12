

#include <bits/stdc++.h>
#define read() freopen("input", "r", stdin)
using namespace std;

int main(void)
{
	//read();
	int T;
	cin >> T;

	for(int i = 1, n; i <= T; i++){
		cin >> n;
		cin.ignore();

		string s, name;
		int mx = 0, rate;
		for(int j = 0; j < n; j++){
			cin >> name >> rate;

			if(rate > mx){
				mx = rate;
				s = name;
			}
		}
		cout << "Case " << i << ": " << s << " is ";
		if(mx >= 1600 and mx <= 1899)
			cout << "Expert!." << endl;
		else if(mx >= 1400 and mx <= 1599)
			cout << "Specialist!." << endl;
		else if(mx >= 1200 and mx <= 1399)
			cout << "Pupil!." << endl;
		else if(mx >= 1 and mx <= 1199)
			cout << "Newbie!." << endl;
	}

	return 0;
}
