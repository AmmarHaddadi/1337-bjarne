#include <iostream>
#include <string>

int main(int ac, char **av) {
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	} else {
		for (int i = 1; i < ac; ++i) {
			std::string s = av[i];
			std::transform(s.begin(), s.end(), s.begin(), ::toupper);
			std::cout << s;
		}
	}
	std::cout << std::endl;
}
