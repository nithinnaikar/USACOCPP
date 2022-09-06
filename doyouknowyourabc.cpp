// Source: https://usaco.guide/general/io

#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int numbers[7];
	for (int i = 0; i < 7; i++){
		cin >> numbers[i];
	}
	sort(numbers, numbers + 7);
	int a = numbers[0];
	int b = numbers[1];
	int c = numbers[6] - (a + b);
	cout << a << " " << b << " " << c;
	
}