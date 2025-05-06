//
#include <iostream>
using namespace std;
class BigNumber {
    private:
        string number;
    
        static string addStrings(const string& a, const string& b) {
            string result;
            int carry = 0, sum = 0;
            int i = a.size() - 1, j = b.size() - 1;
    
            while (i >= 0 || j >= 0 || carry) {
                int x = (i >= 0) ? a[i--] - '0' : 0;
                int y = (j >= 0) ? b[j--] - '0' : 0;
    
                sum = x + y + carry;
                result.insert(result.begin(), (sum % 10) + '0');
                carry = sum / 10;
            }
    
            return result;
        }
    
        static string multiplyStrings(const string& num1, const string& num2) {
            int n1 = num1.size(), n2 = num2.size();
            vector<int> result(n1 + n2, 0);
    
            for (int i = n1 - 1; i >= 0; --i) {
                for (int j = n2 - 1; j >= 0; --j) {
                    int mul = (num1[i] - '0') * (num2[j] - '0');
                    int sum = mul + result[i + j + 1];
                    result[i + j] += sum / 10;
                    result[i + j + 1] = sum % 10;
                }
            }
    
            string resStr;
            for (int num : result) {
                if (!(resStr.empty() && num == 0)) {
                    resStr += to_string(num);
                }
            }
    
            return resStr.empty() ? "0" : resStr;
        }
    
    public:
        BigNumber(string num) : number(num) {}
    
        BigNumber add(const BigNumber& other) {
            return BigNumber(addStrings(number, other.number));
        }
    
        BigNumber multiply(const BigNumber& other) {
            return BigNumber(multiplyStrings(number, other.number));
        }
    
        void display() const {
            cout << number << endl;
        }
        return 0;
    };

    