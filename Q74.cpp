//
#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    friend int calculateVolume(const Box&, const Box&);
};

int calculateVolume(const Box& b1, const Box& b2) {
    int v1 = b1.length * b1.width * b1.height;
    int v2 = b2.length * b2.width * b2.height;
    return v1 + v2;
}

int main() {
    Box box1(2, 3, 4);
    Box box2(1, 5, 6);
    cout << "Total Volume: " << calculateVolume(box1, box2) << endl;
    return 0;
}
