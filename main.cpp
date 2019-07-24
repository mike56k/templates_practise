#include <iostream>
using namespace std;

template <class T>
class Fraction {
    T x;
    T y;
public:
    Fraction(T x, T y) {
        this->x = x;
        this->y = y;
    }
    T calculate() { return x/y; }
    T get_x() { return x; }
    T get_y() { return y; }
    void show();

    template <class U>
    friend ostream &operator << (ostream &out, const Fraction<U> f);
};

template<class T>
void Fraction<T>::show() {
    cout << x << "/" << y;
}

template<class U>
ostream &operator << (ostream &out, const Fraction<U> f) {
    out << f.x << "/" << f.y;
    return out;
}


int main() {
    Fraction <int> a(3, 5);
    Fraction <double> b(3.3, 1.2);

    cout << a << " = " << a.calculate() << endl;
    cout << b << " = " << b.calculate() << endl;

    return 0;
}
