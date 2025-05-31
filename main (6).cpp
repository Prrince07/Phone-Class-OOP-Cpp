#include <iostream>
using namespace std;

class Phone {
private:
    string brand;
    string model;
    int price;

public:
    void setBrand(string b) {
        brand = b;
    }

    void setModel(string m) {
        model = m;
    }

    void setPrice(int p) {
        if (p > 0)
            price = p;
        else
            cout << "Invalid price!" << endl;
    }
    string getBrand() {
        return brand;
    }
    string getModel() {
        return model;
    }

    int getPrice() {
        return price;
    }
};

int main() {
    Phone myPhone;

    myPhone.setBrand("Samsung");
    myPhone.setModel("Galaxy S24");
    myPhone.setPrice(79999);

    cout << "Phone Details:" << endl;
    cout << "Brand: " << myPhone.getBrand() << endl;
    cout << "Model: " << myPhone.getModel() << endl;
    cout << "Price: ₹" << myPhone.getPrice() << endl;

    return 0;
}
