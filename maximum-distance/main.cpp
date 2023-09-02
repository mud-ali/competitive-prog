#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    vector<pair<int,int>> points(n);

    for (pair<int,int> &e : points) cin >> e.first;
    for (pair<int,int> &e : points) cin >> e.second;

    long double maxEuclideanDistance = 0;
    for (int j=0;j<n;j++) {    
        for (int i=1;i<n;i++) {
            if (i==j) continue;
            auto p1 = points[i];
            auto p2 = points[j];

            long double distance = (pow(p2.first - p1.first, 2)+pow(p2.second-p1.second, 2));
            maxEuclideanDistance = distance > maxEuclideanDistance ? distance : maxEuclideanDistance;
        }
    }
    long long ans = (long long)(maxEuclideanDistance);
    cout << ans << endl;

    return 0;
}
