#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch1[100];
	int count = 0;
	cout << "���ڿ��� �Է��ϼ���. ���ڿ��� ���ڿ� ���̴� �����̽��ٸ� ����ϼ���." << endl;
	cin.getline(ch1, 100, '\n');//�� ĭ ���԰���
	int i = 0;
	while (true) {
		if (ch1[i] == '\0') 
		{
			break;
		}
		if (ch1[i] == 'x')count++;
		i++;
	}
	cout << 'x' << "�� ������" << count << endl;
	return 0;
}