#include <iostream>

template <typename T>
T (*pt)
(int &);

int add(int &x)
{
    return x + 1;
}

double subtract(int &x)
{
    return x - 1.0;
}

int main()
{
    int x = 5;
    pt<int> = add;
    std::cout << pt<int>(x) << std::endl; // 输出6
    pt<double> = subtract;
    std::cout << pt<int>(x) << std::endl;
    return 0;
}