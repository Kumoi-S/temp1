#include "iostream"

int main(int argc, char const *argv[])
{
    using namespace std;

    int year;
    std::cin >> year;

    // 公历年份是4的倍数，且不是100的倍数的，为闰年
    // 公历年份是整百数的，必须是400的倍数才是闰年

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            // 400倍数
            if (year % 400 == 0)
                cout << year << " 是闰年";
            // 100倍数但不是400
            else
            {
                cout << year << " 不是闰年";
            }
        }
        // 4倍数但不是100
        else
        {
            cout << year << " 是闰年";
        }
    }
    else
        cout << year << " 不是闰年";
    return 0;
}
