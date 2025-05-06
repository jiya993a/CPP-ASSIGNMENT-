//
#include <iostream>
#include <map>
using namespace std;

class SparseMatrix {
private:
    int rows, cols;
    map<int, map<int, int>> data; // data[row][col] = value

public:
    SparseMatrix(int r, int c) : rows(r), cols(c) {}

    void insert(int r, int c, int val) {
        if (val != 0)
            data[r][c] = val;
    }

    SparseMatrix add(const SparseMatrix& other) {
        SparseMatrix result(rows, cols);
        result.data = data;

        for (const auto& [r, row] : other.data) {
            for (const auto& [c, val] : row) {
                result.data[r][c] += val;
            }
        }

        return result;
    }

    SparseMatrix multiply(const SparseMatrix& other) {
        SparseMatrix result(rows, other.cols);

        for (const auto& [r1, row] : data) {
            for (const auto& [c1, val1] : row) {
                if (other.data.count(c1)) {
                    for (const auto& [c2, val2] : other.data.at(c1)) {
                        result.data[r1][c2] += val1 * val2;
                    }
                }
            }
        }

        return result;
    }

    void print() {
        cout << "Sparse Matrix:\n";
        for (const auto& [r, row] : data) {
            for (const auto& [c, val]
