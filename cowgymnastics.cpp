// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int getRanking(int ranking[], int length, int cow){
    for (int c = 0; c < length; c++){
        if (ranking[c] == cow){
            return c;
        }
    }
}

int main(){
    ifstream fin("gymnastics.in");
    ofstream fout("gymnastics.out");

	int k, n;
    fin >> k >> n;
    int sessions[k][n];
    for (int i = 0; i < k; i++){
        for (int j = 0; j < n; j++){
            int cow;
            fin >> cow;
            sessions[i][j] = cow;
        }
    }

    int consistentPairs = 0;

    for (int i = 1; i <= n; i++){
        for (int j = i + 1; j <= n; j++){
            int higher = 0;
            int lower = 0;
            for (int s = 0; s < k; s++){
                int cowARanking = getRanking(sessions[s], n, i);
                int cowBRanking = getRanking(sessions[s], n, j);
                
                if (cowARanking < cowBRanking){
                    higher += 1;
                }
                else{
                    lower += 1;
                }
            }
            if ((higher == k) || (lower == k)){
                consistentPairs += 1;
            }
            
        }
    }

    fout << consistentPairs;
}