#include <iostream>
#include <windows.h>

int menu;

int main() {

	std::cout << "Clear clipboard?\n";
	std::cout << "1.Yep.\n";
	std::cout << "2.Nope.\n";
	std::cin >> menu;
	switch (menu) {
	case 1: {

		if (OpenClipboard(NULL))
		{
			EmptyClipboard();
			CloseClipboard();
			std::cout << "Clipboard is clear, boss!\n";
			system("pause");
		}
		else {
		std::cout << "Something went wrong, try again.\n";
		system("pause"); }
			break;
			}

	case 2: {
		std::cout << "Program shutting down, good night.\n";
		system("pause");
		return 0;
			}
}
}