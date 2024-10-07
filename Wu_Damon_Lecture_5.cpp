// Damon Wu 
// 10/7/2024
// Lab something

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main (){
    string Debit = "Debit";
    string Credit = "Credit";
    string type;
    char request;
    double start;
    double numtrans;
    double amttrans;
    bool loop = true;

    while (loop = true){
    cout << "Hello, please put in how much money you have in your bank account rightnow, and also tell me the amount of bank transactions you have done today \n";
    cin >> start;
    cin >> numtrans;

    cout << "Ok, what kind of transaction do you want to make Credit or Debit?'please note that this is case sensitive.' \n";
    cin >> type;

    if (type != Credit && type != Debit) {
        cout<< "Invalid input, please re-type your submission, please also check if you made a mistake in typing the method \n";
        cin >> type;
    }   

    cout << "How much was each transaction you made? \n";
    cin >> amttrans;

        if (type == Debit){
         cout << "Your remainder in your account is $" <<fixed<< setprecision(2)<< start - (amttrans * numtrans ) << " please print your reciept and move on. \n";
        }
        if (type == Credit){
         cout << "Your remainder in your account is $" <<fixed << setprecision(2)<< start + (amttrans * numtrans) << " remember to pay off your bills in time! \n";
        }
    
         cout << "Is there a user that would like to continue? Press 'Y' to continue. \n";
            cin >> request;
            if (request = 'Y')
        {
            loop = false;
            cout << "Have a good day! \n";   
            return 0;   
        }
    }
}