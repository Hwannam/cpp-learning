#include "iostream"
using namespace std;

int main()
{
	cout << "이름을 입력하고 엔터를 눌러주세요: ";
	string name; // string 타입의 name 객체 생성
	cin >> name; // name 객체에 들어갈 문자열을 입력 받음
	cout << "안녕하세요, " << name << "!\n"; // 입력받은 name을 출력

	return 0;
}