#include <bits/stdc++.h>
using namespace std;

bool check_two_digit(double a)
{
    //kiem tra so nguyen
    if(a-int(a)!=0.0) return false;
    //kiem tra so co 2 chu so
    if(a<10.0 || a>99.0) return false;
    return true;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
