#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	const int n = 10;
	int i = 1;
	char str[n];
	cout << "������� ������ � ��������� � ������������ ��������� ";
	cin >> str[n];
	ofstream fout("stroka", ios::binary);
	fout << str[n];
	ifstream fin("stroka", ios::binary);
	ofstream myfile("change", ios::binary);
	while (!fin.eof()) {
		if (str[i] != ' ') {
			if (str[i] != '&') {
				if (str[i] != '<') {
					if (str[i] != '>') {
						if (str[i] != '�') {
							if (str[i] != '+') {
								if (str[i] != '-') {
									myfile << str[i];
								}
							}
						}
					}
				}
			}
		}
		cout << "�������������� ������" << str[i];
		i++;
	}
	return(0);
	system("PAUSE");
}