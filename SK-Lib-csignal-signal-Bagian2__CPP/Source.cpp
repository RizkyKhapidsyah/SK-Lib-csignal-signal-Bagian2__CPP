#include <iostream>
#include <csignal>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

void signal_handler(int signal_num) {
	cout << "The interrupt signal is (" << signal_num << "). \n";
	exit(signal_num);
}

int main() {
	signal(SIGABRT, signal_handler);

	while (true) {
		cout << "Hello user..." << endl;
	}
		
	_getch();
	return 0;
}
