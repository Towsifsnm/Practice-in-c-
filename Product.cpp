#include<bits/stdc++.h>
using namespace std;
class Product{

public:
     int productId;
     string productName;
     double price;
     int quantityInstock;

     Product(int nproductId,string nproductName,double nprice,int nquantityInstock)

     {
          productId= nproductId;
     productName=nproductName;
      price=nprice;
     quantityInstock=nquantityInstock;
     }
     void display()
     {
         cout<<"ID:"<<productId<<endl;
         cout<<"Name:"<<productName<<endl;
         cout<<"Price:"<<"$"<<price<<endl;
         cout<<"Quantity in Stock:"<<quantityInstock<<endl;
     }
void update(int add)
{
    quantityInstock=quantityInstock+add;
}

};
int main()
{
    Product product1(101,"Laptop",1200.50,10);
    cout<<"Product  1  Information:"<<endl;
    product1.display();
    Product product2(102,"Headphone",50.75,50);
    cout<<"Product  2  Information:"<<endl;
    product2.display();

    cout<<"updating stock for product 1:+5 units"<<endl;
    cout<<"roduct1information after updated"<<endl;
    product1.update(5);
    product1.display();
}
/*Product  1  Information:
ID:101
Name:Laptop
Price:$1200.5
Quantity in Stock:10
Product  2  Information:
ID:102
Name:Headphone
Price:$50.75
Quantity in Stock:50
updating stock for product 1:+5 units
roduct1information after updated
ID:101
Name:Laptop
Price:$1200.5
Quantity in Stock:15
*/
