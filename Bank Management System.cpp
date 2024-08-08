#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
_AGLOBAL int bol = 0;
using namespace std;



class account
{
private:
    int AccNo = 0;
    int PhoneNo = 0;
    int x = 0;
    int cardno = 0;
    int b = 0;
    int donate = 0;
    int balance = 50000 + (rand() % 500000);
    string name;
    string requests;
    float n = 0;
    char m = 0;
    char a = 0;


public:
    void  StoringData()
    {
        system("cls");
        cout << "\n\t\t\t\t\t\t**WELCOME TO LMT BMS**\n\n";
        fstream infile;
        infile.open("Accounts.txt", ios::in);
        char username[50], firstname[50], lastname[50], phoneno[50], email[50], accno[50];
        char uname[50];
        int count = 0;
        cout << "\t\t\tEnter username: ";

        cin.getline(uname, 50);
        if (infile.is_open())
        {

            while (!infile.eof())
            {
                infile.getline(username, 50, '|');
                infile.getline(firstname, 50, '|');
                infile.getline(lastname, 50, '|');
                infile.getline(phoneno, 50, '|');
                infile.getline(email, 50, '|');
                infile.getline(accno, 50);

                if (strcmp(username, uname) == 0)
                {
                    system("cls");
                    cout << "\n\t\t\t\t\t\t**WELCOME TO LMT BMS**\n\n";
                    cout << "\n\t\t\t\t\t*CUSTOMER DATA*\n\n ";
                    cout << "\t\t\tUsername: " << username << endl;
                    cout << "\t\t\tFirst Name: " << firstname << endl;
                    cout << "\t\t\tLast Name: " << lastname << endl;
                    cout << "\t\t\tPhone Number: " << phoneno << endl;
                    cout << "\t\t\tEmail: " << email << endl;
                    cout << "\t\t\tAccount Number: " << accno << endl;
                    count++;
                    bol++;
                    break;
                }
            }
            if (count == 0)
            {
                cout << "\n\t\t\tINVALID USERNAME!\n"; 
            }
            infile.close();
        }
        else
        {
            cout << "\t\t\tERROR....FILE CANNOT BE OPEN! \n";
        }
    }

