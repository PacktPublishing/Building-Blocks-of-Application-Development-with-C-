#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    std::ofstream outfile;
    outfile.open("out.bin", std::ios::binary | std::ios::out);
    int a = 12345;
    double pi = 3.1415926535897932384626433832795;
    outfile.write((char*) &a, sizeof(int));
    outfile.write((char*) &pi, sizeof(double));
    outfile.close();

    std::ifstream ifile;
    ifile.open("out.bin", std::ios::binary);
    int b = 0;
    double p = 0.0;
    ifile.read((char*) &b, sizeof(int));
    ifile.read((char*) &p, sizeof(double));
    ifile.close();

    cout << "Reading from Binary File" << endl;
    cout << b << endl << std::setprecision(16) << p << endl;
    return 0;
}
