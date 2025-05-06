//
class Date {
    private:
        int day, month, year;
    public:
        Date(int d, int m, int y) : day(d), month(m), year(y) {}
    
        bool operator==(const Date& other) const {
            return (day == other.day && month == other.month && year == other.year);
        }
    };
    