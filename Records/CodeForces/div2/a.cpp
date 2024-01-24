#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int minn = -1;
        int maxx = 1e9 + 7;
        int num_a3 = 0;
        set<int> se;
        while(n--) {
            int a, x;
            cin >> a >> x;
            if(a == 1) {
                minn = max(minn, x);
            }
            if(a == 2) {
                maxx = min(x, maxx);
            }
            if(a == 3) {
                se.insert(x);
            }
            //cout << "minn:" << minn << " maxx: " << maxx << endl;
        }
        for(auto &i:se) {
           if(i >= minn && i <= maxx) {
               num_a3 ++;
           }
        }
        int answer = maxx - minn - num_a3 + 1;
        if(answer < 0) {
            answer = 0;
        }
        cout << answer << endl;

    }
}