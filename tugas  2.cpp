#include <iostream>
using namespace std;

int main () {
    cout<<"dengan variabel sementara"<<endl;
    int a,b,temp;

    cout<< "masukan nilai A :"<<endl;
    cin>>a;
    cout<< "nilai A adalah :"<<a<<endl;
    cout<< " masukan nilai B : "<<endl;
    cin>>b;

  temp = a;
    a  = b;
    b  = temp;

    cout<<"nilai setelah di tukar"<<endl;
    cout<<"nilai A:"<<a<<endl;
    cout<<"nilai B:"<<b<<endl;

    cout<<endl;
    cout<<"tanpa variabel sementara"<<endl;

    int x,y;
    cout<<"masukan nilai X: "<<endl;
    cin>>x;
    cout<<"masukan nilai Y: "<<endl;
    cin>>y;

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"nilai setelah ditukar"<<endl;
    cout<<"nilai X : "<<x<<endl;
    cout<<"nilai Y : "<<y<<endl;


}
