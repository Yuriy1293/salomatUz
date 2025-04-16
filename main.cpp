
#include <iostream>
#include"header.h"
#include"registration.h"
using namespace std;




int main(){



    Registration reg;
    
    User* user = reg.start();

    if (user){
        user->show_menu();
    }
    

    delete user;


    
    

    return 0;
}