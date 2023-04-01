#include "shareptr.h"
#include <iostream>
#include"shareptr.h"
using namespace std;

int main()
{
    shareptr<int> ptr(new int());
   *ptr= 20;
    cout << *ptr;

    return 0;
}
