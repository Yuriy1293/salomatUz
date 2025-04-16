#include <iostream>
#include"User_fabrics.h"
#include<string>
#include"Validator.h"
using namespace std;

class Registration{

    private:
    string name, surname, password, PINFL;



    public:


    User* start(){

        int choise;
        cout<<"Welcome to our medical application!"<<endl;
        
        



        
        UserFactory* factory = nullptr;


        

        while (true){
            cout<<"Who you are? \n1)Patient\n2)Doctor"<<endl;
            cin >> choise;
            switch (choise){

                case 1:
                cout<<"Patient option was chosen"<<endl;
                factory = new PatientFactory();
                break;
    
                case 2:
                cout<<"Doctor option was chosen"<<endl;
                factory = new DoctorFactory();
                break;
                
                default:
                    cout<<"There is no such option. Please,choise again"<<endl<<endl;
                    continue;
    
            }
            break;
        }
        

        cout<< "Enter your name:"<<endl;
        cin>>name;
        cout<<"Enter your surname"<<endl;
        cin>>surname;

        
        while (true){
            cout<<"Enter your PINFL (12 digits)"<<endl;
            cin>>PINFL;
            if (Validator::PINFL_checker(PINFL)){
                cout<<"Correct PINFL"<<endl;
                break;
            }
            else{
                cout<<"Incorrect PINFL, please , try again"<<endl;
            }
    
        }
        
        
        
        
        
        
        cout<<"Now you need to set up your passwort"<<endl;
        while (true){
            cout<<"Enter new password"<<endl;
            cin>>password;
            if (Validator::password_checher(password)){
                cout<<"Correct password"<<endl;
                break;
            }
            else{
                cout<<"Incorrect password, please , try again"<<endl;
            }
    
        }
        
        User* user = factory->create_user(name, surname, password);
        user->registration();
        
        
        
        
        

        return user;

    }




};