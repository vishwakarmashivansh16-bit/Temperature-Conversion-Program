/*
------------------------------------------------------------
|   Project Title : Temperature Conversion Program          |
|   Author        : Shivansh Vishwakarma                    |
|   Language      : C++                                     |
|   Date Created  : November 2025                           |
|   Version       : 1.0                                     |
|-----------------------------------------------------------|
|   Description:                                            |
|   This program allows users to convert temperature values |
|   between Celsius, Kelvin, and Fahrenheit. It provides a  |
|   simple command-line interface with multiple conversion  |
|   options for easy and accurate unit transformation.      |
------------------------------------------------------------
*/

#include <bits/stdc++.h>   // Includes all standard C++ libraries
using namespace std;

int main() {

    // Display the menu for conversion options
    cout << "=============================================\n";
    cout << "          Temperature Conversion Menu        \n";
    cout << "=============================================\n";
    cout << "1. Celsius   --> Kelvin\n";
    cout << "2. Celsius   --> Fahrenheit\n";
    cout << "3. Kelvin    --> Fahrenheit\n";
    cout << "4. Kelvin    --> Celsius\n";
    cout << "5. Fahrenheit --> Celsius\n";
    cout << "---------------------------------------------\n";

    int value;
    cout << "Enter your choice (1-5): ";
    cin >> value;

    // Perform the selected conversion using switch-case
    switch (value) {

        // Celsius → Kelvin
        case 1: {
            double celsius;
            cout << "Enter temperature in Celsius: ";
            cin >> celsius;
            double kelvin = 273.15 + celsius;
            cout << "Kelvin value = " << kelvin << " K\n";
            break;
        }

        // Celsius → Fahrenheit
        case 2: {
            double celsius;
            cout << "Enter temperature in Celsius: ";
            cin >> celsius;
            double fahrenheit = (9 * celsius) / 5 + 32;
            cout << "Fahrenheit = " << fahrenheit << " °F\n";
            break;
        }

        // Kelvin → Fahrenheit
        case 3: {
            double kelvin;
            cout << "Enter temperature in Kelvin: ";
            cin >> kelvin;
            double fahrenheit = ((kelvin - 273.15) * (9.0 / 5)) + 32;
            cout << "Fahrenheit = " << fahrenheit << " °F\n";
            break;
        }

        // Kelvin → Celsius
        case 4: {
            double kelvin;
            cout << "Enter temperature in Kelvin: ";
            cin >> kelvin;
            double celsius = kelvin - 273.15;
            cout << "Celsius = " << celsius << " °C\n";
            break;
        }

        // Fahrenheit → Celsius
        case 5: {
            double fahrenheit;
            cout << "Enter temperature in Fahrenheit: ";
            cin >> fahrenheit;
            double celsius = (fahrenheit - 32) * 5.0 / 9;
            cout << "Celsius = " << celsius << " °C\n";
            break;
        }

        // Default case for invalid input
        default: {
            cout << "Invalid choice! Please select between 1 and 5.\n";
        }
    }

    cout << "\n---------------------------------------------\n";
    cout << "Thank you for using the Temperature Converter!\n";
    cout << "---------------------------------------------\n";

    return 0;
}
