1)Яким буде значення змінної x після завершення циклу for (int x = 0; x < 100; x++) ? -100, тому що цикл буде виконаний 100 разів, починаючи з 0 і закінчуючи 99 а змінна х збільшує на один


  2)for (int a = 0; a < row; ++a) {
        for (int b = 0; b < col; ++b) {
           volume [a][b] = 0;
        }
    }

3)#include <iostream>
using namespase std;
int main() {
    for (int a = 100; a <= 200; a += 2)
    {
        cout << a << " " << endl;
    }
    

    return 0;
}

4) #include <iostream>
using namespace std;
int main() 


    {

    int a = 100;
    while (a <= 200) {
        cout << a << " ";
        a += 2;
    }
   
    return 0;
}

5) #include <iostream>
using namespace std;
int main() 
{
    int a = 100;
    do
    {
        cout << a << " ";
        a += 2;
    }
    while (a <= 200);

    cout << endl;

    return 0;
}



6) int main() {
    int counter = 0;
    while (counter < 10)
    {
        cout << "counter: " << counter << std::endl;
       counter++;//не вистачало змінної та інкременту ++ яке збільшувало число
    }




7) for (int counter = 0; counter < 10: counter++);//не вістазає крапки з комою та тіла функції
cout << counter << " ";



8) int main() {
    int counter = 100;
    while (counter < 10) // програма не виконається бо counter приймаэ значення 100,щоб програма вивела значення від 100 до 10 треба замінити умову wi]hile (counter >=10)
    {
        cout << "counter now: " << counter;
        counter--;
    }
    return 0;
}
