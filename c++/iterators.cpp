#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vi = {10, 20, 30};
    auto ptr1 = vi.begin();
    ptr1++;
    cout << *ptr1 << endl;

    for (ptr1 = begin(vi); ptr1 < end(vi); ptr1++) {
        cout << *ptr1 << endl;
    }

    string str1 = "Hello, World!";
    auto ptr2 = str1.begin();
    ptr2++;
    cout << *ptr2 << endl;

    vector<float> vf = {1.3, 3.4, 2.5, 2.5, 1.3, 2.6};
    auto ptr3Start = begin(vf);
    auto ptr3End = end(vf);

    int c = count(ptr3Start, ptr3End, 1.3);  // does not work on floats!
    cout << c << endl;

    vector<int> vi2 = {10, 30, 10, 20, 30, 20, 10, 50};
    auto ptr4Start = begin(vi2);
    auto ptr4End = end(vi2);

    c = count(ptr4Start, ptr4End, 10);
    cout << c << endl;

    vector<int>::iterator it = find(ptr4Start, ptr4End, 20);
    *it = 100;

    cout << endl;
    for (auto item:vi2) {
        cout << item << endl;
    }

    int *ints = new int[5];
    for (int i = 0; i < 5; i++) {
        *(ints+i) = i * 10;
    }

    auto it2 = find(ints, ints+4, 30);
    cout << endl;
    *it2 = 100;

    for (int i = 0; i < 5; i++) {
        cout << *(ints+i) << endl;
    }

    return 0;
}






