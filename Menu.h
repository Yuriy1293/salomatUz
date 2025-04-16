//this file consists of several classes which represents varios menu pages depending on user type

#include <iostream>

using namespace std;

class Menu{

public:
    virtual void show() = 0;

    virtual ~Menu(){};


};



class PatientMenu : public Menu{

public:
    void show() override{
        
        int choise;
        
        cout<<"Patient menu"<<endl;

        cout<<"\tChoise option:"<<endl<<endl;
        cout<<"1.Medical history\n2.Recent analysies\n3.Book appoitment with doctor\n4.Change profile info\n5.Log out"<<endl;

        
    }




};

class DoctorMenu :public Menu{

    public:
        void show() override{
    

            int choise;
        
            cout<<"Doctor menu"<<endl;
    
            cout<<"\tChoise option:"<<endl<<endl;
            cout<<"1.Show patients\n2.Upload analysises\n3.Check patients appoitments\n4.Change profile info\n5.Log out"<<endl;
    
            
    
    
        
        }
    
    
    
    
    };