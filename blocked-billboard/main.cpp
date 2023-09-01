#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int findInter(pair<pair<int,int>, pair<int, int>> rectone, pair<pair<int,int>, pair<int, int>> recttwo) {
    return max(0, min(rectone.second.first, recttwo.second.first) - max(rectone.first.first, recttwo.first.first))
        * max(0, min(rectone.second.second, recttwo.second.second) - max(rectone.first.second, recttwo.first.second));
}

int main() {
    pair<pair<int,int>, pair<int,int>> boardone;
    pair<pair<int,int>, pair<int,int>> boardtwo;
    pair<pair<int,int>, pair<int,int>> truck;

    ifstream inp("billboard.in");

    inp >> boardone.first.first >> boardone.first.second >> boardone.second.first >> boardone.second.second; 
    inp >> boardtwo.first.first >> boardtwo.first.second >> boardtwo.second.first >> boardtwo.second.second;
    inp >> truck.first.first >> truck.first.second >> truck.second.first >> truck.second.second;

    inp.close();

    int interone = findInter(boardone, truck);
    int intertwo = findInter(boardtwo, truck);

    int areaone = (boardone.second.first - boardone.first.first) * (boardone.second.second - boardone.first.second);
    int areatwo = (boardtwo.second.first - boardtwo.first.first) * (boardtwo.second.second - boardtwo.first.second);

    int vis = (areaone-interone) + (areatwo-intertwo);

    ofstream outp("billboard.out");
    outp << vis << endl;
    outp.close();
}
