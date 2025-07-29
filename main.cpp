//My app is gona be for a food pantry I work at where people can choose betweeen if they are a family and get a box of food or if they are a single and get a bag of food

#include <iostream>
#include "foodPackage.h"
using namespace std;

int main() {
    
    FoodPackage familyBox("Family Box", 10);      // initial quantity of 10
    FoodPackage individualBag("Individual Bag", 10); // initial quantity of 10

    string userType;
    cout << "Welcome to the Food Distribution Center!" << endl;
    cout << "Are you a family or individual? (Enter 'family' or 'individual'): ";
    cin >> userType;

    if (userType == "family") {
        familyBox.givePackage();
        cout << "You received a Family Box!" << endl;
        cout << familyBox << endl;
    } else if (userType == "individual") {
        individualBag.givePackage();
        cout << "You received an Individual Bag!" << endl;
        cout << individualBag << endl;
    } else {
        cout << "Invalid input. Please enter 'family' or 'individual'." << endl;
    }

    return 0;
}
