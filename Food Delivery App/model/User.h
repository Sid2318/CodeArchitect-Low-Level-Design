#ifndef USER_H
#define USER_H

#include<bits/stdc++.h>
#include "Cart.h"
using namespace std;

class User
{
private:
    int userId;
    string name;
    string address;
    Cart* cart;
public:
    User(int userId, const string& name, const string& address  ) {
        this->userId = userId;
        this->name = name;
        this->address = address;
        this->cart = new Cart();
    }

    ~User() {
        // Destructor logic if needed
        cout<<"User with ID " << userId << " is being destroyed." << endl;
        delete cart;
    }

    // Getters and Setters
    int getUserId() const {
        return userId;
    }

    void setUserId(int userId) {
        this->userId = userId;
    }

    string getName() const {
        return name;
    }

    void setName(const string& name) {
        this->name = name;
    }

    string getAddress() const {
        return address;
    }

    void setAddress(const string& address) {
        this->address = address;
    }

    Cart* getCart() const {
        return cart;
    }

};

#endif // USER_H