#include <bits/stdc++.h>
#define read() freopen("input", "r", stdin)
using namespace std;

int main(void)
{
	//read();
	int T;
	cin >> T;

	for(int i = 1, n; i <= T; i++){
		vector<int> v(3);
		for(int j = 0; j < 3; j++)
			cin >> v[j];
		cin >> n;
		
		vector<int> dif(3);
		adjacent_difference(v.begin(), v.end(), dif.begin());

		cout << "Case " << i << ": ";
		int f = dif[1];
		bool b = 1;
		for(int j = 2; j < dif.size(); j++){
			if(f == dif[j])
				b = 1;
			else{
				b = 0;
				break;
			}
		}
		if(!b)
			cout << "Error" << endl;
		else
			cout << dif[0] + (n - 1) * dif[1] << endl;
	}

	return 0;
}
