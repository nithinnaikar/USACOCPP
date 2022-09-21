// Source: https://usaco.guide/general/io

#include <fstream>
using namespace std;

int main(){
	ifstream fin("pails.in");
	ofstream fout("pails.out");

	int x, y, m;
	fin >> x >> y >> m;

	int var1 = m / x;
	int var2 = m / y;

	// Checking all possible (reasonable) combinations of moves
	int answer = 0;
	int candidate = 0;
	for (int i = 0; i <= var1; i++){
		for (int j = 0; j <= var2; j++){
			candidate = (x * i) + (y * j);
			if (candidate <= m){
				answer = max(answer, candidate);
			}
		}
	}

	fout << answer;
}