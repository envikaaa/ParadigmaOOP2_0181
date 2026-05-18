#include <iostream>
using namespace std;

class AbstraksiKlas {
private: string x, y;

public:
    void setXY(string a, string b) {
        x = a;
        x = b;
    }

    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << x << endl;
    }
};

int main(){
    AbstraksiKlas Ak;
    ak.setXY("Yogyakarta", "Kampus");
    ak.display();

return 0;
}