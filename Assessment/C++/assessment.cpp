#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

void showTime();
void accountAccess();
void helpScreen();
void sayGoodbye();
void giveAccess();
int depositeSystem(int balance);
int withdrawalSystem(int balance);
void balanceEnqiry(int balance);


int main()
{
    int pin = 12345, choice, userEnteredPIN, selection, balance = 20000; 
    int toGiveAccess = 0;
	showTime();
    cin >> choice;
    switch(choice)
    {
        case 0: helpScreen();
                break;
        case 1: accountAccess();
                cin >> userEnteredPIN;
                toGiveAccess = (userEnteredPIN == pin) ? 1 : 2;
                break;
    }
    
    
    if(toGiveAccess == 1)
    {
        giveAccess();
        cin >> selection;
        switch(selection)
        {
            case 1: balance = depositeSystem(balance);
                    break;
            case 2: balance = withdrawalSystem(balance);
                    break;
            case 3: balanceEnqiry(balance);
                    break;
            case 0: goto end;
        }
    }
    if (toGiveAccess == 2)
    {
        sayGoodbye();
    }
    end:
    return 0;
}

void showTime()
{
    time_t tt;
	struct tm * ti;

	time (&tt);
	ti = localtime(&tt);
    cout << "\n\n|||||||||||||||||||||| Welcome To ATM ||||||||||||||||||||||\n\n" << setw(42)<<"----------------------\n\n" << setw(25) << "Current date : " << asctime(ti) << "\n" << setw(40) << "----------------------" << "\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n" << "Press 1 and Then Press Enter To Access Your Account Via Pin Number\n\n" << setw(30) << "or\n\n" << setw(48) << "Press 0 and Press Enter To Get Help.\n\n"; 
	return;
}

void accountAccess()
{
    system("cls");
    cout << "|||||||||||||||||||||||| ATM ACCOUNT ACCESS |||||||||||||||||||||||||\n\n"
         << " Enter Your Account Pin Access Number! [Only one attempt is allowed] \n\n"
         << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
}

void helpScreen()
{
    system("cls");
    cout << "|||||||||||||||||||||||| ATM ACCOUNT STATUS |||||||||||||||||||||||||\n\n" 
         << " You must have the correct pin to access this account. See your bank \n\n"
         << "       representative for assistance during bank opening hours.      \n\n"
         << "                   Thanks for, your choice today!!                   \n\n"
         << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
         return;
}

void sayGoodbye()
{
    system("cls");
    cout << "||||||||||||||||||||||||||||| THANK YOU ||||||||||||||||||||||||||||||\n\n"
         << "              You had made your attemp which failed!!!                \n"
         << "                 No more attempts allowed!! Sorry!!                   \n\n"
         << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
         return;
}

void giveAccess()
{
    system("cls");
    cout << "|||||||||||||||||||||||||||| ATM MAIN MENU SCREEN ||||||||||||||||||||\n\n"
         << "                          Enter [1] To Deposite Cash                  \n\n"
         << "                          Enter [2] To Withdraw Cash                  \n\n"
         << "                          Enter [3] To Balance Enquiry                \n\n"
         << "                          Enter [0] To Exit ATM                       \n\n"
         << "                 PLEASE ENTER A SELECTION AND PRESS ENTER KEY         \n\n"
         << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
         return;
}

int depositeSystem(int balance)
{
    system("cls");
    int depAmount = 0;
    cout << "|||||||||||||||||||||||| ATM ACCOUNT DEPOSITE SYSTEM ||||||||||||||||||||\n\n"
         << "                        Account Holder: Rakesh Kharva                    \n\n"
         << "                               Address: Mumbai                           \n\n"
         << "                                Branch: Andheri                          \n\n"
         << "                        Account Number: 43150100014705                   \n\n"
         << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n"
         << "                     Available balance: Rs. " << balance <<"\n\n"
         << "                          Enter Amount: ";
         cin >> depAmount;
         balance += depAmount;
    cout << "\n\n                           New Balance: " << balance  << "\n\n\n"
         << "                                 THANK YOU!                              \n\n";
    return balance;
}

int withdrawalSystem(int balance)
{
    system("cls");
    int withdrawlBalance = 0;
    cout << "|||||||||||||||||||||||||| ATM ACCOUNT WITHDRAWAL |||||||||||||||||||||||\n\n"
         << "                        Account Holder: Rakesh Kharva                    \n\n"
         << "                               Address: Mumbai                           \n\n"
         << "                                Branch: Andheri                          \n\n"
         << "                        Account Number: 43150100014705                   \n\n"
         << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n"
         << "                          Enter Amount: ";
         cin >> withdrawlBalance;
         if (withdrawlBalance <= balance)
         {
            balance -= withdrawlBalance;
            cout << "                     Available balance: Rs. " << balance <<"\n\n";
         }
         else
         {
            cout << "                  Insufficient balance in your account.                   \n\n"
                 <<"                                    Sorry!!\n\n";
         }
         return balance;
}
void balanceEnqiry(int balance)
{
    system("cls");
   cout << "|||||||||||||||||||||||||||||| BALANCE ENQUIRY ||||||||||||||||||||||||||\n\n"
        << "                        Account Holder: Rakesh Kharva                    \n\n"
        << "                               Address: Mumbai                           \n\n"
        << "                                Branch: Andheri                          \n\n"
        << "                        Account Number: 43150100014705                   \n\n"
        << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n"
        << "                     Available balance: Rs. " << balance <<"\n\n";
}
