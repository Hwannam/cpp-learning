#include "iostream"
using namespace std;

int main()
{
	cout << "이름과 나이를 입력하고 엔터를 눌러주세요: ";
	
	string name; // string 타입의 name 변수 생성
	int age; // int 타입의 age 변수 생성
	
	cin >> name; // name 변수에 들어갈 문자열을 입력 받음
	cin >> age; // age 변수에 들어갈 정수를 입력받음

	cout << "안녕하세요, " << age << "살 " << name << "!\n"; // 입력받은 age와 name을 출력

	return 0;
}