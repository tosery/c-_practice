#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch1[10];
	char ch2[10];
	cin >> ch1 >> ch2;
	if (strcmp(ch1, ch2) == 0) //���ڿ� ��
		cout << "�����ϴ�";
	else
		cout << "���� �ʽ��ϴ�";
	cout << endl;
	return 0;
}