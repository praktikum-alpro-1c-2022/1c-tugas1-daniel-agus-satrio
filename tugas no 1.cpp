     #include <iostream>
     #include <math.h>

    using namespace std;
    main (){

    cout << "\t\t\t\tMENGHITUNG SISI MIRING SEGITA SIKU-SIKU \n";
    cout << "===================================================================================================\n";

    double SisiMiring;

    //Data Yang diketahui
    cout << "Berapakah Panjang Sisi Miring Segita Siku-Siku dengan Panjang sisi Alas 8 cm dan sisi Tinggi 10 cm \n";
    double A = 8;
    double T = 10;

    cout << " \n";

    //Rumus dan Hasil
    cout << "Akar ((A x A) + (T x T))\n";
    cout << "Akar ((8 x 8) + (10 x 10))\n\n";

    SisiMiring = sqrt ((A*A)+(T*T));

    cout << "Panjang Sisi Miring = " << SisiMiring << " cm" ;

    return 0;


}
