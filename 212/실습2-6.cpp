#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch1[10];
	char ch2[10];
	cin >> ch1 >> ch2;
	if (strcmp(ch1, ch2) == 0) //문자열 비교
		cout << "같습니다";
	else
		cout << "같지 않습니다";
	cout << endl;
	return 0;
}