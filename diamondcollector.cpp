// Source: https://usaco.guide/general/io

#include <fstream>
#include <algorithm>
using namespace std;

int main(){
	ifstream fin("diamond.in");
	ofstream fout("diamond.out");

	int n, k;
	fin >> n >> k;
 
	int sizes[n];
	for (int i = 0; i < n; i++){
		fin >> sizes[i];
	}

	sort(sizes, sizes + n);

	int answer = 0;

	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if ((sizes[j] - sizes[i]) <= k){
				answer = max(answer, j - i + 1);
			}
		}
	}
	
	fout << answer;
}
