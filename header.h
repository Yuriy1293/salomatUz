
#pragma once
#include <iostream>
using namespace std;



class User {

    protected:
    string name;
    string surname;
    string password;



    public:
        virtual void registration() = 0; // чисто виртуальная функция для регистрации 

        User(const string& n, const string&  s, const string& p) : name(n), surname(s), password(p) {}



    };
    
    
 class Patient : public User{
    public:
        void registration () override {
            cout << "Patient registration" << endl;
        

        }
        Patient(const string& n, const string&  s, const string& p) : User(n, s, p) {}

        };




        
    
    
class Doctor : public User {
    public:
        void registration() override {
            cout << "Doctor registration" << endl;

            
        }
        Doctor(const string& n, const string&  s, const string& p) : User(n, s, p) {}
    
    };
    
    
    
