#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Product{
    string		Name;
    string		Manufacturer;
    int			Price;
    int			Shelf_life;
    int			Number;

public:
    Product() {
        Name = "Unkown";
        Manufacturer = "Unkown";
        Price = 0;
        Shelf_life = 0;
        Number = 0;
    }
    Product( string	a, string b, int c, int d, int e) {
        Name = a;
        Manufacturer = b;
        Price = c;
        Shelf_life = d;
        Number = e;
    }
    ~Product() {}

    void SetName(string s) {
        Name = s;
    }
    void SetManufacturer(string s) {
        Manufacturer = s;
    }
    void SetPrice(int a) {
        Price = a;
    }
    void SetShelf_life(int a) {
        Shelf_life = a;
    }
    void SetNumber(int a) {
        Number = a;

    }

    string GetName(){
        return Name;
    }
    string GetManufacturer() {
        return Manufacturer;
    }
    int GetPrice() {
        return Price;
    }
    int GetShelf_life() {
        return Shelf_life;
    }
    int GetNumber() {
        return Number;
    }

    void Show(){
        cout << setw(26) << "Name: " << setw(20) << Name << endl;
        cout << setw(26) << "Manufacturer: " << setw(20) << Manufacturer << endl;
        cout << setw(26) << "Price: " << setw(20) << Price << endl;
        cout << setw(26) << "Shelf life: " << setw(20) << Shelf_life << endl;
        cout << setw(26) << "Number: " << setw(20) << Number << endl;
    }
};
int main()
{
    /*Product a( "Game", "China", 100, 2, 500);
    a.Show();*/

    vector<Product> ProductArray;

        Product a( "Game", "China", 100, 2, 500);
        Product b( "Ice", "ClearLine", 50, 1, 1000);
        Product c( "Carrots", "Belarus", 20, 1, 300);

        ProductArray.push_back(a);
        ProductArray.push_back(b);
        ProductArray.push_back(c);

        for (int i = 0; i < ProductArray.size(); i++) {
            if (ProductArray[i].GetName() == "Game") {
                ProductArray[i].Show();
                cout << endl;
            }
            else if (ProductArray[i].GetPrice() < 50) {
                ProductArray[i].Show();
                cout << endl;
            }
            else if (ProductArray[i].GetShelf_life() > 1) {
                ProductArray[i].Show();
                cout << endl;
            }
        }

}
