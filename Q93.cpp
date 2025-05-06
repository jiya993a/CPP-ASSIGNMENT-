//
#include <iostream>
using namespace std;
class Time {
    private:
        int hours, minutes, seconds;
    
        void normalize() {
            if (seconds >= 60) {
                minutes += seconds / 60;
                seconds %= 60;
            }
            if (minutes >= 60) {
                hours += minutes / 60;
                minutes %= 60;
            }
        }
    
    public:
        Time(int h = 0, int m = 0, int s = 0)
            : hours(h), minutes(m), seconds(s) {
            normalize();
        }
    
        Time add(const Time& t) const {
            return Time(hours + t.hours, minutes + t.minutes, seconds + t.seconds);
        }
    
        Time subtract(const Time& t) const {
            int t1 = hours * 3600 + minutes * 60 + seconds;
            int t2 = t.hours * 3600 + t.minutes * 60 + t.seconds;
            int diff = abs(t1 - t2);
    
            return Time(0, diff / 60, diff % 60);
        }
    
        bool isEqual(const Time& t) const {
            return hours == t.hours && minutes == t.minutes && seconds == t.seconds;
        }
    
        bool isGreater(const Time& t) const {
            if (hours != t.hours)
                return hours > t.hours;
            if (minutes != t.minutes)
                return minutes > t.minutes;
            return seconds > t.seconds;
        }
    
        void display() const {
            cout << hours << "h " << minutes << "m " << seconds << "s\n";
        }
        return 0;
    };
    