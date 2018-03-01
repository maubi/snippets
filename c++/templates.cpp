#include <iostream>
using namespace std;

// one type parameter
template <class T>
T getMax(T a, T b) {
    T result;
    result = (a>b) ? a : b;
    return result;
}

// two type parameters
template <class T, class U>
T getMin(T a, U b) {
    T result;
    result = (a<b) ? a : b;
    return result;
}

// only return type parametrization
template <class T>
T getPI() {
    float pi = 3.14159456;
    return (T) pi;
}

// template class
template <class T>
class Pair {
    T values[2];
public:
    Pair(T first, T second) {
        values[0] = first;
        values[1] = second;
    }
    void printStr() {
        cout << values[0] << " " << values[1] << endl;
    }
};

// template class with external member function definition
template <class T>
class Point3D {
    T x, y, z;
public:
    Point3D(T a, T b, T c) {
        x = a; y = b; z = c;
    }
    void printStr();        // prototype
    void printMultiline() {
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }
};

// function member definition
template <class T>
void Point3D<T>::printStr() {
        cout << "X: " << x << " Y: " << y << " Z: " << z << endl;
}

template <class T>
class Container {
    T element;
public:
    Container (T argA) {
        element = arg;
    }
    T increase() { return ++element;}
};

// template specialization
template <>
class Container<char> {
    char element;
public:
    Container(char arg) {
        element = arg;
    }
    char uppercase() {
        if ((element >= 'a') && (element <= 'z') ) {
            element += 'A' - 'a';
            return element;
        }
    }
};

int main() {
    int resultInt = getMax (10, 20);            // no need to specify tyupe
    cout << "Max: " << resultInt << endl;
    int resultFloat = getMax (1.55, 2.5);       // no need to specify tyupe
    cout << "Max: " << resultFloat << endl;

    int minimum;
    int param1 = 10;
    float param2 = 20.3;
    minimum = getMin(param1, param2);           // no need to specify type
    cout << "Minimum: " << minimum << endl;

    int pi = getPI<int> ();                     // must specify type
    cout << "PI: " << pi << endl;

    // two template class instances
    Pair<int> pair1(10, 100);
    pair1.printStr();
    Pair<float> pair2(1.5, 2.5);
    pair2.printStr();

    Point3D<int> point1(1, -4, 10);
    point1.printStr();

    // template specialization
    

    return 0;
}






