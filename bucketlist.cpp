// Source: https://usaco.guide/general/io

#include <fstream>
using namespace std;

int main(){
	ifstream fin("blist.in");
	ofstream fout("blist.out");

	int n;
	fin >> n;
	int s[n];
	int t[n];
	int b[n];
	for (int i = 0; i < n; i++){
		int start, end, buckets;
		fin >> start >> end >> buckets;
		s[i] = start;
		t[i] = end;
		b[i] = buckets;
	}

	int maxBuckets = 0;

	for (int i = 1; i <= 1000; i++){
		int bucketsAtTime = 0;
		for (int j = 0; j < n; j++){
			if (s[j] <= i && i <= t[j]){
				bucketsAtTime += b[j];
			}
		}
		maxBuckets = max(maxBuckets, bucketsAtTime);
	}
	

	fout << maxBuckets;
}