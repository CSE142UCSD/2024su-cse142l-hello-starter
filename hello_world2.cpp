#include <fstream>
#include <iostream>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	std::ofstream ofs ("hello.txt", std::ofstream::out);
	ofs << "Hello htseng@ucsd.edu!\n";
    int64_t product=1;
    for(int i = 1; i <= argc; i++)
        product *= atoi(argv[i]);
    ofs << "The product of your inputs is:\n";
    ofs << product;
	ofs.close();
	std::cout << "Execution Complete" << std::endl;
	return 0;  
}
