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
#include "economyClass.h"
#include "firstClass.h"
using namespace std;
//business class derived from customer class
class BusinessClass : public Customer {
    friend ostream& operator<<(ostream& out, BusinessClass& lhs);

private:
    bool windowSide;
    int numOfSeats;
public:
    static int price;
    static int numOfTicketsCreated;
    explicit BusinessClass(string name, string ssn, bool windowSide, int numOfSeats) :
    Customer(name, ssn) {

        this->windowSide = windowSide;
        this->numOfSeats = numOfSeats;
        numOfTicketsCreated++;
    }
    int getNumOfSeats(){
        return numOfSeats;
    }
    bool getWindowSide(){
        return windowSide;
    }
    string getName(){
        return getName();
    }
    double getPriceTicket(){
        return BusinessClass::price * numOfSeats;
    }
    bool operator>(Economy other){
        if (getPriceTicket() > other.getPriceTicket()){
            return true;
        }
        else {
            return false;
        }
    }



};
int BusinessClass::price = 200;
int BusinessClass::numOfTicketsCreated = 0;
ostream& operator<<(ostream& out, BusinessClass& lhs) {
    out <<lhs.getWindowSide() <<endl;
}