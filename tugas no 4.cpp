    #include <iostream>
    #include <math.h>

    using namespace std;

    int main (){

    double Y, b = 25 ,X = 15, c = 20;

    cout << "Program untuk Menyelesaikan rumus Y = bx2 + 0,5x - c\n";
    cout << "====================================================\n";

    //Data yang diketahui
    cout << "Diketahui :b = "<< b <<endl;
    cout << "           x = "<< X <<endl;
    cout << "           c = "<< c <<endl;

    //Rumus dan Hasil
    Y = (b*(X*X))+0.5*(X)-c;

    cout << "Y = bx2 + 0,5x - c\n";
    cout << "Y = "<< "{"<< b << "x" << "("<< X << "x" << X << ")" << "} " << "+" << " (" << "0.5" << "x" << X << ")" << " - " << c << endl;
    cout << "Jadi Y = "<< Y;

    return 0;

}
