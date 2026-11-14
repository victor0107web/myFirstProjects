#include<iostream>
#include<random>

using namespace std;

    int main()
    {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int>dist(0,11);

        int daysUntilExpiration = dist(gen);

       // cout<<"your are on day  "<<daysUntilExpiration<<" of your subscription  ";
        switch(daysUntilExpiration)
        {
            case 0:
                cout<<"Your subscription has expired ";
                break;
            case 1:
                cout<<"Your subscription expires within  a day!\n" << "Renew now and save 20%! ";
                break;
            case 2:
            case 3:
            case 4:
            case 5:
                cout<<"Your subscription expires in "<< daysUntilExpiration <<" days \n"<<"Renew now and save 10%! ";
                break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
                cout<<"Your subscription your expire soon .Renew now ! ";
                break;
            case 11:
                cout<<"You have an active subscription ";
                break;

        }
        return 0;
    }