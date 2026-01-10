// Week 1 Assignment- Mitchell Pelton.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	// This code asks for your name, birthyear, height, and number of siblings, it also calculates your age.
    
    //This section of code asks for your name, then says nice to meet you.

    string name;
    cout << "What is your name: ";
    cin >> name;
    cout << endl;
    cout << "Nice to meet you " << name;
	cout << endl;


	//This section of code asks for your height in meters.
    float height;
    cout << "What is your height in meters " << name; 
   
    cout << endl;
    cin >> height;
    cout << "Your height is :" << height; 
    cout <<" meters";
    cout << endl;




    
	//This section of code asks for your birthyear, then calculates your age.
    
    const int currentYear = 2026;
    int birthyear;
   
    
    cout << "What is your Birthyear " << name; 
    cout << endl;
   
        cin >> birthyear;
        
        cout << "Your age is ";
        cout << currentYear - birthyear;
        cout << " Years old";
        cout << endl;

        //This section of code asks you for your number of siblings.
        int siblings;
        cout << "How many Siblings do you have " << name;
        cout << endl;
        cin >> siblings;
        cout << "You have " << siblings;

        cout << " Siblings " << name;
        cout << endl;
        cout << " Have a Nice Day " << name;




    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
