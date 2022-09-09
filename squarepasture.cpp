// Source: https://usaco.guide/general/io

#include <fstream>
#include <math.h>
using namespace std;

int main(){
	ifstream fin("square.in");
	ofstream fout("square.out");

	int rec1_bl_x, rec1_bl_y, rec1_tr_x, rec1_tr_y;
	int rec2_bl_x, rec2_bl_y, rec2_tr_x, rec2_tr_y;

	fin >> rec1_bl_x >> rec1_bl_y >> rec1_tr_x >> rec1_tr_y;
	fin >> rec2_bl_x >> rec2_bl_y >> rec2_tr_x >> rec2_tr_y;

	int boundaryWidth = abs(min(rec1_bl_x, rec2_bl_x) - max(rec1_tr_x, rec2_tr_x));
	int boundaryLength = abs(min(rec1_bl_y, rec2_bl_y) - max(rec1_tr_y, rec2_tr_y));
	
	// since all coordinate values are in the range 1...10 
	for (int sideLength = 1; sideLength <= 10; sideLength++){
		if (sideLength >= boundaryWidth && sideLength >= boundaryLength){
			fout << pow(sideLength, 2);
			break;
		}
	}
}
