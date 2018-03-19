#include <iostream>
#include <vector>

// row -> |--|--|--|
//        |--|--|--|
//        |--|--|--|
//        |--|--|--|

template <typename T = int>
class matrix
{
private:
    size_t mRows, mCols;
    std::vector<std::vector<T>* > mRowData;

public:
    matrix(const size_t& rows, const size_t& cols)
    {
        mRows = rows;
        mCols = cols;
        mRowData.reserve(rows);
        for (int i = 0; i < mRows; i++)
        {
            mRowData.push_back(new std::vector<T>(cols));
        }
    }
    std::vector<T>& operator[](const size_t& row_id)
    {
        return *(mRowData[row_id]);
    }
};

int main()
{
    matrix<double> md(2, 2);
    md[1][1] = 56.4;
    std::cout << md[1][1] << std::endl;
    return 0;
}
