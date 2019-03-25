#include <iostream>

// Include the string header to store strings of characters
#include <string>

using namespace std;

int main()
{
    // Define a string variable to store the user's name. 
    // Set the default value as an empty name.
    string firstname = "";
    string lastname = "";
    string nationality = "";
    int year_of_birth = 0;
    int current_year = 2019;
    int age = 0;


    cout << "Please enter your first name: ";
    cin >> firstname;

    /*
    cin is also from the iostream header and is used to get user inputs from the
    user. The user input is stored into the username variable.
    This will replace the default value of an empty name by the users input
    */

    cout << "Enter your last name: ";
    cin >> lastname;

    cout << "Enter your nationality: ";
    cin >> nationality; 

    cout << "Enter your year of birth: ";
    cin >> year_of_birth;

 
    age = current_year - year_of_birth;

    cout << firstname  << " " << lastname << " is a " << age << " year old " << nationality  << endl;

    return 0;
}