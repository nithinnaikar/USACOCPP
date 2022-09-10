// Source: https://usaco.guide/general/io
// 9/10 test cases

#include <fstream>
using namespace std;

int main(){

	ifstream fin("billboard.in");
	ofstream fout("billboard.out");

	int lawnMowerBLX, lawnMowerBLY, lawnMowerTRX, lawnMowerTRY;
	int cowFeedBLX, cowFeedBLY, cowFeedTRX, cowFeedTRY;

	fin >> lawnMowerBLX >> lawnMowerBLY >> lawnMowerTRX >> lawnMowerTRY;
	fin >> cowFeedBLX >> cowFeedBLY >> cowFeedTRX >> cowFeedTRY;
	
	int lawnMowerWidth = lawnMowerTRX - lawnMowerBLX;
	int lawnMowerLength = lawnMowerTRY - lawnMowerBLY;

	int intersectionWidth = min(lawnMowerTRX, cowFeedTRX) - max(lawnMowerBLX, cowFeedBLX);
	int intersectionLength = min(lawnMowerTRY, cowFeedTRY) - max(lawnMowerBLY, cowFeedBLY);

	if (intersectionWidth > 0 && intersectionLength > 0){
		if (intersectionWidth == lawnMowerWidth || intersectionLength == lawnMowerLength){
			int tarpArea = (lawnMowerWidth * lawnMowerLength) - (intersectionWidth * intersectionLength);
			fout << tarpArea;
		}
		else{
			int tarpArea = (lawnMowerWidth * lawnMowerLength);
			fout << tarpArea;
		}
		
		
	}
	else{
		int tarpArea = (lawnMowerWidth * lawnMowerLength);
		fout << tarpArea;
	}

	
}
