1)#include <iostream>
using namespace std;


int Num(int base, int exponent) {
    
    if (exponent == 0) {
        return 1;
    }

    else {
        return base * Num(base, exponent - 1);
    }
}

int main() {
    int base, exponent;

    
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Exponent: ";
    cin >> exponent;

    
    cout << base << " Exponentiation " << exponent << " is: " << Num(base, exponent) << endl;

    return 0;
}

2)#include <iostream>
using namespace std;

class Employee {
private:
    unsigned int age;            
    unsigned int yearsOfService; 
    double salary;     

public:

    Employee() : age(0), yearsOfService(0), salary(0.0) {}

    unsigned int getAge() const { return age; }
    unsigned int getYearsOfService() const { return yearsOfService; }
    double getSalary() const { return salary; }
  
    void setAge(int newAge) { age = newAge; }
    void setYearsOfService(int newYears) { yearsOfService = newYears; }
    void setSalary(double newSalary) { salary = newSalary; }
};

int main() {
    
    Employee emp;

    
    emp.setAge(30);
    emp.setYearsOfService(10);
    emp.setSalary(32000.0);


    cout << "Employee Age: " << emp.getAge() << endl;
    cout << "Years of Service: " << emp.getYearsOfService() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;

    return 0;
}



3)#include <iostream>
using namespace std;
class Employee {
private:

    int age;            
    int yearsOfService; 
    double salary;      

public:
   
    Employee() : age(0), yearsOfService(0), salary(0.0) {}

    
    int getAge() const { return age; }
    int getYearsOfService() const { return yearsOfService; }
    double getSalary() const { return salary; }

    
    void setAge(int newAge) { age = newAge; }
    void setYearsOfService(int newYears) { yearsOfService = newYears; }
    void setSalary(double newSalary) { salary = newSalary; }
};

int main() {
    
    Employee emp;

    
    emp.setAge(30);
    emp.setYearsOfService(10);
    emp.setSalary(32000.0);

    
    cout << "Employee Age: " << emp.getAge() << endl;
    cout << "Years of Service: " << emp.getYearsOfService() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;

    return 0;
}


4)#include <iostream>
using namespace std;
class Employee {
private:
  unsigned int age;            
  unsigned  int yearsOfService; 
  double salary;     

public:
    
  unsigned  int getAge() const { return age; }
  unsigned   int getYearsOfService() const { return yearsOfService; }
    double getSalary() const { return salary; } 

    void setAge(int newAge) { age = newAge; }
    void setYearsOfService(int newYears) { yearsOfService = newYears; }
    void setSalary(double newSalary) { salary = newSalary; }
};

int main() {
    
    Employee emp;

    
    emp.setAge(30);
    emp.setYearsOfService(10);
    emp.setSalary(32000.0);


    cout << "Employee Age: " << emp.getAge() << endl;
    cout << "Years of Service: " << emp.getYearsOfService() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;

    return 0;
}



5)#include <iostream>
using namespace std;
class Employee {
private:
  unsigned int age;            
  unsigned  int yearsOfService; 
  double salary;     

public:
    
  unsigned  int getAge() const { return age; }
  unsigned   int getYearsOfService() const { return yearsOfService; }
    double getSalary() const { return salary; } 

    void setAge(int newAge) { age = newAge; }
    void setYearsOfService(int newYears) { yearsOfService = newYears; }
    void setSalary(double newSalary) { salary = newSalary; }
};

int main() {
    
    Employee emp;

    
    emp.setAge(30);
    emp.setYearsOfService(10);
    emp.setSalary(32000.0);


    cout << "Employee Age: " << emp.getAge() << endl;
    cout << "Years of Service: " << emp.getYearsOfService() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;

    return 0;
}

6)#include <iostream>
using namespace std;

class Employee {
private:
  unsigned  int age;            
  unsigned  int yearsOfService; 
    double salary;      

public:
    
    Employee(unsigned int initAge,unsigned int initYears, double initSalary)
        : age(initAge), yearsOfService(initYears), salary(initSalary) {}

   
   unsigned   int getAge() const { return age; }
   unsigned int getYearsOfService() const { return yearsOfService; }
    double getSalary() const { return salary; }

    
};

int main() {
    
    Employee male(30, 10, 15600.0);
    Employee famale(29, 9, 41300.0);

    cout << "Employee male: Age = " << male.getAge() << ", Years of Service = " << male.getYearsOfService();
    cout   << ", Salary = $" << male.getSalary() << endl;

    cout << "Employee famale: Age = " << famale.getAge() << ", Years of Service = " << famale.getYearsOfService();
    cout    << ", Salary = $" << famale.getSalary() << endl;

    return 0;
}



7)class Square
{
public:
    int Side;
};//не вістачало крапки з комою



8)class Cat
{
public:
    int GetAge() const;

private:
    int itsAge;
}; //відсутній конструктор


9)#include<iostream>
class TV
{
public:
    void SetStation(int Station);
    int GetStation() const;

private:
    int itsStation;
};
main()
{
    TV myTV;
    myTV.itsStation = 9;//неможна використовувати змінну якщо вона private(до нього нема доступу),не вірне присроєння значення 9
    TV.SetStation(10); //невірне викликання методу
    TV myOtherTV(2); //невірне викликання конструктора
}
