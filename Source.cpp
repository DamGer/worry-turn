#include <iostream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    int q, n;
    cin >> q;
    cin.ignore();
    vector<string> words;
    vector<int> turn;
    for (int i = 0; i < q; ++i) {
        string operation_code, ac;
        getline(cin, operation_code);
        if (operation_code == "WORRY_COUNT"s) {
            cout << accumulate(turn.begin(), turn.end(), 0) << endl; // обработка запроса WORRY_COUNT
        }

        else {
            operation_code.push_back(' ');
            for (int k = 0; k <= operation_code.size(); ++k) {
                if (operation_code[k] == ' ') {
                    words.push_back(ac);
                    ac = "";
                    continue;
                }
                ac += operation_code[k];
            }
            n = stoi(words[1]);
            if (words[0] == "WORRY") {
                turn[n - 1] = 1;
            }
            else if (words[0] == "QUIET") {
                turn[n - 1] = 0;
            }
            else if (words[0] == "COME") {
                turn.resize(turn.size() + n, 0);
            }
        }
        words.clear();
    }
}