// CIS108LAB02_chpt4ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int year = 365;
int age = 32;
int age_in_days;

int main()
{
    age_in_days = age * year;

    cout << "I am " << age_in_days << " days old\n";

}


