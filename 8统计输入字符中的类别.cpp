#include "iostream"
#include "cmath"
#include "string"

int main(int argc, char const *argv[])
{
    using namespace std;

    // string a;
    // getline(cin, a);

    char s[100] = {0};
    int i, t1 = 0, t2 = 0, t3 = 0, n;
    cin >> s;

    n = 0;
    while (s[n] != 0)
    {
        n++;
    }
    for (i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
        {
            t1++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            t2++;
        }
        else
        {
            t3++;
        }
    }
    cout << "字母"
         << " "
         << "数字"
         << " "
         << "其他" << endl;
    cout << t1 << " " << t2 << " " << t3 << endl;
    return 0;
}
