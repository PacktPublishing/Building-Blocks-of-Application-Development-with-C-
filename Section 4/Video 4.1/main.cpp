#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    std::ofstream out_file;
    double pi = 3.1415926535897932384626433832795;
    out_file.open("out.txt", std::ios::out);
    out_file << "Hello World!" << std::endl;
    out_file << std::setprecision(16) << pi << std::endl;
    out_file.close();

    std::ifstream in_file;
    std::string buf;
    in_file.open("out.txt", std::ios::in);
    std::getline(in_file, buf);
    std::cout << buf << std::endl;
    std::getline(in_file, buf);
    std::cout << buf << std::endl;
    in_file.close();

    return 0;
}
