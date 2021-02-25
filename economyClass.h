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
#include <string>
#include "firstClass.h"
#include "businessClass.h"
using namespace std;
//economy class derived from customer class
class Economy : public Customer {
    friend ostream& operator<<(ostream& out, Economy& lhs);

private:
    bool windowSide;
    int numOfSeats;

public:
    static int price;
    static int numOfTicketsCreated;
    explicit Economy(string name, string ssn, bool windowSide, int numOfSeats) :
    Customer(name, ssn) {
        this->windowSide = windowSide;
        this->numOfSeats = numOfSeats;
        numOfTicketsCreated++;
    }
    int getNumOfSeats() {
        return numOfSeats;
    }
    bool getWindowSide() {
        return windowSide;
    }
    string getName() {
        return getName();
    }
    double getPriceTicket() {
        return Economy::price * numOfSeats;
    }





};
int Economy::price = 100;
int Economy::numOfTicketsCreated = 0;
ostream& operator<<(ostream& out, Economy& lhs) {
    out <<lhs.getWindowSide() <<endl;
}



