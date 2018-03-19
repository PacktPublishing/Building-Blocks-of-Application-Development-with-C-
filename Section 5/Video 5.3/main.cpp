#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
    /*int i, j;
    cin >> i >> j;
    //cout << i << " + " << j << " = " << (i+j) << endl;

    std::stringstream ss;
    ss << "You entered " << i << " & " << j << endl;
    ss << i << " + " << j << " = " << (i+j) << endl;
    string out_str = ss.str();
    cout << out_str;

    std::ofstream ofile;
    ofile.open("out.txt", std::ios::out);
    ofile << out_str;
    ofile.close();*/

    std::ifstream infile;
    infile.open("in.txt", std::ios::in);
    int i, j;
    std::string line;
    std::getline(infile, line);
    infile.close();

    std::stringstream ss(line);
    ss >> i >> j;
    cout << i << " " << j << endl;

    return 0;
}
