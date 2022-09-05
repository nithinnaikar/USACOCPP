// Source: https://usaco.guide/general/io

#include <fstream>
using namespace std;

int main(){
	ifstream fin("teleport.in");
	ofstream fout("teleport.out");
	int a;
	int b;
	int x;
	int y;
	fin >> a >> b >> x >> y;
	// Simulating all reasonable cases
	int directDistance;
	int distanceUsingTeleportation1;
	int distanceUsingTeleportation2;
	directDistance = abs(a - b);
	distanceUsingTeleportation1 = abs(a - x) + abs(b - y);
	distanceUsingTeleportation2 = abs(a - y)  + abs(b - x);
	fout << min(min(distanceUsingTeleportation1, distanceUsingTeleportation2), directDistance);
}