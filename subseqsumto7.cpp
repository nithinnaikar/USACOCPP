// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	vector<long long> cows(n);
	vector<long long> prefixSumMod7(n + 1);
	for (int i = 0; i < n; i++){
		cin >> cows[i];
		prefixSumMod7[i + 1] = (prefixSumMod7[i] + cows[i]) % 7;
	}
	vector<int> lastFound(7, -1);
	int maximum = 0;
	for (int i = 0; i < prefixSumMod7.size(); i++){
		if (lastFound[prefixSumMod7[i]] == -1){
			lastFound[prefixSumMod7[i]] = i;
		}
		else{
			maximum = max(maximum, i - lastFound[prefixSumMod7[i]]);
		}
	}
	cout << maximum << endl;

}