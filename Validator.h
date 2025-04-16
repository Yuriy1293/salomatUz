// this class is created for checkers

#include <iostream>
using namespace std;

class Validator{


public:

// checking for password lenght
static bool lenght_checker(string password){
    if (password.length() >=8 ){

        return 1;
    }
    return 0;

}



//checking for digits in password
static bool digit_checker(string password){
    for (char ch : password ){
        if (ch>='0' && ch <='9'){
            return 1;
        }
    }
    return 0;
}


// general password checker
static bool password_checher(string password){

    if (lenght_checker(password) && digit_checker(password)){
        return 1;

    }
    return 0;




}

// PINFL lenght checker
static bool PINFL_lenght_checker(string PINFL){
    if (PINFL.length() ==12 ){

        return 1;
    }
    return 0;
    
}


static bool PINFL_digit_checker(string PINFL){
    for (char ch : PINFL ){
        if (ch < '0' || ch > '9'){
            return 0;
        }
    }
    return 1;
}

static bool PINFL_checker(string PINFL){
    if (PINFL_lenght_checker(PINFL) && PINFL_digit_checker(PINFL)){

        return 1;


    }
    return 0;
}








};