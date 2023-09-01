#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ifstream inp("blist.in");

    int n; inp >> n;
    map<int, int> sv;
    map<int, int> tv;
    
    for (int i=0;i<n;i++) {
        int s, t, b;
        inp >> s >> t >> b;
        sv[s] = b;
        tv[t] = b;
    }

    int b_needed = 0;
    int max_b = 0;
    int time = sv[0];
    while (time <= tv.rbegin()->first) {
        auto sv_pos = sv.find(time);
        auto tv_pos = tv.find(time);
        if (sv_pos != sv.end())
            b_needed += sv_pos->second;
        if (b_needed > max_b) max_b = b_needed;
        if (tv_pos != tv.end()) //time is irrelevant
            b_needed -= tv_pos->second;


        time++;
    }
    inp.close();
    ofstream outp("blist.out");
    outp << max_b;
    outp.close();

    return 0;
}
