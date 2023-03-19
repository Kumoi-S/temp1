#include "iostream"

int main(int argc, char const *argv[])
{
    using namespace std;

    char arr[100];
    cin >> arr;

    // 小转大
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] -= 32;
        }
    }
    // 大转小
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] += 32;
        }
    }

    cout << arr << endl;
    return 0;
}
