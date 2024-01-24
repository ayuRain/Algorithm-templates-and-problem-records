#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;



int cmp(int a, int b) {
    return a > b;
}


int main() {
    const int NUMN = 2e5 + 10;
    int t;
    cin >> t;
    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;
        int num[NUMN];
        int sum[NUMN];
        memset(sum, 0, sizeof sum);
        memset(num, 0, sizeof num);
        for(int i = 0; i < n; i ++) {
            cin >> num[i + 1];
        }
        sort(num + 1, num + n + 1, cmp);
        sum[1] = num[1];
        int sum_key = sum[1] ;
        for(int i = 2; i <= n; i ++) {
            sum[i] = sum[i - 1] + num[i];
            sum_key = max(sum_key, sum[i]);
        }
        int maxx = -1e9;
        for(int i = 0; i <= k; i++) {
            int res = sum[n] - sum[i] - 2 * (sum[min(i + x, n)] - sum[i]);
            //cout << "res: " << res << endl;
            maxx = max(maxx, res);
        }
        cout << maxx << endl;
    }
}