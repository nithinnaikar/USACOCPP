#include <bits/stdc++.h>
using namespace std;

bool isRepeated(string str, string substring){
    int strLength = (int) str.length();
    int substrLength = (int) substring.length();
    int numRepeats = 0;
    for (int i = 0; i < strLength; i++){
        string candidate = str.substr(i, substrLength);
        bool repeated = candidate == substring;
        if (repeated){
            numRepeats += 1;
        }
        else{
            continue;
        }

    }
    if (numRepeats > 1){
        //cout << "Num repeats of " << substring << " " << numRepeats << "\n";
        return true;
    }
    else{
        return false;
    }
        
}

int main(){
    ifstream fin("whereami.in");
    ofstream fout("whereami.out");

    int length;
    fin >> length;
    string sequence; 
    fin >> sequence;   
    int k = 1;
    for (int m = 0; m < length; m++){
        for (int n = 1; n <= length - m; n++){
            string subsequence = sequence.substr(m, n);
            //cout << "Substring at values m: " << m << " n: " << n << " " << subsequence << "\n";
            if (isRepeated(sequence, subsequence)){
                //cout << "The substring above is repeated\n";
                int subseqLength = (int) subsequence.length();
                k = max(k, subseqLength + 1);
            }
        }
    }
    fout << k;
}
 
