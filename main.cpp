/*
 * Author : Emmanuel Adebayo
 *Name of Program : reservationApp
 * Purpose: a program that books tickets for people based on
 *          first class, business class and economy class,
 *          compares ticket price. It also prints and store
 *          ticket information using a Point-of-sale like system.
 * Date: 12/19/2020.
 * */
#pragma once
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
#include <fstream>
#include <ostream>
#include "customer.h"
#include "firstClass.h"
#include "businessClass.h"
#include "economyClass.h"
#include "createTicket.h"
using namespace std;

//this function checks if a variable is an int
bool check_number(string str) {
    for (int i = 0; i < str.length(); i++)
        if (isdigit(str[i]) == false)
            return false;
    return true;
}

int main() {

    //main program takes user input of range 1 to 4 then directs it to the createTicket class to work with it
    cout<<"Hello, welcome to the airline reservation application"<<endl;
    cout<<"[please enter 1 to book or check the price for first class tickets"<<endl;
    cout<<"[please enter 2 to book or check the price for Business class tickets"<<endl;
    cout<<"[please enter 3 to book or check the price for Economy class tickets"<<endl;
    cout<<"[please enter 4 to Compare class tickets"<<endl;

        int ticketType;

        while (!(cin >> ticketType)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "please enter an integer: " << endl;

        }


    try {

        CreateTicket createTicket(ticketType);
        createTicket.outputTickets();
    }
    catch (exception &e) {
        cout<<e.what();
    }






    return 0;
}
