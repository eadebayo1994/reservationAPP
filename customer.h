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
using namespace std;
//create the customer class, has three derived class (first class, businessclass and economy class)
class Customer {
    friend ostream& operator<<(ostream& out, Customer& lhs);
private:
    string name;
    string ssn;
public:
    explicit Customer(string name, string ssn) {

        this->name = name;
        this->ssn = ssn;
    }
    string getName(){
        return name;
    }
    string getSSN(){
        return ssn;
    }
    virtual double getPriceTicket() = 0;
    virtual int getNumOfSeats() = 0;
};
ostream& operator<<(ostream& out, Customer& lhs) {
    out <<lhs.getName() <<endl;
}