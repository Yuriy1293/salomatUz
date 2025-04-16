
#include <iostream>
#include"header.h"
#include"registration.h"
using namespace std;




int main(){



    Registration reg;
    

    //указатель на обьект юзера (User* user это как int a , только принимает указатель на обьект )
    User* user = reg.start();

    if (user){
        user->show_menu();
    }
    

    delete user;


    
    

    return 0;
}