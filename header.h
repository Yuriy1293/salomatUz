#include <iostream>
using namespace std;



class User {


    public:
        virtual void registration() = 0; // чисто виртуальная функция для регистрации 
    };
    
    
    class Patient : public User{
    public:
        void registration  () override {
            cout << "Patient registration" << endl;
    
        }
    };
    
    class Doctor : public User {
    public:
        void registration() override {
            cout << "Doctor registration" << endl;
    
        }
    };
    
    
    
