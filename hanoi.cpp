#include<iostream>
using namespace std;


void hanoi(int diskNumber, int source, int dest, int helper) {
	if (diskNumber == 1) {
		cout << "円盤1を軸" << source << "から軸" << dest << "へ移動させる" << endl;
		return;
	}
	hanoi(diskNumber - 1, source, helper, dest);
	cout << "円盤" << diskNumber << "を軸" << source << "から軸" << dest << "へ移動させる" << endl;
	hanoi(diskNumber - 1, helper, dest, source);
}

int main() {
	int diskNumber = 0;
	cout << "円盤の数を入力してください > ";
	cin >> diskNumber;
	cout << "軸1が元の軸、軸2が目的地、軸3が補助です。" << endl;
	hanoi(diskNumber, 1, 2, 3);
}
