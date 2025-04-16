
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
        virtual void show_menu() = 0; // чисто виртуальная функция для меню пользователей


        User(const string& n, const string&  s, const string& p) : name(n), surname(s), password(p) {}



    };
    
    
 class Patient : public User{
    public:
    
    void registration () override {
            cout << "Patient registration" << endl;
        

        }
        Patient(const string& n, const string&  s, const string& p) : User(n, s, p) {}


    void show_menu() override{

        
        int choise;
        
        cout<<"Patient menu"<<endl;

        cout<<"\tChoise option:"<<endl<<endl;
        cout<<"1.Medical history\n2.Recent analysies\n3.Book appoitment with doctor\n4.Change profile info\n5.Log out"<<endl;

        




    }


        };




        
    
    
class Doctor : public User {
    public:
        void registration() override {
            cout << "Doctor registration" << endl;

            
        }
        Doctor(const string& n, const string&  s, const string& p) : User(n, s, p) {}
    


        void show_menu() override{

            cout<<"Doctor menu"<<endl;
    
    
        }
    };
    
    
    
