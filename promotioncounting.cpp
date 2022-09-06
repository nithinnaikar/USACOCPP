// Source: https://usaco.guide/general/io

#include <fstream>
using namespace std;

int main(){
	ifstream fin("promote.in");
	ofstream fout("promote.out");

	int bronzeBefore, bronzeAfter;
	fin >> bronzeBefore >> bronzeAfter;

	int silverBefore, silverAfter;
	fin >> silverBefore >> silverAfter;

	int goldBefore, goldAfter;
	fin >> goldBefore >> goldAfter;

	int platinumBefore, platinumAfter;
	fin >> platinumBefore >> platinumAfter;

	int goldToPlatinum = platinumAfter - platinumBefore;
	int silverToGold = goldAfter - goldBefore + platinumAfter - platinumBefore;
	int bronzeToSilver = silverAfter - silverBefore + goldAfter - goldBefore + platinumAfter - platinumBefore;

	fout << bronzeToSilver << "\n" << silverToGold << "\n" << goldToPlatinum;

}