#include <iostream>
using namespace std;

int main()
{
    float quantity;
    string discount;
    float price;
    float finalprice;

    cout << "What was the quantity of the products ";     //display "What was the quantity"
    cin >> quantity;                                        // enter quantity
    cout << "What was the price of all the products ";
    cin >> price;


    if (quantity >= 0 && quantity <= 20)                // if (quantity >= 0 AND quantity <= 20)  then
    {                                                   // 
        discount = "No discount";
        finalprice = price * 1;
    }

    else if (quantity > 20 && quantity <= 30) 
    {
        discount = "10%";
        finalprice = price * 0.9;
    }

    else if (quantity > 30 && quantity <= 40) 
    {
        discount = "15%";
        finalprice = price * 0.85;
    }    

    else if (quantity > 40 && quantity <= 50)
    {
        discount = "20%";
        finalprice = price * 0.8;
    }    
                //endif
    else 
    {
        discount = "30%";
        finalprice = price * 0.7;
    }
    
    cout << "Your discount is " << discount << endl;
    cout << "The amount due is " << finalprice << endl;
    
    return 0;
}
