//
#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Overload "==" without using bool
    int operator==(const Date& other) const {
        return (day == other.day && month == other.month && year == other.year);
    }

    void display() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

// Example usage
int main() {
    Date date1(5, 5, 2025);
    Date date2(5, 5, 2025);
    Date date3(1, 1, 2020);

    if (date1 == date2)
        cout << "date1 is equal to date2\n";
    else
        cout << "date1 is not equal to date2\n";

    if (date1 == date3)
        cout << "date1 is equal to date3\n";
    else
        cout << "date1 is not equal to date3\n";

    return 0;
}
