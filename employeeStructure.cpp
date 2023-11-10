#include <iostream>
using namespace std;

struct Employee {
    int ID;
    string firstName;
    string lastName;
    string email;
    int phoneNum;
    double salary;
    bool isManager;
};

int main() {
    
    Employee emp[3];

    emp[0].ID = 1001;
    emp[0].firstName = "Amir";
    emp[0].lastName = "Lorvand";
    emp[0].email = "a@email.com";
    emp[0].phoneNum = 077111111;
    emp[0].salary = 3200.00;
    emp[0].isManager = true;

    emp[1].ID = 1002;
    emp[1].firstName = "Harry";
    emp[1].lastName = "Robert";
    emp[1].email = "h@email.com";
    emp[1].phoneNum = 07722222;
    emp[1].salary = 2500.00;
    emp[1].isManager = false;

    emp[2].ID = 1003;
    emp[2].firstName = "Sara";
    emp[2].lastName = "Hart";
    emp[2].email = "s@email.com";
    emp[2].phoneNum = 077333333;
    emp[2].salary = 2400.00;
    emp[2].isManager = false;

  

    return 0;
}