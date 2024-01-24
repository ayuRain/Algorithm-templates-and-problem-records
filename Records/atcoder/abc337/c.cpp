#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num[300005];
    map<int, int>ma;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        ma[num[i]] = i;
    }

    vector<int>vec;
    vec.push_back(ma[-1]);
    while(vec.size() != n) {
        int k = vec.back();
        vec.push_back(ma[k]);
    }

    for(auto &i : vec) {
        cout << i << " ";
    }
    cout << endl;
}