#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int A = 0, B = 0, C = 0;
    for (int i = 0; i < s.length(); i++) {
        if(s[i] == 'A' && (B != 0 || C != 0)) {
            cout << "No" << endl;
            return 0;
        }else if (s[i] == 'B' && C != 0) {
            cout << "No" << endl;
            return 0;
        }else {
            if(s[i] == 'A') {
                A++;
            }else if(s[i] == 'B') {
                B++;
            }else {
                C++;
            }
        }
    }
    cout << "Yes" << endl;

}