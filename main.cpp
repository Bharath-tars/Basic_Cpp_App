#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    std::cout << "Welcome to App" << std::endl;
    std::cout << "Signin or LogIn" << std::endl;
    string responce_first;
    getline(cin, responce_first);
    string details[2];
    if (responce_first=="signin" || responce_first=="login")
    {
        if (responce_first=="Login")
        {
            std::cout << "First you have to Signin to create an account" << std::endl;
        }
        std::cout << "Create username " << std::endl;
        getline(cin, details[0]);
        std::cout << "Create password" << std::endl;
        getline(cin, details[1]);
        //details[0] is username, details[1] is the password
    }
        bool responce = true;
        while(responce)
        {
             string entered_details[2];
             std::cout << "Enter username" << std::endl;
             getline(cin, entered_details[0]);
             std::cout << "Enter password" << std::endl;
             getline(cin, entered_details[1]);
             if(entered_details[0]==details[0] && entered_details[1]==details[1])
                {
                      std::cout << "You have signed in" << std::endl;
                      responce = false;
                }
              else
                {
                     std::cout << "Incorrent details please enter again" << std::endl;
                }
        }
    double balance  =5;
    std::cout << "Do you want add money ?" << std::endl;
    string add;
    cin>>add;
    if(add=="yes")
    {
        std::cout << "Enter the money you would like to add" << std::endl;
        double cashnow;
        cin>>cashnow;
        balance = balance + cashnow;
        std::cout << "Yout current balance is "<<balance <<"$"<< std::endl;
    }
    else
    {
        std::cout << "Alright" << std::endl;
    }
    std::cout << "Would you like have an bagel?" << std::endl;
    string responce_bagel;
    cin>>responce_bagel;
    if(responce_bagel=="yes")
    {
        string bagelitems[3]={"Egg Bagel","Sea Bagel","Python Bagel"};
        double bagelprices[3]={3.00, 6.99, 10.67};
        bool purchase=true;
        while(purchase)
        {
            std::cout << "1. "<<bagelitems[0]<<"--"<<bagelprices[0] << std::endl;
            std::cout << "2. "<<bagelitems[1]<<"--"<<bagelprices[1] << std::endl;
            std::cout << "3. "<<bagelitems[2]<<"--"<<bagelprices[2] << std::endl;
            std::cout << "Your Choise : " << std::endl;
            int choise;
            cin>>choise;    
            if(choise)
            {
                std::cout << "Do you wanna purchase "<<bagelitems[choise-1] << " of worth "<<bagelprices[choise-1]<<"$?"<< std::endl;
                string purchase_resp;
                cin>>purchase_resp;
                if(purchase_resp=="yes")
                {
                std::cout << "You have successfully purchased "<<bagelitems[choise-1] << " of worth "<<bagelprices[choise-1]<<"$"<< std::endl;
                balance = balance - bagelprices[choise-1];
                std::cout <<"Your current balance is "<<balance<<"$"<< std::endl;
                }
            }
            else
            {
                std::cout << "The following choise doesn't exist" << std::endl;
            }
            std::cout << "Would you like to continue shopping ?" << std::endl;
            string resp_shop;
            cin>>resp_shop;
            if(resp_shop=="yes")
            {
                purchase=true;
            }
            else
            {
                purchase=false;
            }
        }
    }
    std::cout << "Thanks for visiting our app" << std::endl;
}
