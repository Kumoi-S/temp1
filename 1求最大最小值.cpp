// 求最大最小值

#include "iostream"

void findMaxMin(int array[], int n, int &max, int &min)
{
    max = 0;
    min = 0;
    for (int i = 0; i < n; i++)
    {
        // 当前值小于最小值
        if (array[i] < array[min])
        {
            min = i;
        }
        // 当前值大于最大值
        if (array[i] > array[max])
        {
            max = i;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n = 20;
    int array[20] = {1, 2, 3, 4, 5, 7, 4, 3, 2, 20};
    int max, min;

    findMaxMin(array, n, max, min);

    std::cout
        << min << ";" << max << std::endl;

    return 0;
}
