//
#include <iostream>
using namespace std;

class Library {
private:
    string privateBook = "Private Book";

protected:
    string protectedBook = "Protected Book";

public:
    string publicBook = "Public Book";

    void showBooks() {
        cout << "Accessing from inside the class:\n";
        cout << "Private: " << privateBook << endl;
        cout << "Protected: " << protectedBook << endl;
        cout << "Public: " << publicBook << endl;
    }
};

class Member : public Library {
public:
    void showAccessibleBooks() {
        // cout << privateBook; // ❌ Not accessible
        cout << "Protected: " << protectedBook << endl; // ✅
        cout << "Public: " << publicBook << endl;       // ✅
    }
};

int main() {
    Library lib;
    lib.showBooks();
    cout << "Accessing from outside:\n";
    // cout << lib.privateBook; // ❌ Not allowed
    // cout << lib.protectedBook; // ❌ Not allowed
    cout << "Public: " << lib.publicBook << endl; // ✅

    Member m;
    m.showAccessibleBooks();

    return 0;
}
