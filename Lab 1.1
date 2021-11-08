#include <iostream>
#include <iomanip>
#include <list>
#include <vector> /*реализация динамического массива*/
using namespace std;

class Stock {
    string companyName;/*Наименовании компании*/
    int stockNum;/*количестве акций в пакете*/
    vector<float> stockCostArray;/*массив цена каждой акции*/
    float stockCost;/*цена каждой акции*/
    double allStockCost;/*общая стоимость всех акций*/

public:
    Stock() {
        companyName = "Unkown";
        stockNum = 0;
    }
    Stock(string s, int i) {
        companyName = s;
        stockNum = i;
        cout << "Enter the value of the shares: " << endl;
        for (int i = 0; i < stockNum; i++) {
            int sCost;/*Share price*/
            cout << "Action number" << i+1 << " : ";
            cin >> sCost;
            stockCostArray.push_back(sCost);
        }
    }
    int Buy(int sNum) {
        if (sNum > 0) {
            float sCost;
            for (int i = 0; i < sNum; i++) {
                cout << "Enter the value of the shares:" << i+1 << " : ";
                cin >> sCost;
                stockCostArray.push_back(sCost);
                stockNum++;
            }
        }
        else {
            return 0;
        }
    }

    int Sell(int sNum) {
        if (sNum > 0) {
            int ndx;/*Номер проданной акции в массиве*/
            for (int i = 0; i < sNum; i++) {
                cout << "Number of the sold share in the array: ";
                cin >> ndx;
                ndx--;
                for (int i = ndx; i < stockNum-1; i++) {
                    stockCostArray[i] = stockCostArray[i + 1];
                }
                stockCostArray.pop_back();
                stockNum--;
            }
        }
        else {
            return 0;
        }
    }

    void Update(int ndx, float cost) {
        stockCostArray[ndx] = cost;
        SetTotal();
    }

    void Show() {
        SetTotal();
        cout << setw(24) << "Company name: " << setw(20) << companyName << endl;
        cout << setw(24) << "Total number of shares: " << setw(20) << stockNum << endl;
        cout << setw(24) << "Total value of all shares: " << setw(20) << allStockCost << endl;
    }
    ~Stock() {};
private:
    void SetTotal() {
        allStockCost = 0;
        for (int i = 0; i < stockNum; i++) {
            allStockCost += stockCostArray[i];
        }
    }
};


void main() {
    vector<Stock> stocksArray;
    Stock a("mts",3);
    Stock b("Gasprom",3);
    Stock c("Tele2",3);
    stocksArray.push_back(a);
    stocksArray.push_back(b);
    stocksArray.push_back(c);
    for (int i = 0; i < stocksArray.size(); i++) {
        stocksArray[i].Show();
    }
    a.Buy(2);
    a.Show();
}
