// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int n;
string names[] = {"Beatrice","Sue","Belinda","Bessie","Betsy","Blue","Bella","Buttercup"};

int main(){
	ifstream fin("lineup.in");
	ofstream fout("lineup.out");

	vector<pair<string, string>> pairs;
	
	sort(names, names + 8);

	fin >> n;

	for (int i = 0; i < n; i++){
		string t;
		pair<string, string> p;
		fin >> p.first >> t >> t >> t >> t >> p.second;
		pairs.push_back(p);
	}

	do{
		bool add = true;
		for (pair<string, string> p : pairs){
			for (int i = 0; i < 8; i++){
				if (i == 0){
					if (p.first == names[i]){
						if (p.second != names[i + 1]){
							add = false;
						}
					}
				}
				else if (i == 7){
					if (p.first == names[i]){
						if (p.second != names[i - 1]){
							add = false;
						}
					}
				}
				else {
					if (p.first == names[i]){
						if ((p.second != names[i - 1]) && (p.second != names[i + 1])){
							add = false;
						}
					}
				}
			}
		}
		
		if (add){
			break;
		}
	}while(next_permutation(names, names + 8));

	for (string name: names){
		fout << name << "\n";
	}
}