#include <cstddef>
#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av) {
	if (ac != 4)
		return 1;
	std::string from = av[2];
	std::string to = av[3];

	std::ifstream iFile;
	iFile.open(av[1]);
	if (iFile.fail())
		return 2;

	std::string bfr;
	while (std::getline(iFile, bfr)) {
		size_t pos = 0;
		while ((pos = bfr.find(from, pos)) != std::string::npos) {
			bfr.replace(pos, from.length(), to);
			pos += to.length();
		}
		std::cout << bfr << std::endl;
	}
	iFile.close();
}
