// Bismillahir Rahmanir Rahim
// AUTHOR: TEAM OBJECT
// SECTION 2BM
// members
// 1.Shahriar Mahmud Arman ID: C221055
// 2.Istihad ID: C221059
// 3.Faisal ID: C221072
#include<bits/stdc++.h>
using namespace std;

int min_balance=500;
int cntcur=1;
int cntsav=1;

class account  //main  class
{
public:
    string name,account_num,type_of_account;
    double balance,penalty,saving_balance;

    void set_data(string name,string account_num,string type_of_account,double balance)
    {
        this->name=name;
        this->account_num=account_num;
        this->type_of_account=type_of_account;
        this->balance=balance;

    }

};
class sav_account:public account  //saving account derived class
{
public:

    void set_sav_data(string name,string account_num,double saving_balance)  //for settig data of saving account
    {
        this->name=name;
        this->account_num=account_num;
        this->saving_balance=saving_balance;
    }
    void withdraw()  // function for withdrawing
    {
        system("clear");
        saving_balance=0;
        cout<<"\t\tWithdraw Successful!"<<endl<<endl;

    }
    void interest()  // function for interest
    {
        system("clear");
        double intr=saving_balance*0.20;
        saving_balance+=intr;
        cout<<"\t\tYour current interest is "<<intr<<"."<<endl<<endl;
    }
    void get_balance()  // fucntion for balance
    {
        system("clear");
        cout<<"\t\tYour Balance is "<<saving_balance<<"."<<endl<<endl;
    }
    void add_money(double x) // function for adding money
    {
        system("clear");
        saving_balance+=x;
        cout<<"\t\tYour account has been update successfully "<<endl<<endl;
    }

};

sav_account obsav[100]; // object of saving account


class cur_account:public account  // current account derived class
{
public:

    double penalty=0;

    void set_cur_data(string name,string account_num,double balance)  // function for setting currnet account data
    {
        this->name=name;
        this->account_num=account_num;
        this->balance=balance;
    }
    void show_penalty()   // function for showing penalty
    {
        system("clear");
        if(balance<min_balance)
        {
            penalty+=100;
        }
        else penalty=0;
        cout<<"\t\tYour penalty is "<<penalty<<"."<<endl<<endl;

    }
    void chk_balance()  // fucntion fo cheeking balance
    {
        system("clear");
        cout<<"\t\tYour balance is " <<balance<<" ."<<endl<<endl;
    }
    void add_money(double m)  // function for adding money
    {
        system("clear");
        balance=m+balance;
        cout<<"\t\tYour balance has been updated succesfully!"<<endl<<endl;
    }

    void cash_out(double money)   // fucntion for cash out
    {
        system("clear");
        if(balance>=money+500)
        {
            balance=balance-money;
            cout<<"\t\tTransaction Successful! "<<endl;
        }
        else cout<<"\t\tSorry! Insufficient Balance."<<endl;
    }


};

cur_account obcur[100];  // object of currnet account class

