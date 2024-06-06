#include <iostream>
using namespace std;
int main()
{

    const int sizeArray = 10;
    int array[sizeArray];
    for (int a = 0; a < sizeArray; a++)
    {

        array[a] = 0;
    }


    for (int a = 0; a < sizeArray; a++)
    {
        cout << array[a] << " ";
    }
    {
        cout << endl;
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
int main() 
{
  
    const int size = 3;
    char field [size][size];

    for (int i = 0; i < size; i++) 
    {
        for (int b = 0; b < size; b++) {}
        
    }

    for (int i = 0; i < size; i++)
    {
        for (int b = 0; b < size; b++)
        {
            cout << field [i][b];
            if (b < size -1) cout << "   |";
        }
        cout << endl;
        if (i < size - 1) cout << "---|---|---" << endl;
    }

    return 0;
}
/////////////////////////////////////////////////////////////////////////



unsigned short SomeArray[5][4];
for (int i = 0; i < 4; i++)//перепутанные индексы массива в цикле for 4-5, должно 5-4!
    for (int j = 0; j < 5; j++)
        SomeArray[i][j] = i + j;
////////////////////////////////////////////////////////////////////////

unsigned short SomeArray[5][4];
for (int i = 0; i <= 5; i++)// выход за границы массива должно i < 5, размер массива должен соответствовать количеством значений в циклах
for (int j = 0; j <= 4; j++)// выход за границы массива должно j < 4
SomeArray[i][j] = 0;


