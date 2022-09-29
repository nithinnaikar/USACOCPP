// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int numbers[n];
	for (int i = 0; i < n; i++){
		cin >> numbers[i];
	}

	sort(numbers, numbers + n);
	
	int distinctNums = 1;

	for (int i = 1; i < n; i++){
		int prevNumber = numbers[i - 1];
		if (numbers[i] != prevNumber){
			distinctNums += 1;
		}
	}

	cout << distinctNums;


}