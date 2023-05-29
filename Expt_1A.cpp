#include <iostream>
using namespace std;

int main()
{
    string password = "admin";
    cout << "Enter the Default password: " << endl;
    string passin;
    getline(cin, passin);
    if (passin == password)
    {
        cout << "Correct password" << endl;
    }
    else
    {
        cout << "Wrong password" << endl;
    }

    return 0;
}