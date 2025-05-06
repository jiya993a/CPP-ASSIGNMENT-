//
#include <iostream>
#include <unordered_map>
using namespace std;

class Cache {
private:
    unordered_map<string, string> data;

public:
    void put(const string& key, const string& value) {
        data[key] = value;
        cout << "Cached [" << key << "] = " << value << endl;
    }

    string get(const string& key) {
        if (data.find(key) != data.end()) {
            return data[key];
        } else {
            return "Key not found in cache.";
        }
    }

    void display() {
        cout << "Cache contents:\n";
        for (const auto& [key, val] : data) {
            cout << key << " => " << val << endl;
        }
    }
};
