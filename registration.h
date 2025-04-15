#include <iostream>
#include"User_fabrics.h"
using namespace std;

class Registration{

    private:
    string name, surname, password;



    public:

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
            if (password == "111"){
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