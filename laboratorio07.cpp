#include <iostream>
#include <iomanip>

void formato1();
void formato2();

using namespace std;
int main (){
    formato1();
    cout<<"Notas del ciclo"<<endl;
    formato1();
    formato2();
    cout<<"Hola Mundo"<<endl;
    formato2();

    return 0;
}

void formato1(){
cout<<setfill('=')<<setw(40)<<" "<<endl;

}

void formato2(){
    cout<<setfill('-');
    cout<<setw(40)<<" "<<endl;
    
}