    void ExchangeRates()
    {
        while (1)
        {
            cout << "\t\t\tWhich currency do you want to exchange from the list below?\n";
            cout << "\t\t\tPRESS 0 TO RETURN TO HOME PAGE!\n";
            cout << "\t\t\t1. USD\n\t\t\t2. EUR\n\t\t\t3. SAR\n\t\t\t4. GBP\n\t\t\t5. AED\n\t\t\t6. CHF\n";
            cout << "\t\t\t7. AUD\n\t\t\t8. BHD\n\t\t\t9. CAD\n\t\t\t10. CNY\n\t\t\t11. DKK\n\t\t\t12. JOD\n";
            cout << "\t\t\t13. JPY\n\t\t\t14. KWD\n\t\t\t15. NOK\n\t\t\t16. OMR\n\t\t\t17. QAR\n\t\t\t18. SEK\n\t\t\t";
            cout << "\n\n\t\t\tYour Choice: ";
            cin >> x;
            switch (x)
            {
            case 0:
                goto end;
            case 1:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " USD = " << n * 24.64 << " LE\n";
                cout << endl;
                break;
            case 2:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " EUR = " << n * 26.13 << " LE\n";
                cout << endl;
                break;
            case 3:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " SAR = " << n * 6.5 << " LE\n";
                cout << endl;
                break;
            case 4:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " GBP = " << n * 29.68 << " LE\n";
                cout << endl;
                break;
            case 5:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " AED = " << n * 6.71 << " LE\n";
                cout << endl;
                break;
            case 6:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " CHF = " << n * 26.37 << " LE";
                cout << endl;
                break;
            case 7:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " AUD = " << n * 16.47 << " LE";
                cout << endl;
                break;
            case 8:
                cout << "\t\t\tWhat amount do you want ? ";
                cin >> n;
                cout << "\t\t\t" << n << " BHD = " << n * 63.66 << " LE";
                cout << endl;
                break;
            case 9:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " CAD = " << n * 18.09 << " LE";
                cout << endl;
                break;
            case 10:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " CNY = " << n * 0.01 << " LE";
                cout << endl;
                break;
            case 11:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " DKK = " << n * 3.51 << " LE";
                cout << endl;
                break;
            case 12:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " JOD = " << n * 34.23 << " LE";
                cout << endl;
                break;
            case 13:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " JPY = " << n * 18.54 << " LE";
                cout << endl;
                break;
            case 14:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " KWD = " << n * 77.76 << " LE";
                cout << endl;
                break;
            case 15:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " NOK = " << n * 2.49 << " LE";
                cout << endl;
                break;
            case 16:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " OMR = " << n * 62.53 << " LE";
                cout << endl;
                break;
            case 17:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " QAR = " << n * 6.65 << " LE";
                cout << endl;
                break;
            case 18:
                cout << "\t\t\tWhat amount do you want? ";
                cin >> n;
                cout << "\t\t\t" << n << " SEK = " << n * 2.33 << " LE";
                cout << endl;
                break;
            default:
                cout << "\t\t\tINVALID CHOICE!\n\t\t\tPLEASE TRY AGAIN!\n" << endl;
                break;

            }
        }
    end:
        cout << endl;

    }
    void ManagingCards()
    {
        while (1)
        {

            cout << "\t\t\tCreate a new card --> enter (a)" << endl;
            cout << "\t\t\tCheck an existng card --> enter (b)" << endl;
            cout << "\t\t\tStop an existing card --> enter (c)" << endl;
            cout << "\t\t\tExit --> enter (d)\n\t\t\t\n\t\t\tYour Choice: ";
            cin >> m;


            if (m == 'a')
            {
                cout << "\t\t\tYour request has been sent to the bank, you can get your card within 2 weeks.\n" << endl;
            }
            else if (m == 'b')
            {
                cout << "\t\t\tEnter your card number: " ;
                cin >> cardno;
                cout << "\t\t\tYour balance is " << balance << endl << endl;

            }
            else if (m == 'c')
            {
                cout << "\t\t\tEnter your card number: " ;
                cin >> cardno;
                cout << "\t\t\tYour card has been successfully stopped!" << endl << endl;
            }
            else if (m == 'd')
            {
                goto end;
            }
            else if (m != 'a' && m != 'b' && m != 'c' && m != 'd')
            {
                cout << "\t\t\tINVALID CHOICE!\t\t\t\nPLEASE TRY AGAIN\n\n";
            }
        }

    end:
        cout << endl;
    }
    void Requests()
    {
        cout << "\t\t\tPlease enter your request\n\t\t\t";
        cin >> requests;
        getline(cin, requests);
        cout << "\t\t\tThe bank has received your request , kindly check your email within 5 days.\n\t\t\tThank You!\n";
    }

