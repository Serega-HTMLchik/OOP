#include <iostream>
#include <locale>
using namespace std;


template<class T>
void swap(T a, T b) {
    cout << "a = " << a << "    b = " << b << endl;
    T temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << "    b = " << b << endl;
}

int main()
{
    cout<<"Numbers"<<endl<<endl;
    swap <int> (12, 1234);
    cout<<"Simbol"<<endl<<endl;
    swap <char> ('a','b');
    cout<<"String"<<endl<<endl;
    swap <string> ("qwer_123", "123_qwer");
}
