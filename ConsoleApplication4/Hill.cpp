#include <iostream>
using namespace std;

int main()
 {
    int number = 10; 
    int *pnumber = &number; 

    int &rnumberRef = number; 

    cout << " variable: " << number << endl;
    cout << " pnumber: " << *pnumber << endl;
    cout << " rnumberRef: " << rnumberRef << endl;

    *pnumber = 29;

    cout << "variable: " << number << endl;
    cout << " pnumber: " << *pnumber << endl;
    cout << " rnumberRef: " << rnumberRef << endl;

 
    rnumberRef = 10;

    cout << " variable: " << number << endl;
    cout << " pnumber: " << *pnumber << endl;
    cout << " rnumberRef: " << rnumberRef << endl;

    return 0;

}


#include <iostream>
using namespace std;
int main() 
{
    const int *constNum = 0; 
    int varOne = 6; 
    constNum = &varOne; 

    cout << " varOne: " << varOne << endl;
    *constNum = 7; // constNum нельзя назначить уже на обьявленный объект

    int varTwo = 10; 
    constNum = &varTwo; 
    cout << " varTwo: " << *constNum << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
 {

 short *pwanderingPointer = new short;
*pwanderingPointer = 10;
cout <<" PwanderingPoint " << *pwanderingPointer <<endl;
delete pwanderingPointer;

long *plong = new long;
*plong = 90000;
cout << "plong " << *plong << endl;

*pwanderingPointer = 20;

cout <<" PwanderingPoint " << *pwanderingPointer <<endl;
cout <<" plong " << *plong <<endl;
delete plong;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    short *pwanderingPointer = new short;
    *pwanderingPointer = 10;
    cout << "PwanderingPoint " << *pwanderingPointer << endl;
    delete pwanderingPointer;
    pwanderingPointer = nullptr; 

    long *plong = new long;
    *plong = 90000;
    cout << "plong " << *plong << endl;

    if (pwanderingPointer != nullptr)
     {
        *pwanderingPointer = 20; 
        cout << "PwanderingPoint " << *pwanderingPointer << endl;
    } 
    else
     {
        cout << "PwanderingPointer nullptr" << endl;
     }

    cout << "plong " << *plong << endl;
    delete plong;

    return 0;
}

#include <iostream>

int main()
 {
    while (true)
     {
        int *ptr = new int; 
       
       delete ptr;
     }

    return 0;
}





#include <iostream>

using namespace std;

class Cat
{
public:
    Cat(int age)  {itsAge = age;}
    ~Cat() {}
    int GetAge() const { return itsAge; }

private:
    int itsAge;
};

Cat &MakeCat(int age);

int main()
{
    int age = 7;
    Cat &Boots = MakeCat(age);// объявляем ссылку Boots которая  указывает на объект тип Cat
    cout << "Boots is: " << Boots.GetAge() << " years old" << endl;
    delete &Boots;// освобождение динамической памяти в main для того чтоб не было утечки памяти!
    return 0;
}

Cat &MakeCat(int age)
{
    Cat *pCat = new Cat(age);
    return *pCat;
}
