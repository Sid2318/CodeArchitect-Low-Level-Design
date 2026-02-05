#ifndef RESTAURANT_H
#define RESTAURANT_H

#include<bits/stdc++.h>
#include "MenuItem.h"
using namespace std;

class Restaurant
{
private:
    static int nextRestaurantId;
    int restaurantId;
    string name;
    string location;
    vector<MenuItem> menu;
public:
    Restaurant(const string& name, const string& location){
        this->name = name;
        this->location = location;
        this->restaurantId = ++nextRestaurantId;
    }

    ~Restaurant() {
        // Destructor logic if needed
        cout<<"Restaurant with ID " << restaurantId << " is being destroyed." << endl;
        menu.clear();
    }

    //Getters and Setters
    string getName() const {
        return name;
    }

    void setName(const string& name) {
        this->name = name;
    }

    string getLocation() const {
        return location;
    }

    void setLocation(const string& location) {
        this->location = location;
    }
};

int Restaurant::nextRestaurantId = 0;

#endif // RESTAURANT_H