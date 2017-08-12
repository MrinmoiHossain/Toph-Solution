#include <bits/stdc++.h>
#define MAX 1000100
using namespace std;

bool check[MAX];

void seive()
{
	int limit = sqrt(MAX);
	check[0] = check[1] = 1;

	for(int i = 4; i <= MAX; i += 2)
		check[i] = 1;

	for(int i = 3; i <= MAX; i += 2){
		if(!check[i]){
			if(i <= limit){
				for(int j = i * i; j <= MAX; j += i + i)
					check[j] = 1;
			}
		}
	}
}

int main(void)
{
	seive();
	int T;
	cin >> T;

	for(int i = 0, n; i < T; i++){
		cin >> n;

		if(!check[n])
			cout << n << " is a prime number." << endl;
		else
			cout << n << " is not a prime number." << endl;
	}

	return 0;
}

