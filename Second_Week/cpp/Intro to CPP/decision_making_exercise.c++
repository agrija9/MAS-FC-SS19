#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nationality = "";

    cout << "Enter your nationality: ";
    cin >> nationality;

    //transform nationality string to lowercase
    transform(nationality.begin(), nationality.end(), nationality.begin(),::tolower);
 
    if (nationality == "us")
    {
        cout << "Visa Not Required" << endl;
    }
    else if (nationality == "uk")
    {
        cout << "Visa Not Required" << endl;
    }
    else if (nationality == "japan")
    {
        cout << "Visa Not Required" << endl;
    }
    else 
    {
        // Handle incorrect inputs for partyID.
        cout << "Visa Required" << endl;
    }
    
    return 0;
}