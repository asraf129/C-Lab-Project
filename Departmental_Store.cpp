#include<iostream>
#include<math.h>
using namespace std;
class Customer;
class Item
{
    public:
    string Name;
    string Product_origin;
    string Catagory;
    int Price;

    Item(string name,string origin,int price,string catagory)
    {
        Name=name;
        Product_origin=origin;
        Catagory=catagory;
        Price=price;
    }
};
class Person
{
    string Name;
    string Gender;
    int National_id;

public:
    Person(){}
    Person(string name,string gender,int nid)
    {
        Name=name;
        Gender=gender;
        National_id=nid;
    }
    void show_person()
    {
        cout<<"Name          :"<<Name<<endl;
        cout<<"Gender        :"<<Gender<<endl;
        cout<<"National id   :"<<National_id<<endl;
    }
};
class Customer:public Person
{
    string Name;
    int item_bought=0;
    int bill=0;
public:
    Customer(){}
    Customer(string name,string gender,int nid):Person(name,gender,nid)
    {
        Name=name;
    }
    void Buy_item(Item item,int quantity)
    {
       item_bought++;
      if(item_bought>=3)
      {
        bill+=((item.Price*10)/100)*quantity;
        cout<<Name<<" has bought "<<item.Name<<" at price "<<((item.Price*10)/100)<<" with 10% discount"<<endl;
      }
      else
      {
          bill+=item.Price*quantity;
          cout<<Name<<" has bought "<<item.Name<<" at price "<<item.Price<<endl;
      }
    }


};
int main()
{
    Item i1("Sweet","y",400,"food");
    Item i2("Rice","y",1000,"food");
    Item i3("Oil","y",110,"food");
    Item i4("Noodles","y",120,"food");

    Customer c1("Mehedi","male",11708046);
    Customer c2("Jahid","male",11708049);
    Customer c3("Nahidul","male",11708048);

    c1.Buy_item(i1,5);
    c1.Buy_item(i2,3);
    c1.Buy_item(i3,7);
    c2.Buy_item(i1,4);
    c2.Buy_item(i2,2);
    c3.Buy_item(i4,2);


}
