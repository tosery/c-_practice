#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch1[100];
	while (true)
	{
		cout << "�����ϰ� ������ yes�� �Է��ϼ���: ";
		cin.getline(ch1, 100);
		if (strcmp(ch1, "yes") == 0)
			break;
	}
	return 0;
}