#include <iostream>
#include"User_fabrics.h"
#include<string>
using namespace std;

class Registration{

    private:
    string name, surname, password, PINFL;



    public:



    // checking for password lenght
    bool lenght_checker(string password){
        if (password.length() >=8 ){

            return 1;
        }
        return 0;

    }



    //checking for digits in password
    bool digit_checker(string password){
        for (char ch : password ){
            if (ch> '0' && ch <='9'){
                return 1;
            }
        }
        return 0;
    }


    // general password checker
    bool password_checher(string password){

        if (lenght_checker(password) && digit_checker(password)){
            return 1;

        }
        return 0;




    }

    // PINFL lenght checker
    bool PINFL_lenght_checker(string PINFL){
        if (PINFL.length() ==12 ){

            return 1;
        }
        return 0;
        
    }


    bool PINFL_digit_checker(string PINFL){
        for (char ch : PINFL ){
            if (ch < '0' || ch > '9'){
                return 0;
            }
        }
        return 1;
    }

    bool PINFL_checker(string PINFL){
        if (PINFL_lenght_checker(PINFL) && PINFL_digit_checker(PINFL)){

            return 1;


        }
        return 0;
    }



    void start(){

        int choise;
        cout<<"Welcome to our medical application!"<<endl;
        cout<<"Who you are? \n1)Patient\n2)Doctor"<<endl;
        cin >> choise;



        
        UserFactory* factory = nullptr;

        switch (choise){

            case 1:
            factory = new PatientFactory();
            break;

            case 2:
            factory = new DoctorFactory();
            break;
        }

        cout<< "Enter your name:"<<endl;
        cin>>name;
        cout<<"Enter your surname"<<endl;
        cin>>surname;

        
        while (true){
            cout<<"Enter your PINFL (12 digits)"<<endl;
            cin>>PINFL;
            if (PINFL_checker(PINFL)){
                cout<<"Correct PINFL"<<endl;
                break;
            }
            else{
                cout<<"Incorrect PINFL, please , try again"<<endl;
            }
    
        }
        
        
        
        
        
        
        cout<<"Now you need to set up your passport"<<endl;
        while (true){
            cout<<"Enter new password"<<endl;
            cin>>password;
            if (PINFL_checker(password)){
                cout<<"Correct password"<<endl;
                break;
            }
            else{
                cout<<"Incorrect password, please , try again"<<endl;
            }
    
        }
        
        User* user = factory->create_user(name, surname, password);
        user->registration();



    }




};