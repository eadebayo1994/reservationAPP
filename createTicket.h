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
#include <vector>
#include <fstream>
#include "customer.h"
#include "firstClass.h"
#include "businessClass.h"
#include "economyClass.h"
using namespace std;
//the input and output class
class CreateTicket {
    vector<Customer*> customers;  //stores the customer info
public:
    explicit CreateTicket(int options) {
        enum {firstClass =1, secondClass, thirdClass, compareTickets}; //enum to check user's input
        if(options == firstClass){
            string yesNo1;
            do {
                string name;
                long ssn;
                int numOfSeats, windowSide;
                bool windowside;
                cout<<"please enter name"<<endl;
                cin>>name;
                cout<<"social security number"<<endl;
                cin>>ssn;

                enum{planewindowside, notwindowside};
                cout<<"please enter [0 for windowside, 1 for non windowside"<<endl;
                cin>>windowSide;
                if (windowSide == planewindowside){
                    windowside = true;
                }else {
                    windowside = false;
                }

                cout<<"please enter number of seats"<<endl;
                cin>>numOfSeats;

                if (check_number(name)){
                    throw invalid_argument("please enter strings only");
                }

                customers.push_back(new FirstClass(name, to_string(ssn), windowside, numOfSeats));

                ofstream firstClassFile;
                firstClassFile.open(name+".txt");
                firstClassFile << "Thank you for choosing our airline\n";
                firstClassFile << "You are now set for the first class\n";
                firstClassFile << "your identification number is: \n";

                firstClassFile << "yor id is : ";
                firstClassFile <<FirstClass::numOfTicketsCreated + rand() % 10045550 + 167895566;
                firstClassFile<<"\n";

                firstClassFile<<"the name is : ";
                firstClassFile <<name + "\n";

                firstClassFile<<"your social security number is :";
                firstClassFile <<ssn;
                firstClassFile<<"\n";

                firstClassFile <<"total number of people on ticket is :";
                firstClassFile <<numOfSeats;



                firstClassFile.flush();
                firstClassFile.close();


                cout<<"add another? "<<endl;
                cout<<"enter Y or y to add more"<<endl;
                cin>>yesNo1;
            }
            while (yesNo1 == "Y" || yesNo1 == "y");
        }
        else if(options == secondClass){
            string yesNo2;
            do {


                string name;
                long ssn;
                int numOfSeats, windowSide;
                bool windowside;
                cout<<"please enter name"<<endl;
                cin>>name;
                cout<<"social security number"<<endl;
                cin>>ssn;

                enum{planewindowside, notwindowside};
                cout<<"please enter [0 for windowside, 1 for non windowside"<<endl;
                cin>>windowSide;
                if (windowSide == planewindowside){
                    windowside = true;
                }else {
                    windowside = false;
                }

                cout<<"please enter number of seats"<<endl;
                cin>>numOfSeats;

                if (check_number(name)){
                    throw invalid_argument("please enter strings only");
                }

                customers.push_back(new FirstClass(name, to_string(ssn), windowside, numOfSeats));
                ofstream firstClassFile;
                firstClassFile.open(name+".txt");
                firstClassFile << "Thank you for choosing our airline\n";
                firstClassFile << "You are now set for the Business class\n";
                firstClassFile << "your identification number is: \n";

                firstClassFile << "yor id is : ";
                firstClassFile <<FirstClass::numOfTicketsCreated + rand() % 10045550 + 167895566;
                firstClassFile<<"\n";

                firstClassFile<<"the name is : ";
                firstClassFile <<name + "\n";

                firstClassFile<<"your social security number is :";
                firstClassFile <<ssn;
                firstClassFile<<"\n";

                firstClassFile <<"total number of people on ticket is :";
                firstClassFile <<numOfSeats;



                firstClassFile.flush();
                firstClassFile.close();


                cout<<"add another? "<<endl;
                cout<<"enter Y or y to add more"<<endl;
                cin>>yesNo2;
            }
            while (yesNo2 == "Y" || yesNo2 == "y");
        }
        else if(options == thirdClass){
            string yesNo3;
            do {

                string name;
                long ssn;
                int numOfSeats, windowSide;
                bool windowside;
                cout<<"please enter name"<<endl;
                cin>>name;
                cout<<"social security number"<<endl;
                cin>>ssn;

                enum{planewindowside, notwindowside};
                cout<<"please enter [0 for windowside, 1 for non windowside"<<endl;
                cin>>windowSide;
                if (windowSide == planewindowside){
                    windowside = true;
                }else {
                    windowside = false;
                }

                cout<<"please enter number of seats"<<endl;
                cin>>numOfSeats;

                if (check_number(name)){
                    throw invalid_argument("please enter strings only");
                }

                customers.push_back(new FirstClass(name, to_string(ssn), windowside, numOfSeats));

                ofstream firstClassFile;
                firstClassFile.open(name+".txt");
                firstClassFile << "Thank you for choosing our airline\n";
                firstClassFile << "You are now set for the Economy class class\n";
                firstClassFile << "your identification number is: \n";

                firstClassFile << "yor id is : ";
                firstClassFile <<FirstClass::numOfTicketsCreated + rand() % 10045550 + 167895566;
                firstClassFile<<"\n";

                firstClassFile<<"the name is : ";
                firstClassFile <<name + "\n";

                firstClassFile<<"your social security number is :";
                firstClassFile <<ssn;
                firstClassFile<<"\n";

                firstClassFile <<"total number of people on ticket is :";
                firstClassFile <<numOfSeats;



                firstClassFile.flush();
                firstClassFile.close();



                cout<<"add another? "<<endl;
                cout<<"enter Y or y to add more"<<endl;
                cin>>yesNo3;
            }
            while (yesNo3 == "Y" || yesNo3 == "y");

        }

        else if (options == compareTickets){
            string name;
            long ssn;
            int windowSide, numOfSeatsForFirstClass, numOfSeatsForBusinessClass;
            bool windowside;
            cout<<"please enter name"<<endl;
            cin>>name;
            cout<<"social security number"<<endl;
            cin>>ssn;

            enum{planewindowside, notwindowside};
            cout<<"please enter [0 for windowside, 1 for non windowside"<<endl;
            cin>>windowSide;
            if (windowSide == planewindowside){
                windowside = true;
            }else {
                windowside = false;
            }

            cout<<"please enter number of seats for first class"<<endl;
            cin>>numOfSeatsForFirstClass;

            cout<<"please enter number of seats for Business class class"<<endl;
            cin>>numOfSeatsForBusinessClass;

            if (check_number(name)){
                throw invalid_argument("please enter strings only");
            }

            FirstClass firtsClass(name, to_string(ssn), windowside, numOfSeatsForFirstClass);
            BusinessClass businessClass(name, to_string(ssn), windowside, numOfSeatsForBusinessClass);


            if(firtsClass > businessClass){

                cout <<firtsClass;
                cout<< ", first class ticket is higher than the price of business class right now "<<endl;
            }
            else {
                cout<<"business class ticket is much higher right now"<<endl;
            }

        }
    }

    //function checks if string is a number
    bool check_number(string str) {
        for (int i = 0; i < str.length(); i++)
            if (isdigit(str[i]) == false)
                return false;
        return true;
    }
    //output the user's information
    void outputTickets(){
        //cout<<"called func"<<endl;
        for(int i = 0; i<customers.size(); i++){

            cout<<"The number of seats are: ";
            cout<<customers[i]->getNumOfSeats()<<endl;

            cout<<"the price of your tikect(s) is below"<<endl;
            cout<<"$";
            cout<<customers[i]->getPriceTicket()<<endl;
             cout<<"The name on the ticket is: ";
             cout<<customers[i]->getName()<<endl;


            //customers[i]->getReceipt();
        }
    }
    //free up the memory
    ~CreateTicket(){
        delete[] customers[customers.size()-1];
        customers.pop_back();
    }
};
