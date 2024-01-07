//
// Created by ayu on 2024/1/6.
//

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sNow = 0;
        int tNow = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (sNow == 0 && tNow == 0) {
                sNow = a;
            } else if (a <= sNow && a <= tNow) {
                if (sNow >= tNow) {
                    tNow = a;
                } else {
                    sNow = a;
                }
            } else if (a <= sNow) {
                sNow = a;
            } else if (a <= tNow) {
                tNow = a;
            } else {
                if (tNow == 0) {
                    tNow = a;
                   // cout << "tNow: " << tNow << endl;
                }else {
                    cnt ++;
                    if(sNow > tNow) {
                        tNow = a;
                    }else {
                        sNow = a;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
}