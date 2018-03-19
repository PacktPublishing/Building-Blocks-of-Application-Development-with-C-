#include <iostream>

using namespace std;

int add(int a, int b)
{
    return (a+b);
}

int sub(int a, int b)
{
    return (a-b);
}

int oper(int a, int b, int (*f_ptr)(int, int))
{
    return f_ptr(a, b);
}

int main()
{
    int (*func_ptr_add)(int, int) = add;
    int (*func_ptr_sub)(int, int) = sub;
    cout << oper(10, 20, func_ptr_add) << endl;
    cout << oper(10, 20, func_ptr_sub) << endl;
    return 0;
}
