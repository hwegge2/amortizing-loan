#include <iostream>
#include <cmath>        // needed for pow function
#include <iomanip>      // needed for set precision

using namespace std;

int main()      // this function calculates and displays loan and interest payments via user input.
{
double principal, periodic_payment, rate, percent_rate, interest_rate;
int time, interval_pay;

cout<<"Enter the principal amount in :$ ";
cin>>principal;
cout<<"Enter the annual intrest rate: ";
cin>>rate;
cout<<"Over how much time must the payment be made(in years): ";
cin>>time;
percent_rate= rate/100.0;       // Converts the rate given into a mathematical percentage.
interval_pay= time * 12;        // Converts the time interval into months.

// Calculates the payments using the given formula.
periodic_payment= principal / ((1 - (pow (1 / (1 + percent_rate), interval_pay))) / percent_rate);

 // Calculates the gross amount paid over the time span of the loan.
interest_rate = periodic_payment * interval_pay - principal;

// Displays the results to the user.
cout<<"A loan of $"<< setprecision(2)<< fixed <<principal<<" obtained at an annual interest rate of "<< setprecision(2) << fixed <<rate<<"%"<<endl;
cout<<"over a "<<time<<"-year period required a monthly installment of $"<< setprecision(2)<< fixed <<periodic_payment<<endl;
cout<<"to liquidate the loan. The intrest on this loan will be $"<<setprecision(2)<<fixed<<interest_rate<<"."<<endl;
return 0;
}
