#include "iostream"
using namespace std;

int main()
{
	cout << "�̸��� ���̸� �Է��ϰ� ���͸� �����ּ���: ";
	
	string name; // string Ÿ���� name ���� ����
	int age; // int Ÿ���� age ���� ����
	
	cin >> name; // name ������ �� ���ڿ��� �Է� ����
	cin >> age; // age ������ �� ������ �Է¹���

	cout << "�ȳ��ϼ���, " << age << "�� " << name << "!\n"; // �Է¹��� age�� name�� ���

	return 0;
}