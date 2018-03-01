#include <iostream>
using namespace std;

namespace first {
    int var = 5;
    int a = 1;
    int b = 2;
}

namespace second {
    int var = 10;
    int a = 3;
    int b = 4;
}

namespace third {
    int x, y, z;
}

namespace aratherstrangename {
    int w = 10;
}

int main() {
    int var = 15;

    // qualifying variables with namespace
    cout << first::var << endl;
    cout << second::var << endl;
    cout << var << endl;

    // using specific elements from nanespaces
    using first::a;
    using second::b;

    cout << a << endl;
    cout << b << endl;
    cout << first::b << endl;
    cout << second::a << endl;

    // using an entire namespace
    using namespace third;
    x = y = z = 10;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    // namespace alias
    namespace fourth = aratherstrangename;
    cout << fourth::w << endl;

    return 0;
}