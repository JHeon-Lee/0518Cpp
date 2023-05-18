#include <iostream>

using namespace std;

/*
    call by value vs call by reference

    L-value &  : 나중에 다시 접근이 가능한 값
    R-value && : 식이 끝나면 접근이 불가능한 값
*/

int Test1(int& a) //int& a = val
{
    a++;
    return a;
}

int Test2(int&& a)
{
    return a;
}

int main()
{
    int val = 5;

    int& r = val; // L-value reference
    // r == val

    r = 10;

    cout << val << endl;
    cout << r << endl;

    int a = 10;
    int* ptr = &a;

    //int& r2;

    //int& r2 = 10; 

    const int& r2 = 10;

    int&& rr = 10; //R-value reference

    return 0;
}