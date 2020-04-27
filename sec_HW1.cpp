// sec_HW1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("Text.txt");

    ofstream fout;
    fout.open("copy.txt");

    char ch;

    while (!fin.eof())
    {
        fin.read(&ch, sizeof(ch));
        fout.write(&ch, sizeof(ch));
    }

    fin.close();
    fout.close();
    return 0;
}