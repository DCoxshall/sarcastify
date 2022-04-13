#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <math.h>

std::string sarcastify(std::string str) {
	for (int i = 0; i < str.length(); i++) {
		int choice = floor(rand() % 2);
		if (choice == 1) {
			str[i] = toupper(str[i]);
		} else {
			str[i] = tolower(str[i]);
		}
	}

	return str;
}

int main(int argc, char **argv) {
	srand(time(NULL));

	if (argc == 1) {
		std::cout << "No arguments provided";
		return 0;
	}

	for (int i = 1; i < argc; i++) {
		std::string str(argv[i]);
		std::cout << sarcastify(str) << " ";
	}
}