#include <iostream>
using namespace std;

int main()
{
	cout << "소수점 값 입력: ";
    double n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1  
		<< "\n3 곱하기 n == " << 3 * n
		<< "\nn의 두 배 == " << n + n
		<< "\nn의 제곱 == " << n * n
		<< "\nn 나누기 2 == " << n / 2
		<< "\nn의 제곱근 == " << sqrt(n)
		<< '\n'; // 출력에서 개행 문자를 의미 
	return 0;
}