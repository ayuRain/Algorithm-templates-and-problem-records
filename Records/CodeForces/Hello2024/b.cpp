//
// Created by ayu on 2024/1/6.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        int lengths;
        cin >> lengths >> s;
        int plusNum = 0;
        int subNum = 0;
        for (int i = 0; i < lengths; i++) {
            if(s[i] == '+') {
                plusNum ++;
            } else{
                subNum ++;
            }
        }
        int res = abs(plusNum - subNum);
        cout << res << endl;
    }
}