#include <iostream>
using namespace std;

int main()
{
	cout << "�Ҽ��� �� �Է�: ";
    double n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1  
		<< "\n3 ���ϱ� n == " << 3 * n
		<< "\nn�� �� �� == " << n + n
		<< "\nn�� ���� == " << n * n
		<< "\nn ������ 2 == " << n / 2
		<< "\nn�� ������ == " << sqrt(n)
		<< '\n'; // ��¿��� ���� ���ڸ� �ǹ� 
	return 0;
}