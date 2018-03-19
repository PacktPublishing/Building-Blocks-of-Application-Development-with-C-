#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    std::map<char, int> char_int_map;
    char_int_map.insert(std::pair<char, int>('A', 65));
    char_int_map.insert(std::pair<char, int>('B', 66));
    char_int_map.insert(std::pair<char, int>('C', 67));
    char_int_map.insert(std::pair<char, int>('D', 68));

    std::map<char, int>::iterator it;
    it = char_int_map.find('E');
    if(it == char_int_map.end())
    {
        cout << "Match not found!" << endl;
    }
    else
    {
        cout << it->second << endl;
    }
    return 0;
}
