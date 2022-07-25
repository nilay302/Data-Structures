#include <iostream>
#include<stdio.h>
#include "StackLL.h"
using namespace std;

int main()
{
    StackLL<char> s;
    s.push('n');
    s.push('i');
    s.push('l');
    s.push('a');
    s.push('y');
    s.push('i');

    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;


    return 0;
}