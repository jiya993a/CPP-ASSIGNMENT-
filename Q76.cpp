//
#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

    friend Distance addDistance(const Distance&, const Distance&);

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

Distance addDistance(const Distance& d1, const Distance& d2) {
    int totalFeet = d1.feet + d2.feet;
    int totalInches = d1.inches + d2.inches;

    if (totalInches >= 12) {
        totalFeet += totalInches / 12;
        totalInches %= 12;
    }

    return Distance(totalFeet, totalInches);
}

int main() {
    Distance d1(5, 9), d2(3, 11);
    Distance d3 = addDistance(d1, d2);
    cout << "Sum of distances: ";
    d3.display();
    return 0;
}
