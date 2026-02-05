#ifndef MENUITEM_H
#define MENUITEM_H  

#include<bits/stdc++.h>
using namespace std;

class MenuItem
{
private:
    string code;
    string name;
    double price;

public:
    MenuItem(const string& code ,const string& name, double price) {
        this->name = name;
        this->price = price;
        this->code = code;
    }

    ~MenuItem() {
        // Destructor logic if needed
        cout<<"MenuItem with code " << code << " is being destroyed." << endl;
    }

    // Getters and Setters
    string getCode() const {
        return code;
    }

    void setCode(const string& code) {
        this->code = code;
    }

    string getName() const {
        return name;
    }

    void setName(const string& name) {
        this->name = name;
    }

    double getPrice() const {
        return price;
    }

    void setPrice(double price) {
        this->price = price;
    }
};

#endif // MENUITEM_H