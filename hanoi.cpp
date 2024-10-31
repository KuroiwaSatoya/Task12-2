#include<iostream>
using namespace std;


void hanoi(int diskNumber, int source, int dest, int helper) {
	if (diskNumber == 1) {
		cout << "�~��1����" << source << "���玲" << dest << "�ֈړ�������" << endl;
		return;
	}
	hanoi(diskNumber - 1, source, helper, dest);
	cout << "�~��" << diskNumber << "����" << source << "���玲" << dest << "�ֈړ�������" << endl;
	hanoi(diskNumber - 1, helper, dest, source);
}

int main() {
	int diskNumber = 0;
	cout << "�~�Ղ̐�����͂��Ă������� > ";
	cin >> diskNumber;
	cout << "��1�����̎��A��2���ړI�n�A��3���⏕�ł��B" << endl;
	hanoi(diskNumber, 1, 2, 3);
}
