#include <fstream>
#include <iostream>
#include <stdlib.h>
int main(int argc, char *argv[])
{
     std::ofstream ofs ("hello.txt", std::ofstream::out);
     ofs << "Hello CSE142L! \n";
     ofs.close();
     return 0;  
}
