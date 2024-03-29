#include<iostream>
using namespace std;

class Zimbabwe {
public:
    int chatara1;
protected:
    int raza2;
    int ervine3; // Changed access specifier from private to protected
};

// Case 1:
class Pakistan1 : private Zimbabwe {
public:
    int getchatara1() {
        chatara1 = 1;
        return chatara1;
    }
    int getervine3() {
        ervine3 = 3;
        return ervine3;
    }
};

// Case 2:
class Pakistan2 : public Zimbabwe {
public:
    int getchatara1() {
        chatara1 = 1;
        return chatara1;
    }
    int getraza2() {
        raza2 = 2;
        return raza2;
    }
};

int main() {
    // Creating objects for both cases
    Pakistan1 obj1;
    Pakistan2 obj2;

    // Case 1:
    // Accessing the public member function of Pakistan1 to access chatara1 and ervine3.
    cout << "Case 1:\n";
    cout << "Value of chatara1 (private member of Zimbabwe): " << obj1.getchatara1() << endl; // Will print 1
    cout << "Value of ervine3 (protected member of Zimbabwe): " << obj1.getervine3() << endl; // Will print 3

    // Case 2:
    // Accessing the public member functions of Pakistan2 to access chatara1 and raza2.
    cout << "\nCase 2:\n";
    cout << "Value of chatara1 (public member of Zimbabwe): " << obj2.getchatara1() << endl; // Will print 1
    cout << "Value of raza2 (protected member of Zimbabwe): " << obj2.getraza2() << endl; // Will print 2

    return 0;
}
