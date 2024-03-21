#include <iostream>
using namespace std;

void vpl(int x, int &y, int *z)
{
    x++;
    y++;
    (*z)++;
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

    p = vetor; //16

    cout << p << endl; //17

    cout << *p << endl; //18

    p = vetor; //19

    if (p == vetor) //20
    {
        cout << "S" << endl;
    }else
    {
        cout << "N" << endl;
    }

    cout << p << endl; //21
    
    cout << *p << endl; //22

    for(int i = 0; i < tamanhoDoVetor; i++) //23
    {
        *(p+i) *= 10;
    }

    for (int i = 0; i < tamanhoDoVetor; i++) //24
    {
        if(i == tamanhoDoVetor - 1){
            cout << vetor[i];
        }else{
        cout << vetor[i] << " ";
        }
    }

    cout << endl;

    for (int i = 0; i < tamanhoDoVetor; i++) //25
    {
        if(i == tamanhoDoVetor-1){
            cout << *(vetor + i);
        }else{
        cout << *(vetor + i) << " ";
        }
    }

    cout << endl;

    for (int i = 0; i < tamanhoDoVetor; i++) //26
    {
        if(i == tamanhoDoVetor-1){
            cout << *(p + i);
        }else{
        cout << *(p + i) << " ";
        }
    }
    

    cout << endl;

    p = &vetor[tamanhoDoVetor-1]; //27

    cout << p << endl; //28

    cout << *p << endl; //29

    int **pToP; //30
    pToP = &p;

    cout << pToP << endl; //31

    cout << &pToP << endl; //32

    cout << *pToP << endl; //33
    
    cout << **pToP << endl; //34

    int a, b, c; //35
    cin >> a;
    cin >> b;
    cin >> c;

    vpl(a, b, &c); //36

    cout << a << " " <<  b << " " << c << endl; //37

    return 0;
}