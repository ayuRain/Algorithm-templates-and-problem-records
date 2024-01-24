#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[105], b[105];

    int sum_a = 0, sum_b = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] ;
        sum_a += a[i];
        sum_b += b[i];
    }

    if(sum_a == sum_b) {
       cout << "Draw" << endl;
    }else if(sum_a > sum_b) {
        cout << "Takahashi" << endl;
    }else {
        cout << "Aoki" << endl;
    }


}