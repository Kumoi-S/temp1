#include "iostream"
#include "vector"
#include "cmath"

bool is(int p)
{
    int j = pow(p % 10, 3) + pow((p / 10) % 10, 3) + pow(p / 100, 3);
    return j == p ? true : false;
}

int main(int argc, char const *argv[])
{
    using namespace std;

    int a = 0, b = 0;
    cout << "起始:";
    cin >> a;
    cout << "末尾:";
    cin >> b;

    if (a > b || a < 0 || a < 100 || b > 1000)
    {
        cout << "非法输入";
        return 0;
    }

    vector<int> collect;

    for (int i = a; i < b; i++)
    {
        if (is(i))
        {
            collect.push_back(i);
        }
    }

    vector<int>::iterator it = collect.begin();
    while (it != collect.end())
    {
        cout << *it << "\n";
        it++;
    }

    return 0;
}
