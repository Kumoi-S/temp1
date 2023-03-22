#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string data;

    // 写模式
    ofstream outfile;
    outfile.open("./newfiletemp.txt");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    getline(cin, data);
    // 写入
    outfile << data << endl;
    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();
    outfile << data << endl;
    // 关闭文件
    outfile.close();

    // 读模式
    ifstream infile;
    infile.open("./newfiletemp.txt");

    cout << "Reading from the file" << endl;
    infile >> data;
    cout << data << endl;
    infile >> data;
    cout << data << endl;
    // 关闭打开的文件
    infile.close();

    // 读写模式
    fstream file("./newfiletemp.txt", ios::ate | ios::out | ios::in);
    cout << "输入一行，追加到末尾" << endl;
    // cin >> noskipws >> data;
    getline(cin, data);
    cout << data;
    file << data;

    cout << "读指针位置: " << file.tellg();
    file >> data;
    cout << data;

    file.close();

    return 0;
}