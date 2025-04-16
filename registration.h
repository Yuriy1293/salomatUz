#include <iostream>
#include"User_fabrics.h"
#include<string>
using namespace std;

class Registration{

    private:
    string name, surname, password;



    public:




    bool lenght_checker(string password){
        if (password.length() >=8 ){

            return 1;
        }
        return 0;


    }

    bool digit_checker(string password){
        for (char ch : password ){
            if (ch> '0' && ch <='9'){
                return 1;
            }
        }
        return 0;
    }


    bool password_checher(string password){

        if (lenght_checker(password) && digit_checker(password)){
            return 1;

        }
        return 0;


       



        return false;




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
            cout<<"Enter new password"<<endl;
            cin>>password;
            if (password_checher(password)){
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