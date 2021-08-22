#include <iostream>
#include <string>
using namespace std;

int main()
{
	char ch1[100];
	int count = 0;
	cout << "문자열을 입력하세요. 문자열과 문자열 사이는 스페이스바를 사용하세요." << endl;
	cin.getline(ch1, 100, '\n');//빈 칸 포함가능
	int i = 0;
	while (true) {
		if (ch1[i] == '\0') 
		{
			break;
		}
		if (ch1[i] == 'x')count++;
		i++;
	}
	cout << 'x' << "의 개수는" << count << endl;
	return 0;
}