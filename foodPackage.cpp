#include "foodPackage.h"


FoodPackage::FoodPackage(string n, int q) {
    name = n;
    quantity = q;
}


string FoodPackage::getName() const {
    return name;
}


int FoodPackage::getQuantity() const {
    return quantity;
}


void FoodPackage::setQuantity(int q) {
    quantity = q;
}


void FoodPackage::givePackage() {
    if (quantity > 0) {
        quantity--;
    } else {
        cout << "No more " << name << " packages available!" << endl;
    }
}


void FoodPackage::restock(int amount) {
    if (amount > 0) {
        quantity += amount;
    }
}


bool FoodPackage::operator==(const FoodPackage& other) const {
    return (name == other.name && quantity == other.quantity);
}


ostream& operator<<(ostream& os, const FoodPackage& pkg) {
    os << "Package: " << pkg.name << ", Quantity: " << pkg.quantity;
    return os;
}