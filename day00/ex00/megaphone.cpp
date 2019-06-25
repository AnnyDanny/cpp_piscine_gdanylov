#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>

int main (int argc, char *argv[])
{
    int i;
    int j;

    i = 1;
    j = 0;


 if (argc == 1) {
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    while (i < argc) {
        j = 0;
        while (argv[i][j]) {
            if (argv[i][j] >= 97 && argv[i][j] <= 122) {
                std::cout << (char)(argv[i][j] - 32);
            }
            else
                std::cout << argv[i][j];
	        j++;
        }
        i++;
    }
    std::cout << std::endl;
    return 0;
}
