//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileCompressor {
public:
    void compress(const string& inputFile, const string& outputFile) {
        ifstream in(inputFile);
        ofstream out(outputFile);

        if (!in || !out) {
            cout << "File error during compression.\n";
            return;
        }

        char current, prev = '\0';
        int count = 1;

        while (in.get(current)) {
            if (current == prev) {
                ++count;
            } else {

                return 0;