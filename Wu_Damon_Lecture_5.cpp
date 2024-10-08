// Damon Wu 
// 10/7/2024
// Lab 5

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main (){
    // lists variables
    double Debit = 0;  // starting debit
    double Credit = 0; // starting credit amount
    string type;       // type of transcation 
    char request;      // the request on whether to continue or not. 
    double start;      // starting money.
    double numtrans;   // number of transactions made
    double amttrans;   // the value of each transaction
    bool loop = true;  // determines if loop continues 
    double total;      // value used to determine current value 


    while (loop = true){        // while this loop is going, this program runs. 

    // asks user for money they have and stores it in a value. 
    cout << "Hello, please put in how much money you have in your bank account right now. \n";
    cin >> start;

    // asks user for number of transactions
    cout << "How many transactions you have done today? \n";
    cin >> numtrans;

    // while the number of transactions remains above 0, calculate the credit increase or debit increase. 
    while (numtrans > 0){

    // takes in the type of transcation being made. 
    cout << "Ok, what kind of transaction do you want to make, Credit or Debit? 'please note that this is case sensitive.' \n";
    cin >> type;

    // if the input isnt Credit or Debit, tells the user that something is wrong and prompts them to re-type their transaction method. 
    if (type != "Credit" && type != "Debit") {
        cout<< "Invalid input, please re-type your submission, please also check if you made a mistake in typing the method \n";
        cin >> type;
    }   

    // takes in the value for their transaction
    cout << "How much was the transaction you made? \n";
    cin >> amttrans;

    // if the value they put in is "Debit", the value inputted is taken from the starting amount, then the counter goes down, after, the total amount for debit increases. 
        if (type == "Debit"){
         cout << "Your New Balance in your account is $" <<fixed<< setprecision(2)<< start - amttrans << ".\n";
        numtrans = numtrans - 1;
        Debit = Debit + amttrans;
        }
    // if the value they put in is "Credit", starting amount increases by the value inputted, then the counter goes down, after, the total amount for Credit increases.
        else if(type == "Credit"){
            cout << "Your new balance in your account is $" <<fixed<< setprecision(2)<< start + amttrans << ". \n";
        numtrans = numtrans -1;
        Credit = Credit + amttrans;
        }
    
    //if the number of transactions equals 0, outputs the total amount of Credit and Debit accumulated, then asks the user if anyone else is using the machine, if so, the loop continues, if not, the program says bye. 
    
        if (numtrans == 0){
        
        cout << "Total credit addition: $" <<Credit<< "\n";
        cout << "Total debit decrease: $" <<Debit<< "\n";
        cout << "Is there someone else who wants to use the machine? If not, press 'N' or 'n' to end operations.  '\n";
            cin >> request;
            if (request == 'N' || request == 'n')
        {
            loop = false;
            cout << "Have a good day!" << endl;   
            return 0;   
        }
        }
    }
    }
}