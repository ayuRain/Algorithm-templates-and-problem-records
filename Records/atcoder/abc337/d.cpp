#include <algorithm>
#include <functional>
#include <iostream>
#include <cmath>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <stack>
#include <unordered_map>
#include <vector>
#include <bitset>
#include <set>
#include <queue>

int main() {
    std::ios_base::sync_with_stdio(false);
    int h, w, k;
    std::cin >> h >> w >> k;
    std::vector<std::string> grid(h);
    for (auto&row: grid) {
        std::cin >> row;
    }
    int min = 0x7fffffff;
    for (auto i = 0; i < h; ++i) {
        int last = -1;
        int count = 0;
        for (auto j = 0; j < w; ++j) {
            if (grid[i][j] == 'x') {
                last = j;
                count = 0;
                continue;
            }
            if (grid[i][j] == '.') {
                count++;
            }
            if (j > last + k && grid[i][j - k] == '.') {
                count--;
            }
            if (j - last >= k) {
                min = std::min(min, count);
            }
        }
    }
    for (auto i = 0; i < w; ++i) {
        int last = -1;
        int count = 0;
        for (auto j = 0; j < h; ++j) {
            if (grid[j][i] == 'x') {
                last = j;
                count = 0;
                continue;
            }
            if (grid[j][i] == '.') {
                count++;
            }
            if (j > last + k && grid[j - k][i] == '.') {
                count--;
            }
            if (j - last >= k) {
                min = std::min(min, count);
            }
        }
    }
    std::cout << ((min == 0x7fffffff) ? -1 : min) << std::endl;
    return 0;
}
