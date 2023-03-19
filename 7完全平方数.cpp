#include "iostream"
#include "cmath"
#include "vector"

int main(int argc, char const *argv[])
{
    using namespace std;
    int from = 0, to = 0;
    cout << "from:";
    cin >> from;
    cout << "to:";
    cin >> to;

    if (from > to || from < 0)
    {
        cout << "invalid";
    }

    vector<int> res;

    for (int i = 1; i * i < to; i++)
    {
        if (i * i > from)
        {
            res.push_back(i * i);
        }
    }

    vector<int>::iterator it = res.begin();

    while (it != res.end())
    {
        cout << *it << endl;
        it++;
    }

    return 0;
}
