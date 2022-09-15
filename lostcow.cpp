// Source: https://usaco.guide/general/io

#include <fstream>
#include <cmath> 
using namespace std;

int main(){
	ifstream fin("lostcow.in");
	ofstream fout("lostcow.out");
	int x, y;
	fin >> x >> y;
	int currentJohnPosition = x;
	bool found = false;
	int totalDistance = 0;
	int iterationNum = 1;
	int targetPosition;
	while (found == false){
		if (iterationNum % 2 != 0){
			targetPosition = x + (pow(2, iterationNum - 1));
		}
		else {
			targetPosition = x - (pow(2, iterationNum - 1));
		}
		if ((currentJohnPosition <= y and y <= targetPosition) || (targetPosition <= y and y <= currentJohnPosition)){
			found = true;
			totalDistance += abs(y - currentJohnPosition);
			currentJohnPosition = y;
		}
		else {
			totalDistance += abs(targetPosition - currentJohnPosition);
			currentJohnPosition = targetPosition;
		}
		iterationNum += 1;

	}
	fout << totalDistance;
}