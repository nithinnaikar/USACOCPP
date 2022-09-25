// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<pair<int, char>> information;
	for (int i = 0; i < n; i++){
		char character;
		cin >> character;
		int position;
		cin >> position;
		information.push_back({position, character});
	}
	
	sort(begin(information), end(information));

	int minLiars = n;

	for (int i = 0; i < n; i++){
		int numLiars = 0;
		for (int j = 0; j < i; j++){
			if (information[j].second == 'L'){
				numLiars += 1;
			}
		}

		for (int j = i + 1; j < n; j++){
			if (information[j].second == 'G'){
				numLiars += 1;
			}
		}

		minLiars = min(minLiars, numLiars);
	}

	cout << minLiars;
}