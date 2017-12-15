#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

/*
	Made with <3 for my classmates @ TTÜ MalwareII
*/

int main() {
	char* magicLine = "\x39\xd8\x0f\x84\x8b";
	int magicPos = 11625;
	unsigned int magicSize = 2;
	fstream fs;

	system("COLOR 0D");
	cout << "                      _________                       __    " << endl;
	cout << "_______   ____   ____ \\_   ___ \\____________    ____ |  | __" << endl;
	cout << "\\_  __ \\_/ __ \\ / ___\\/    \\  \\/\\_  __ \\__  \\ _/ ___\\|  |/ /" << endl;
	cout << " |  | \\/\\  ___// /_/  >     \\____|  | \\// __ \\  \\___|    < " << endl;
	cout << " |__|    \\___  >___  / \\______  /|__|  (____  /\\___  >__|_ \\" << endl;
	cout << "             \\/_____/         \\/            \\/     \\/     \\/" << endl;
	cout << "						greetz malwareII!!" << endl;
	
	cout << "[*] Cracking..." << endl;
	fs.open("App5.exe", ios::binary | ios::in | ios::out);
	if (fs.is_open()) {
		// apply magic here
		char * memblock = new char [magicSize];
		fs.seekp(magicPos);
		fs.write(magicLine, sizeof(magicLine)-1);
		fs.close();
		cout << "[*] CRACKED! Magic happened, to register use any key!..." << endl;
		cin.get();
	}
	else {
		cout << "[*] App5.exe not found, please copy me next to this file! :)" << endl;
		cin.get();
		return 1;
	}
	return 0;
}
