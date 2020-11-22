
#include <iostream>
#include <stdexcept>
using namespace std;
class mass {
private:
    int* A;
    int length;

public:
    mass( int len) {
        length = len;;
        A = new int[length];
        for (int i = 0; i < length; i++) {
            A[i]= i+11;
        }
    }

    ~mass() {
        delete[] A;
    }

    int operator[](int i) {
        if (i < 0 || i > length) {
            throw out_of_range{ "operator[]" };
        }

        else {
            return A[i];
        }
    }
};

void number1(int n, int k) {
    try
    {
        if (n * k > 20) {
            throw ">20";
        }
        cout << n * k;
    }


    catch (const char* exception) {
        cout << "eror" << exception;
    }
}
int main() {
    setlocale(LC_ALL, "ru");

    number1(4,6);
    cout << endl;
    
    
    mass v(4);
    try {
        cout << v[2] << endl;
    }
    catch ( out_of_range& oor) {
        cerr << "Выход за границы массива: " << oor.what() << '\n';
            }
    return 0;

}