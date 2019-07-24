#include <iostream>
#include <cstring>
#include "fraction.h"
using namespace std;

template <class smth>
smth my_max(smth a, smth b){
    if(a > b) return a;
    else return b;
}
int main()
{
    char cmd[9] = {};
    cin >> cmd;
    if(!strcmp(cmd, "INT")){
        int a, b;
        cin >> a >> b;
        cout << my_max<int> (a,b) << endl;
    }
    else if (!strcmp(cmd, "CHAR")) {
        char a, b;
        cin >> a >> b;
        cout << my_max<char> (a,b) << endl;
    }
    else if (!strcmp(cmd, "FRACTION")) {
        Fraction a, b;
        cin >> a >> b;
        cout << my_max<Fraction> (a,b) << endl;
    }
    return 0;
}





