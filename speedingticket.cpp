// Source: https://usaco.guide/general/io

#include <fstream>
using namespace std;

int main(){
	ifstream fin("speeding.in");
	ofstream fout("speeding.out");

	int n, m;
	fin >> n >> m;
	int speedLimits[100]; 
	int start = 0;
	for (int i = 0; i < n; i++){
		int length, speedLimit;
		fin >> length >> speedLimit;
		for (int j = start; j < start + length; j++){
			speedLimits[j] = speedLimit;
		}
		start += length;
		
	}

	int bessieSpeeds[100];
	start = 0;
	for (int i = 0; i < m; i++){
		int length, bessieSpeed;
		fin >> length >> bessieSpeed;
		for (int j = start; j < start + length; j++){
			bessieSpeeds[j] = bessieSpeed;
		}
		start += length;
	}

	int maximumOver = 0;
	for (int i = 0; i < 100; i++){
		maximumOver = max(maximumOver, bessieSpeeds[i] - speedLimits[i]);
	}

	fout << maximumOver;

	
}