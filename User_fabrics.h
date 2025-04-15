#include <iostream>
#include"header.h"
using namespace std;


class UserFactory{
public:
    virtual User* create_user(const string &name, const string &surname,  const string &password) = 0;

};

class PatientFactory : public UserFactory{
public:

    User *create_user(const string &name, const string &surname,  const string &password) override {

        cout<<"Patient Factory"<<endl;
        return new Patient(name, surname, password);

    };

};

class DoctorFactory : public UserFactory{
    public:
    
        User *create_user(const string &name, const string &surname,  const string &password) override {
    
            cout<<"Doctor Factory"<<endl;
            return new Doctor(name, surname, password);
    
        };
    
    };