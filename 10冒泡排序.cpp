#include "iostream"
#include "cstdlib"

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int A[], const int &n)
{
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        flag = false;
        for (int j = n - 1; j > i; j--)
        {
            if (A[j - 1] > A[j])
            {
                swap(A[j], A[j - 1]);
                flag = true;
            }
        }

        if (flag == false)
            return;
    }
}

int main(int argc, char const *argv[])
{
    int A[100];
    for (int i = 0; i < 100; i++)
    {
        A[i] = rand();
    }

    cout << "未排序::" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << A[i] << endl;
    }

    sort(A, 100);
    cout << "已排序::" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}
