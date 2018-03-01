#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vi;

    for (int i = 10; i > 0; i--) {
        vi.push_back(i);
    }

    sort(begin(vi),end(vi));

    for (auto item:vi) {
        cout << item << endl;
    }

    vector<string> vs;

    vs.push_back("Lain");
    vs.push_back("Arisu");
    vs.push_back("Iroha");

    sort(begin(vs), end(vs));

    for (auto item:vs) {
        cout << item << endl;
    }

    int c = count(begin(vs[0]), end(vs[0]), 'i');
    cout << c << endl;

    vector<float> vf;
    vf.push_back(1.0);
    vf.push_back(3.2);
    vf.push_back(2.5);
    auto ptr = vf.begin();
    ptr++;
    cout << *ptr << endl;
    for (ptr = vf.begin(); ptr < vf.end(); ptr++) {
        cout << *ptr << endl;
    }
    ptr = vf.begin();
    ptr = next(ptr, 2);
    cout << *ptr << endl;

    return 0;
}