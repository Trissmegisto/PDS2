#include <iostream>
using namespace std;

int vpl(int x, int &y, int *z)
{
    x++;
    y++;
    *z++;
}

int main()
{
    int um; //1
    cin >> um;

    int *p = nullptr; //2

    int tamanhoDoVetor; //3
    cin >> tamanhoDoVetor;
    int vetor[tamanhoDoVetor];
    for (int i = 0; i < tamanhoDoVetor; i++)
    {
        cin >> vetor[i];
        cout << vetor[i] << endl;
    }

    cout << &um << endl;; //4

    cout << um << endl; //5

    cout << &p << endl; //6

    cout << p << endl; //7

    cout << &vetor << endl; //8

    cout << &vetor[0] << endl; //9

    cout << vetor[0] << endl; //10

    p = &um; //11;

    cout << p << endl; //12

    cout << *p << endl; //13

    *p = 5; //14
    
    cout << um << endl; //15

    vetor[tamanhoDoVetor] = *p; //16

    cout << p << endl; //17

    cout << *p << endl; //18

    *p = vetor[0]; //19

    if (*p == vetor[tamanhoDoVetor]) //20
    {
        cout << "S" << endl;
    }else
    {
        cout << "N" << endl;
    }

    cout << p << endl; //21
    
    cout << *p << endl; //22

    return 0;
}