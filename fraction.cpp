#include "fraction.h"
#include <iostream>
#include <cmath>
#include <iomanip>
/*void sokr(Fraction& x){

    long long int n;
    long long int c = 0;
    if(abs(x.get_x()) >abs(x.get_y())){
        n = x.get_x();
     }else n = x.get_y();
    if(n<0)n*=-1;
     long long int *a = new long long int[n + 1];
     for (long long int i = 0; i <= n; i++)a[i] = i;
     for (long long int i = 2;i <= n;i++) {
         if (a[i]!=0)
          for (long long int j = i*i; j <= n; j += i)a[j] = 0;
     }
     for (long long int i =2;i <= n;i++) {
         if(a[i]!=0)c++;
     }
     long long int *b = new long long int[c + 1];
     long long int l = 0;
     for(long long int i= 2;i<=n;i++)
         if(a[i]!=0){
             b[l]=a[i];
             l++;
         }
     for (long long int i = 0;i < l;i++) {
         if(x.get_x()%b[i]==0 && x.get_y()%b[i]==0){
             x.change_x(b[i]);
             x.change_y(b[i]);
             i--;
         }
     }
     delete [] b;
     delete [] a;
}*/


Fraction Fraction::operator+(Fraction tm)
{
    double b = this->x * tm.y + this->y*tm.x;
    double t = this->y * tm.y;
    return Fraction(b, t);
}
Fraction Fraction::operator*(Fraction tm)
{
    double b = this->x * tm.x;
    double t = this->y * tm.y;
    return Fraction(b, t);
}

Fraction Fraction::operator*(int n)
{
    this->x*=n;
    return Fraction(this->x, this->y);
}
Fraction Fraction::operator/(Fraction tm)
{
    double b = this->x * tm.y;
    double t = this->y * tm.x;
    return Fraction(b, t);
}
Fraction Fraction::operator+(long long int x)
{
    double t = this->y * x;
    double b = this->x + t;
    return Fraction(b, this->y);
}
bool Fraction::operator ==(const Fraction &right)
{
    bool zn1 = 0;
    bool zn2 = 0;
    if((right.x < 0 && right.y > 0)||(right.x > 0 && right.y < 0))
        zn1 = 1;
    if((this->x < 0 && this->y > 0)||(this->x > 0 && this->y < 0))
        zn2 = 1;
    if(abs(right.x) == abs(this->x) && abs(right.y) == abs(this->y) && zn1 == zn2)return 1;
    else return 0;
}

bool Fraction::operator >(Fraction &right)
{
    double d = right.x / right.y;
    double b = this->x / this->y;
    if(b>d)return 1;
    else return 0;
}

Fraction Fraction::operator-(Fraction tm)
{   double b = this->x * tm.y - this->y*tm.x;
    double t = this->y * tm.y;
    return Fraction(b, t);
}
