#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;

class Fraction{
    double x;
    double y;
    public:
    Fraction(double x=0, double y=1):x(x),y(y){}
    double get_x(){return x;}
    double get_y(){return y;}
    Fraction operator+(Fraction);
    Fraction operator*(Fraction);
    Fraction operator*(int);
    friend Fraction operator*(int n, Fraction tmp){
        tmp.x*=n;
        return Fraction(tmp.x, tmp.y);
    }
    Fraction operator/(Fraction);
    Fraction operator+(long long int);
    Fraction operator-(Fraction);
    friend Fraction operator-( Fraction a ){
        if((a.x > 0 && a.y < 0 )|| (a.x > 0 && a.y > 0))return Fraction(-a.x, a.y);
        else if(a.x < 0 && a.y > 0) return Fraction (a.x, -a.y);
        else {
            return Fraction(a.x, -a.y);
        }
    }
    bool operator == ( const Fraction &right );
    bool operator > (  Fraction &right );

    void change_x(long long int n){this->x/=n;}
    void change_y(long long int n){this->y/=n;}
    friend istream &operator>>(istream &in, Fraction &f){
            long long int t;
            in >> t;
            f.x = t;
            in.ignore(1,'/');
            in >> t;
            f.y = t;
            return in;
    }
    friend ostream &operator<<(ostream &out,const Fraction &f)
        {
            out << f.x << "/" << f.y << endl;
            return out;
        }
};
void sokr(Fraction&);

#endif // FRACTION_H

