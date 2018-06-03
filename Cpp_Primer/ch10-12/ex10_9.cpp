#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void print(const vector<string> &v) {
    for (auto elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}

void elimDups(vector<string> &words) {
    print(words);

    sort(words.begin(), words.end());
    print(words);

    auto end_unique = unique(words.begin(), words.end());
    print(words);

    words.erase(end_unique, words.end());
    print(words);
}

int main() {

    vector<string> v{ "cd", "adf", "ef", "ef", "sf", "bs", "adf" };

    elimDups(v);

    return 0;
}
