#ifndef FOODPACKAGE_H
#define FOODPACKAGE_H

#include <string>
#include <iostream>
using namespace std;

class FoodPackage {
private:
    string name;
    int quantity;

public:
    
    FoodPackage(string n, int q);

   
    string getName() const;
    int getQuantity() const;

    
    void setQuantity(int q);

    
    void givePackage();
    void restock(int amount);

    
    bool operator==(const FoodPackage& other) const;
    
    
    friend ostream& operator<<(ostream& os, const FoodPackage& pkg);
};

#endif 
