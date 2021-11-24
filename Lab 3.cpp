#include <iostream>

using namespace std;

class Goods{
    public:
    string Name;
    string Date;
    int Price;
    int Number;
    int ID;

public:
    Goods(string _Name, string _Date, int _Price, int _Number, int _ID){
        Name = _Name;
        Date = _Date;
        Price = _Price;
        Number = _Number;
        ID = _ID;
        cout << "Call constructor" << endl;
    }

    Goods(){
        Name = "Unkown";
        Date = "0000/00/00";
        Price = 0;
        Number = 0;
        ID = 0;
        cout << "Call default constructor" << endl;
    }

    ~Goods(){
        cout << "Call destructor" << endl;
    }

    void Cost(){
        int Cost = Number * Price;
        cout << "Cost= " << Cost << endl;
    }

    Goods(Goods &_ob) {
        Name = _ob.Name;
        Date = _ob.Date;
        Price = _ob.Price;
        Number = _ob.Number;
        ID = _ob.ID;
        cout << "Copy Counstructor" << endl;
    }

    Goods operator=(Goods& _ob);
};

Goods tovar(Goods &_s) {
    return _s;
}

Goods Goods::operator=(Goods &_ob) {
    Name = _ob.Name;
    Date = _ob.Date;
    Price = _ob.Price;
    Number = _ob.Number;
    ID = _ob.ID;
    cout << "Call Operator" << endl;
    return *this;
}

int main()
{
    cout<<"Log in function main()"<<endl;

    Goods obj1("butter", "21.11.2021", 100, 1, 2);
    Goods obj2(obj1);
    //obj1.Cost();
    //tovar(obj2);
    Goods obj3;
    //obj1.Price=1000000;
    obj1=obj3;
    obj3.Cost();

    cout<<"Exit in function main()"<<endl;
    return 0;
}
