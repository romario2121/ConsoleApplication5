
1)unsigned long int Perimeter(unsigned short int sideA, unsigned short int sideB);
//////////////////////////////////////////////////////////////////////////////////////
2)unsigned long int Perimeter(unsigned short int length, unsigned short int width) {
    return 2 * (length + width);
}
//////////////////////////////////////////////////////////////////////////////////////
3)#include <iostream>
using namespace std;

void myFunc(unsigned short int x);
int main()
{
    unsigned short int x, y;
    y = myFunc(int);// не вірний тип int треба unsigned short int
    cout << "x: " << x << "y: " << y << "\n";
}
void myFunc(unsigned short int x)// функція myFunc з типом void не повертаэ  нічого
{
    return (4 * x);
}
////////////////////////////////////////////////////////////////////////////////////////////////
4)#include <iostream>
using namespace std;

int myFunc(unsigned short int x);

int main()
{
    unsigned short int x, y;
    y = myFunc(x);// змінна х не ініціалізована,return 0
    cout << "x: " << x << " y: " << y << "\n";
}

int myFunc(unsigned short int x);// не треба крапку з комою
{
    return (4 * x);
}

////////////////////////////////////////////////////////////////////////////////////////
5) unsigned short int division(unsigned short int profit, unsigned short int divisor) {
    return (divisor != 0) ? profit / divisor : -1;
}

 
 ///////////////////////////////////////////////////////////////////////////////////////

6)#include <iostream>
using namespace std;

unsigned short int division(unsigned short int profit, unsigned short int divisor) {
    return (divisor != 0) ? profit / divisor : -1;
}

int main() {
    unsigned short int a, b;
    cout << "Enter the divisible number: ";
    cin >> a;
    cout << "Enter the divisor: ";
    cin >> b;

    unsigned short int result = division(a, b);
    if (result == -1) {
        cout << "Error: The divisor is zero!\n";
    }
    else {
        cout << "Result of division: " << result << endl;
    }

    return 0;
}
