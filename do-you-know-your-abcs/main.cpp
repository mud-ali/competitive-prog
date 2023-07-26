#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

//O(n)
bool contains(vector<int> v, int val) {
    for (uint8_t i=0;i<v.size();i++) {
        if (v[i] == val) return true;
    }
    return false;
}

int main() {
    vector<int> nums;
    
    // O(n)
    for (uint8_t i = 0; i < 7; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    //O(n^2)
    for (uint8_t i=0;i<7;i++) {
        for (uint8_t j=0;j<6;j++) {
            if (nums[j] > nums[j+1]) {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }



    int a = nums[0];
    int b = nums[1];
    int c;
    for (int k=2;k<7;k++) {
        if (nums[k] == a+b) continue;
        c = nums[k];
        break;
    }
    
    cout << a << " " << b << " " << c << "\n";
    return 0;
}
