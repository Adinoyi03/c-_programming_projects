#include <iostream>

using namespace std;

void showmenu(){
    cout << "1. Check Balance \n";
    cout << "2. Deposit \n";
    cout << "3. Withdraw \n";
    cout << "4. Exit \n";
}

int main()
{
	int option, exit;
	double deposit, withdraw;
	double balance = 1000;
	cout << "Welcome to Aditech we are here to serve you\n\n";
	do{
	showmenu();
	cout<< "\n";
	cout << "Select an option: ";
    cin >> option;
    switch (option){
        case 1:
        cout << "Your balance is $"<<balance<< endl<<endl;
        break;
        case 2:
        cout <<"Enter deposit amount :";
        cin >> deposit;
        balance += deposit;
        cout << "You have succesfully deposited $"<< deposit << " in to you account.\n"<< endl;
        break;
        case 3:
        cout << "Enter amount do withdraw :";
        cin>>withdraw;
        if (withdraw <= balance){
            balance -= withdraw;
            cout << "$"<<withdraw << " has just been withdrawn from your account, please take your cash"<< endl<<endl;
        }
        else{
            cout << "Insufficient balance"<< endl;
        }
        break;
        
    }
	}
	while(option !=4);
        
	return 0;
}
