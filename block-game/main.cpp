#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream inp("blocks.in");
    int n; inp >> n;
    map<char, int> letters;
    string abc = "abcdefghijklmnopqrstuvwxyz";
    for (int z=0;z<abc.size();z++) {
        letters[abc[z]] = 0;
    }

    for (int i=0;i<n;i++) {
        pair<string, string> block; 
        inp >> block.first >> block.second;
        vector<char> firstletters;
        for (char& c : block.first) {
            letters[c]++;
            firstletters.push_back(c);
        }
        for (int i=0;i<block.second.length();i++) {
            char c = block.second[i];
            auto it = find(firstletters.begin(), firstletters.end(), c);
            if (it != firstletters.end()) {
                firstletters.erase(it);
            } else {
                letters[c]++;
            }
        }
    }

    ofstream outp("blocks.out");
    for (auto let=letters.begin();let!=letters.end();let++) {
        outp << let->second << endl;
    }
    outp.close();
}
