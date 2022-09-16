// Source: https://usaco.guide/general/io

#include <fstream>
using namespace std;

int main(){
	ifstream fin("shuffle.in");
	ofstream fout("shuffle.out");

	int n;
	fin >> n;
	
	int shuffle[n];
	for (int i = 0; i < n; i++){
		int position;
		fin >> position;
		shuffle[i] = position - 1;
	}

	int finalOrder[n];
	for (int i = 0; i < n; i++){
		fin >> finalOrder[i];
	}

	int secondToLastOrder[n];

	for (int i = 0; i < n; i++){
		secondToLastOrder[i] = finalOrder[shuffle[i]];
	}
	
	int thirdToLastOrder[n];

	for (int i = 0; i < n; i++){
		thirdToLastOrder[i] = secondToLastOrder[shuffle[i]];
	}
	
	int firstOrder[n];

	for (int i = 0; i < n; i++){
		firstOrder[i] = thirdToLastOrder[shuffle[i]];
	}

	for (int i = 0; i < n; i++){
		fout << firstOrder[i] << endl;
	}




}