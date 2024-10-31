#include<iostream>
using namespace std;


void hanoi(int diskNumber, int source, int dest, int helper) {
	if (diskNumber == 1) {
		cout << "‰~”Õ1‚ðŽ²" << source << "‚©‚çŽ²" << dest << "‚ÖˆÚ“®‚³‚¹‚é" << endl;
		return;
	}
	hanoi(diskNumber - 1, source, helper, dest);
	cout << "‰~”Õ" << diskNumber << "‚ðŽ²" << source << "‚©‚çŽ²" << dest << "‚ÖˆÚ“®‚³‚¹‚é" << endl;
	hanoi(diskNumber - 1, helper, dest, source);
}

int main() {
	int diskNumber = 0;
	cout << "‰~”Õ‚Ì”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > ";
	cin >> diskNumber;
	cout << "Ž²1‚ªŒ³‚ÌŽ²AŽ²2‚ª–Ú“I’nAŽ²3‚ª•â•‚Å‚·B" << endl;
	hanoi(diskNumber, 1, 2, 3);
}
