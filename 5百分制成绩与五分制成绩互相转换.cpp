#include "iostream"

void err()
{
    using namespace std;
    cout << "请输入合法值" << endl;
}

int main(int argc, char const *argv[])
{
    using namespace std;

    double input = 0;
    cout << "请选择输入百分制[a]或五分制[b]成绩";
    char choice = getchar();
    cout << "\n请输入成绩: " << endl;
    cin >> input;
    // 输入百分
    if (choice == 'a' && input >= 0.0 && input <= 100.0)
    {
        cout << input / 20.0 << endl;
    }
    // 输入五分
    else if (choice == 'b' && input >= 0.0 && input <= 5.0)
    {
        cout << input * 20 << endl;
    }
    else
    {
        err();
    }

    return 0;
}
