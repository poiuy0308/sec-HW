// sec_HW2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <fstream>
#include <iostream>


using namespace std;

int main() {
	ifstream ifs;

	ifs.open("Text.txt");

	int sum[4] = { 0 };
	int num[8] = { 0 };
	int j = 0;

	for (int i = 0; i < 8; i++) {
		ifs >> num[i];
	}
	for (int i = 0; i < 4; i++)
	{
		sum[i] = num[i * 2] + num[i * 2 + 1];
		cout << sum[i] << endl;
		//cout << i << " " << sum[i] << endl;
	}
	return 0;

}