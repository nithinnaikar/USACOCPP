// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; 
	cin >> n;

	int petals[n];
	for (int i = 0; i < n; i++){
		cin >> petals[i];
	}
	int numPhotos = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (j < i){
				continue;
				
			}
			else{
				int sum = 0;
				for (int k = i; k <= j; k++){
					sum += petals[k];
				}
				int length = j - i + 1;
				int average;
				if (sum % length == 0){
					average = sum / length;
				}
				else{
					average = -1;
				}
				for (int k = i; k <= j; k++){
					if (petals[k] == average){
						numPhotos += 1;
						break;
					}
				}
			
			}
		}
	}
	cout << numPhotos;
	

}