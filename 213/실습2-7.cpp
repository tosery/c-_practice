#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch1[100];
	while (true)
	{
		cout << "종료하고 싶으면 yes를 입력하세요: ";
		cin.getline(ch1, 100);
		if (strcmp(ch1, "yes") == 0)
			break;
	}
	return 0;
}