// Meidad Troper
// Oro 27
// MSP 3 Program
// Date created: November 22, 2023
// Last modified: November 22, 2023



#include <iostream>
using namespace std;


// pre Condition: varibales exist, arrays have size defined, and all data is imported.
// post condition: results are returned and printed on screen:

string GetPhoneNumber(string nameArr[], string phoneNumberArr[], int size, string contactName) {
    for (int i = 0; i < size; i++) {
        cin >> nameArr[i];
        cin >> phoneNumberArr[i];
    }
    
   // getting user name to search in data base:
      cin >> contactName;
      
   // return and print phone number if name match is found: 
    for (int i = 0; i < size; i++) {
        if (contactName == nameArr[i]) {
            cout << phoneNumberArr[i] << endl;
            return phoneNumberArr[i];
        }
    }

    // If the name is not found, return an empty string:
    return "";
}

// pre condition: none.
// Post condition: GetPhoneNumber has been called and program outputs correctly:
int main() {
    // decalred variables: 
    int size;
    cin >> size;
    string contactName;
    string phoneNumberArr[size];
    string nameArr[size];

    GetPhoneNumber(nameArr,phoneNumberArr,size,contactName);

    return 0;
}
