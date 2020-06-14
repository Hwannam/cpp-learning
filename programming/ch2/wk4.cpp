#include <iostream>
using namespace std;

int main()
{
	cout << "성과 이름을 입력하세요: ";
	string fir;
	string sec;
	cin >> fir >> sec;
	string name = fir + sec;
	cout << "내 이름은 " << name << endl;

	return 0;
}