#include "iostream"
#include "vector"

int main(int argc, char const *argv[])
{
    using namespace std;

    // 输入数据
    int row1, col1, row2, col2;
    cout << "A矩阵行数,列数";
    cin >> row1 >> col1;

    cout << "B矩阵行数,列数";
    cin >> row2 >> col2;

    vector<vector<int>> A(row1, vector<int>(col1));
    vector<vector<int>> B(row2, vector<int>(col2));

    cout << "输入A矩阵数据" << endl;
    for (int i = 0; i < row1; i++)
    {
        cout << "第" << i + 1 << "行" << endl;
        for (int j = 0; j < col1; j++)
        {
            // cin >> A[i][j];
            // int temp;
            cin >> A[i][j];
        }
    }
    cout << "输入B矩阵数据";
    for (int i = 0; i < row2; i++)
    {
        cout << "第" << i + 1 << "行" << endl;
        for (int j = 0; j < col2; j++)
        {
            // int temp;
            cin >> B[i][j];
        }
    }

    // 执行加法
    if (row1 != row2 || col1 != col2)
    {
        cout << "无法做加法" << endl;
    }
    else
    {
        // cout << A[1][0];
        cout << "矩阵加法得：" << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {

                cout << (A[i][j] + B[i][j]) << "  ";
            }
            cout << endl;
        }
    }

    // 执行乘法
    if (row1 != col2 || col1 != row2)
    {
        cout << "无法做乘法" << endl;
    }
    else
    {
        int sum = 0;
        cout << "矩阵乘法得：" << endl;
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                sum = 0;
                for (int k = 0; k < col1; k++)
                {
                    sum = sum + (A[i][k] * B[k][j]);
                }
                cout << sum << "  ";
            }
            cout << endl;
        }
    }

    return 0;
}
