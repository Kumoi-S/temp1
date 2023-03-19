// 华氏度 摄氏度 温度转换

#include "iostream"

int main(int argc, char const *argv[])
{
    //    inNum 华氏温度输入
    double inNum, result = 0;
    std::cin >> inNum;
    result = (5.0 / 9.0) * (inNum - 32.0);
    std::cout << result << std::endl;

    return 0;
}
