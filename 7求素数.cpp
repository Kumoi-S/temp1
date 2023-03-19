#include "iostream"
#include "vector"

bool isPrime(int p)
{
    for (int i = 2; i < p / 2; i++)
    {
        if (p % i == 0)
            return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    using namespace std;
    int a, b;

    // 求素数

    cout << "输入求素数的范围," << endl;
    cout << "起始:";
    cin >> a;
    cout << "\n末尾:";
    cin >> b;

    vector<int> primeList;

    if (b == 2 || a < 2 || b < 2 || a > b)
    {
        cout << "\n输入非法" << endl;
    }
    else
    {
        // 遍历范围中每一个数字
        for (int i = a; i < b; i++)
        {
            if (isPrime(i))
            {
                primeList.push_back(i);
            }
        }
        vector<int>::iterator it = primeList.begin();

        cout << "素数：" << endl;
        while (it != primeList.end())
        {

            cout << *it << " | ";
            it++;
        }
    }

    return 0;
}
