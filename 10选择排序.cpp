#include "iostream"
#include "cstdlib"

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void sort(int A[], int n)
{
    // 指向已排序部分的下一个

    int min = 0;
    // 移动指针
    // int q = min + 1;

    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[min] > A[j])
            {
                min = j;
            }
        }
        if (min != i)
            swap(A[min], A[i]);
    }
}

int main(int argc, char const *argv[])
{
    int A[100];
    for (int i = 0; i < 100; i++)
    {
        A[i] = rand();
    }

    cout << "未排序:" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << A[i] << endl;
    }

    sort(A, 100);

    cout << "已排序:" << endl;
    for (int i = 0; i < 100; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}
