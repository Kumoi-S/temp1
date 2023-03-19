#include "iostream"
#include "cmath"

int main(int argc, char const *argv[])
{
    using namespace std;
    int x = 0, y = 0;
    cout << "输入x:";
    cin >> x;
    cout << "输入y:";
    cin >> y;

    for (int i = x;; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            // x*y=最小公倍数*最大公约数
            cout << "最小公倍数:" << x * y / i << endl;
            cout << "最大公因数:" << i << endl;
            return 0;
        }
    }
    return 0;
}
