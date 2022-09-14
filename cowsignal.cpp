// Source: https://usaco.guide/general/io

#include <fstream>
using namespace std;

int main(){
	ifstream fin("cowsignal.in");
	ofstream fout("cowsignal.out");
	int m, n, k;
	fin >> m >> n >> k;
	for (int i = 0; i < m; i++){
		string currentLine;
		string amplifiedLine = "";
		fin >> currentLine;
		for (int j = 0; j < n; j++){
			char currentCharacter = currentLine[j];
			amplifiedLine += string(k, currentCharacter);
		}
		for (int t = 0; t < k; t++){
			fout << amplifiedLine << endl;
		}
		
		
	}
}