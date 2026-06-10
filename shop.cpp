#include<iostream>
using namespace std;
int main(){
    float price, quantity, total, discout, discounted_price, total_amount;
    cout<<"Enter the price of the item:";
    cin>>price;
    cout<<"Enter the quantity of the item:";
    cin>>quantity;
    total=price*quantity;
    discounted_price=total-total*(10/100);
    total_amount=discounted_price+discounted_price*(5/100);
    cout<<"The total amount to be paid is:"<<total_amount<<endl;
    return 0;
}