void create_cur_account()  // for creating currnet account
{
    string name,account_number;
    double balance;

    cout<<" Enter Your Name : ";
    getline(cin>>ws,name);
    cout<<" Enter Your Prefered account number : ";
    getline(cin>>ws,account_number);
    cout<<" Enter how much money you want to add. you have to add atleast 500 TK : ";
    cin>>balance;
    obcur[cntcur].set_cur_data(name,account_number,balance);
    system("clear");
    cout<<"\t\t Congratulations! Your account is created succesfully!"<<endl<<endl<<endl;
    cntcur++;

}
void create_sav_account() // for creating saving account
{
    string name,account_number;
    double balance;

    cout<<" Enter Your Name : ";
    getline(cin>>ws,name);
    cout<<" Enter Your Prefered account number : ";
    getline(cin>>ws,account_number);
    cout<<" Enter how much money you want to add. you have to add atleast 500 TK : ";
    cin>>balance;
    obsav[cntsav].set_sav_data(name,account_number,balance);
    cout<<"\t\t Congratulations! Your account is created succesfully!"<<endl<<endl<<endl;
    cntsav++;

}
void create_both_account() // for crating both saving and current account
{
    string name,account_number;
    double balance,sav_bal;

    cout<<" Enter Your Name : ";
    getline(cin>>ws,name);
    cout<<" Enter Your Prefered account number : ";
    getline(cin>>ws,account_number);
    cout<<" How much money you want to add in your Normal account? [Minimum 500 TK is required] : ";
    cin>>balance;
    cout<<" How much money you would like to add in you saving account? [Minimum 500 TK is required] : ";
    cin>>sav_bal;

    obcur[cntcur].set_cur_data(name,account_number,balance);
    obsav[cntsav].set_sav_data(name,account_number,sav_bal);

    system("clear");
    cout<<"\t\t Congratulations! Your account is created succesfully!"<<endl<<endl<<endl;
    cntsav++;
    cntcur++;

}
void search_cur_account() // for searching info of current account
{
    system("clear");
    string name,number;
    bool found=false;

    cout<<"Enter Your name : ";
    getline(cin>>ws,name);
    cout<<"Enter your account number : ";
    getline(cin>>ws,number);
    system("clear");
    int i=1;
    for(i=1; i<=cntcur; i++)
    {
        if(obcur[i].name==name and obcur[i].account_num==number)
        {
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<"Account found"<<endl<<endl<<endl;
        while(1)
        {

            cout<<"Press 1 for cashout"<<endl;
            cout<<"Press 2 for cheecking Balance"<<endl;
            cout<<"Press 3 to see penalty"<<endl;
            cout<<"Press 4 to add money "<<endl;
            cout<<"Press any other key to exit"<<endl;
            char n;
            cin>>n;
            if(n=='1')
            {
                cout<<"Enter how much money you want to cashout  : ";
                double x;
                cin>>x;
                obcur[i].cash_out(x);
            }
            else if(n=='2')
            {
                obcur[i].chk_balance();
            }
            else if(n=='3')
            {
                obcur[i].show_penalty();
            }
            else if(n=='4')
            {
                cout<<"Enter how much money you want to add"<<endl;
                double x;
                cin>>x;
                obcur[i].add_money(x);
            }
            else return;

        }
    }
    else cout<<"_______ACCOUNT NOT FOUND_______" <<endl<<endl<<endl;
}
void search_sav_account()  // for searching info of saving account
{
    system("clear");
    string name,number;
    cout<<"Enter your name : ";
    getline(cin>>ws,name);
    cout<<"Enter your account account number : ";
    getline(cin>>ws,number);
    int i=1;
    bool found=false;
    for(i=1; i<=cntsav; i++)
    {
        if(obsav[i].name==name and obsav[i].account_num==number)
        {
            found =true;
            break;
        }
    }
    if(found)
    {
        system("clear");
        cout<<"Account found"<<endl<<endl<<endl;
        while(1)
        {
            cout<<"Enter 1 to cheek balance "<<endl;
            cout<<"Enter 2 to Withdraw"<<endl;
            cout<<"Enter 3 to see intest"<<endl;
            cout<<"Ente 4 to add money"<<endl;
            cout<<"Press any other key to exit"<<endl;
            char x;
            cin>>x;
            if(x=='1')
            {
                obsav[i].get_balance();
            }
            else if(x=='2')
            {
                obsav[i].withdraw();
            }
            else if(x=='3')
            {
                obsav[i].interest();
            }
            else if(x=='4')
            {
                cout<<"Enter how much money you want to add "<<endl;
                double mn;
                cin>>mn;
                obsav[i].add_money(mn);
            }
            else return;
        }
    }
    else cout<<"_______ACCOUNT NOT FOUND_______"<<endl<<endl<<endl;

}
int main()
{
    while(1)
    {
        cout<<"\t\t\t|-------------------------------------------------|"<<endl;
        cout<<"\t\t\t|          WELCOME TO OUR BANKING SYSTEM          |"<<endl;
        cout<<"\t\t\t|-------------------------------------------------|"<<endl<<endl<<endl;;
        cout<<"\t\t\t  [1] Create a account."<<endl;
        cout<<"\t\t\t  [2] Login."<<endl;
        cout<<"\t\t\t  [0] Quit."<<endl<<endl<<endl;
        cout<<"Enter your choice : ";
        char x;
        cin>>x;
        if(x=='1')
        {
            system("clear");
            fflush(stdin);
            getchar();
            system("color 0A");

            cout<<endl;
            cout<<"\t\tWhich kind of account you would like to create?"<<endl<<endl;
            cout<<"\t\t  [1] Normal Account"<<endl;
            cout<<"\t\t  [2] Savings Account"<<endl;
            cout<<"\t\t  [3] Both account"<<endl;

            int create;
            cin>>create;

            if(create==1)
            {
                create_cur_account();
            }
            else if(create==2)
            {
                create_sav_account();
            }
            else if(create==3)
            {
                create_both_account();
            }
            else cout<<"Wrong Choice!"<<endl;
        }
        else  if(x=='2')
        {
            system("clear");
            fflush(stdin);
            getchar();
            system("color 0C");

            cout<<endl;
            cout<<"\t\tWhich Account you would like to access?"<<endl<<endl;
            cout<<"\t\t  Press 1 for Normal Account"<<endl;
            cout<<"\t\t  Press 2 for Savings Account"<<endl;
            int act;
            cin>>act;
            if(act==1)
            {
                search_cur_account();
            }
            else if(act==2)
            {
                search_sav_account();
            }
            else cout<<"Wrong Choice!"<<endl;

        }
        else  if(x=='0')
        {
            system("clear");
            fflush(stdin);
            getchar();
            system("color 20");


            cout<<endl;
            cout<<"\t\t\t A millions of thanks giving to you. Be with us."<<endl;
            cout<<"\t\t\t\t\t\t\t    |-TEAM OBJECT-|"<<endl<<endl<<endl;
            return 0;
        }
        else cout<<"Wrong Choice!"<<endl<<endl<<endl<<endl;

    }


}