    void InsertDonation()
    {
        while (1)
        {
            cout << "\t\t\tPick a company from the list below" << endl;
            cout << "\t\t\tPRESS 0 TO EXIT" << endl;
            cout << "\t\t\t1.RESALA" << endl;
            cout << "\t\t\t2.57357" << endl;
            cout << "\t\t\t3.Egyptian Food Bank" << endl;
            cout << "\t\t\t4.M Yacoub Foundation" << endl;
            cout << " \t\t\t5.Cure Bank" << endl;
            cout << "\t\t\t" << endl;
            cout << "\t\t\tYour choice = ";
            cin >> b;
            switch (b)
            {
            case 0:
                goto end;
                break;
            case 1:
                cout << "\t\t\tHow much do you want to donate? " ;
                cin >> donate;
                balance = balance - donate;
                cout << "\t\t\tThanks for your donation!" << endl;
                cout << "\t\t\tYour balance = " << balance;
                cout << endl << endl;
                break;
            case 2:
                cout << "\t\t\tHow much do you want to donate? " ;
                cin >> donate;
                balance = balance - donate;
                cout << "\t\t\tThanks for your donation!" << endl;
                cout << "\t\t\tYour balance = " << balance;
                cout << endl << endl;
                break;

            case 3:
                cout << "\t\t\tHow much do you want to donate? " ;
                cin >> donate;
                balance = balance - donate;
                cout << "\t\t\tThanks for your donation!" << endl;
                cout << "\t\t\tYour balance = " << balance;
                cout << endl << endl;
                break;
            case 4:
                cout << "\t\t\tHow much do you want to donate? " ;
                cin >> donate;
                balance = balance - donate;
                cout << "\t\t\tThanks for your donation!" << endl;
                cout << "\t\t\tYour balance = " << balance;
                cout << endl << endl;
                break;
            case 5:
                cout << "\t\t\tHow much do you want to donate? " ;
                cin >> donate;
                balance = balance - donate;
                cout << "\t\t\tThanks for your donation!" << endl;
                cout << "\t\t\tYour balance = " << balance;
                cout << endl << endl;
                break;
            default:
                cout << "\t\t\tINVALID CHOICE!\t\t\t\nPLEASE TRY AGAIN!\n\n" ;
                break;
            }
        }

    end:
        cout << endl;

    }


};
class CheckingAccount :public account
{
private:
    int c_balance = 50000 + (rand() % 500000);
    int c_deposit = 0;
    int transferred = 0;
    int accno = 0;
public:
    void C_Deposit()
    {
        cout << "\t\t\tEnter amount to deposit: ";
        cin >> c_deposit;
        c_balance = c_balance + c_deposit;
        cout << "\t\t\tYour Balance = " << c_balance << endl;
        cout << "\t\t\tThe operation has been done successfully!" << endl << endl;
    }
    void TransferToAnotherAcc()
    {
        cout << "\t\t\tEnter the account number you want to transfer to: ";
        cin >> accno;
        cout << "\t\t\tEnter the amount you want to transfer: ";
        cin >> transferred;
        if (c_balance > transferred)
        {
            c_balance = c_balance - transferred;
            cout << "\t\t\tBalance = " << c_balance << endl;
            cout << "\t\t\tThe operation has been done successfully!" << endl << endl;
        }
        else if (c_balance < transferred)
        {
            cout << "\t\t\tYOUR REQUEST HAS BEEN REJECTED!\n\t\t\tYOU DON'T HAVE ENOUGH MONEY IN YOUR ACCOUNT\n\n";
        }

    }

};
class SavingAccount : public account
{
private:
    int s_balance = 50000 + (rand() % 500000);
    int s_deposit = 0;
    int interest = 0;
public:
    void S_Deposit()
    {
        cout << "\t\t\tEnter amount to deposit: ";
        cin >> s_deposit;
        s_balance = s_balance + s_deposit;
        interest = (s_balance * 5) / 100;
        s_balance = s_balance + interest;
        cout << "\t\t\tYour Balance = " << s_balance << endl;
        cout << "\t\t\tThe operation has been done successfully!" << endl << endl;
    }
};
int main()
{
    int choice;
    string acctype;
    account a;
    CheckingAccount c;
    SavingAccount s;

    a.StoringData();
    if (bol == 0)
    {
        cout << "\n ";
    }
    else
    {
        cout << "\n\t\t\tSuccessfully Logged in!\n\n";
        while (1)
        {
            cout << "\t\t\t\t---------HOME PAGE---------\n\n";
            cout << "\t\t\tPlease Pick a Choice From The List Below\n" << endl;
            cout << "\t\t\t1.EXCHANGE RATES" << endl;
            cout << "\t\t\t2.MANAGE YOUR CARDS" << endl;
            cout << "\t\t\t3.DEPOSIT" << endl;
            cout << "\t\t\t4.TRANSFER TO ANOTHER ACCOUNT" << endl;
            cout << "\t\t\t5.MAKE A REQUEST" << endl;
            cout << "\t\t\t6.DONATIONS" << endl;
            cout << "\t\t\t7.EXIT" << endl << endl;
            cout << "\t\t\tYour Choice: ";
            cin >> choice;
            cout << endl << endl;
            switch (choice)
            {
            case 1:
                a.ExchangeRates();
                cout << endl;
                break;

            case 2:
                a.ManagingCards();
                cout << endl;
                break;
            case 3:
                cout << "\t\t\tWhat is your account type? (saving/checking)\n\t\t\t";
                cin >> acctype;
                if (acctype == "saving")
                {
                    s.S_Deposit();
                }
                else if (acctype == "checking")
                {
                    c.C_Deposit();
                }
                break;
            case 4:
                    c.TransferToAnotherAcc();
                cout << endl;
                break;
            case 5:
                  a.Requests();
                  cout << endl;
                break;
            case 6:
                 a.InsertDonation();
                 cout << endl;
                break;
            case 7:
                cout << "\t\t\tTHANK YOU FOR BANKING WITH US!\n";
                goto end;
                break;
            default:
                cout << "\t\t\tINVALID CHOICE!\n\t\t\tPLEASE TRY AGAIN!" << endl;
                cout << endl;
                break;
            }

        }
    }
end:
    cout << endl;

    return 0;
}