// Source: https://usaco.guide/general/io

#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream fin("word.in");
	ofstream fout("word.out");

	int n, k;
	fin >> n >> k;

	int currentCharacters = 0;

	for (int i = 0; i < n; i++){
		string word;
		int size;
		fin >> word;
		size = word.size();
		if (currentCharacters + size > k){
			fout << "\n" << word;
			currentCharacters = size;
		}
		else{
			if (i == 0){
				fout << word;
			}
			else{
				fout << " " << word;
			}
			currentCharacters += size;
		}
		

	}
}