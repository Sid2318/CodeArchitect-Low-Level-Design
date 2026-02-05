#ifndef RESTAURANTMANAGER_H
#define RESTAURANTMANAGER_H

#include<bits/stdc++.h>
#include "../model/Restaurant.h"
using namespace std;

//Singleton class to manage restaurants
class RestaurantManager
{
private:
    vector<Restaurant> restaurants;
    static RestaurantManager* instance;

    // Private constructor to prevent instantiation
    RestaurantManager() {
        //pribate constructor logic if needed
    }
public:
    // Static method to get the single instance of RestaurantManager
    static RestaurantManager* getInstance() {
        if (instance == nullptr) {
            instance = new RestaurantManager();
        }
        return instance;
    }

    // Method to add a restaurant
    void addRestaurant(const Restaurant& restaurant) {
        restaurants.push_back(restaurant);
    }

    // Method to get all restaurants
    vector<Restaurant> getRestaurants() const {
        return restaurants;
    }

    vector<Restaurant*> searchByLocation(string loc) {
        vector<Restaurant*> result;
        transform(loc.begin(), loc.end(), loc.begin(), ::tolower);
        for (auto r : restaurants) {
            string rl = r->getLocation();
            transform(rl.begin(), rl.end(), rl.begin(), ::tolower);
            if (rl == loc) {
                result.push_back(r);
            }
        }
        return result;
    }
};

RestaurantManager* RestaurantManager::instance = nullptr;

#endif // RESTAURANTMANAGER_H