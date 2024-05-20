
1)
• int* pOne;//pOne указатель на значение типа int

• int vTwo;// vTwo является переменной int целое число

• int* pThree = &vTwo;// pThree указатель с переменной int и принемает значение адресса переменной &vTwo


2)
unsigned short yourAge;
unsigned short *pYourAge = &yourAge;

3)
*pYourAge = 50;



4)
#include <iostream>

using namespace std;

int main() {
    int yourAge;     
    int *pYourAge = &yourAge; 

   
    *pYourAge = 30;

    cout << "yourAge: " << yourAge << endl;
    cout << " pYouAge: " << *pYourAge << endl;

    return 0;
}

5)
#include <iostream>

using namespace std;

int main()
{
    int *pInt;// не иницилизированая переменная, можно исправить оператором new
    *pInt = 9;
    cout << " The value at pInt: " << *pInt;
    //можно использовать оператор delete для освобождения выделеной памяти переменной pInt
    return 0;
}

6)
#include <iostream>

using namespace std;

int main()
{
    int SomeVariable = 5;
    cout << "SomeVariable: " << SomeVariable << "\n";
    int *pVar = &SomeVariable;
    *pVar = 9;// отсуствует указатель, для изменения значения с 5 на 9
    cout << "SomeVariable: " << *pVar << "\n";
    return 0;
}
