#include <iostream>;

using namespace std;
//1
class Test {
protected:
    int W;
    void Z() {
        cout << "Это закрытая функция класса Test" << endl;
    }
public:
    Test() {
        W = 1;
    }
    Test(int _W);
    ~Test() {};
/*функция fun, получает указатель на объект типа Test*/
    friend void Fun(Test _ob);
};

Test::Test(int _W) {
    W = _W;
}
/*2*/
void Fun(Test _ob) {
    cout << _ob.W << endl;
    _ob.Z();
}

void main() {
    Test ob;
    Fun(ob);
}
