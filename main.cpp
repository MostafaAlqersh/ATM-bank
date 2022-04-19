#include <iostream>
using namespace std;

int main()
{
    int pass;
    int choice;
    int money=10000;
    int withdraw;
    int deposit;
    int correct = true;

    //password of user
    while(pass!=621209)
    {
        cout<<"inter password : ";
        cin >>pass;

    }

    //the user will choose from this
    do
    {
        cout <<"1 . check account :\n";
        cout <<"-------------------\n";
        cout <<"2 . withdraw cash :\n";
        cout <<"-------------------\n";
        cout <<"3 . deposit cash  :\n";
        cout <<"-------------------\n";
        cout <<"4 . exit          :\n";
        cout <<"-------------------\n";
        cout <<"-------------------\n";
        cout <<"inter your choice :";
        cin>>choice;
        cout <<"--------------------------------\n";


        switch(choice)
        {
        // the user use number 1 to check its money
        case 1:
            cout <<"your money is : $"<<money<<endl;
            cout <<"-------------------------\n";

            break;

        case 2:
            cout <<"enter the amount to withdraw :";
            cin>>withdraw;
            if(withdraw>money)
            {
                cout <<"not have enough money \n";

            }
            else
            {
               money=money-withdraw;
            cout <<"your money is : $"<<money<<endl;
            cout <<"--------------------------\n";

            break;
            }


        case 3:
            cout <<"enter the amount deposit :";
            cin>>deposit;
            money = money+deposit;
            cout <<"your money is : $"<<money<<endl;
            cout <<"|-----------------------------\n|";

            break;

        case 4:
            cout <<"| thanks for using ALQERSH BANK |"<<endl;
            cout <<"|-------------------------------|\n";

            correct=false;

            break;


        default:
            cout <<"enter correct number";
            break;






        }



    }while(correct!=false);








}
