#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string cpp_string = "Hello";
    cpp_string += " World!";
    /*cout << cpp_string << endl;
    cout << cpp_string.length() << endl;
    cout << cpp_string.capacity() << endl;
    cout << cpp_string[4] << endl;*/

    std::string cmp = "lo";
    size_t pos = cpp_string.find(cmp);
    if (pos != std::string::npos)
        cout << pos << endl;
    return 0;
}
