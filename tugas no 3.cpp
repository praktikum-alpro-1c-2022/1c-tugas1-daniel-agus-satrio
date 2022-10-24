    #include <iostream>

    using namespace std;
    main (){

    cout << "MENGHITUNG ARUS (I), TEGANGAN (V) DAN HAMBATAN (R) \n";
    cout << "===================================================\n";
    double i,v,r;

    //Arus (I)
    cout << "Menghitung Arus (I)\n";
    cout << "Masukan Nilai Tegangan (V) :";cin>>v;
    cout << "Masukan Nilai Hambatan (R) :";cin>>r;
    cout << "  \n";
    cout << "Diketahui :V = "<< v <<endl;
    cout << "           R = "<< r <<endl;
    i = v/r;
    cout << "I = V/R\n";
    cout << "I = " << v << ":" << r << endl;
    cout << "Nilai Arus Tersebut Adalah     = " << i << " A" << endl;
    cout << "===================================================\n";

    //Tegangan (V)
    cout << "Menghitung Tegangan (V)\n";
    cout << "Masukan Nilai Arus (I)    :";cin>>i;
    cout << "Masukan Nilai Hambatan (R):";cin>>r;
    cout << " \n";
    cout << "Diketahui :I = "<< i <<endl;
    cout << "           R = "<< r <<endl;
    v = i*r;
    cout << "V = I x R\n";
    cout << "V = " << i << "x" << r << endl;
    cout << "Nilai Tegangan Tersebut Adalah = " << v << " V" << endl;
    cout << "===================================================\n";

    //Hambatan (R)
    cout << "Menghitung Hambatan (R)\n";
    cout << "Masukan Nilai Tegangan (V) :";cin>>v;
    cout << "Masukan Nilai Arus (I)     :";cin>>i;
    cout << " \n";
    cout << "Diketahui :V = "<< v <<endl;
    cout << "           I = "<< i <<endl;
    r = v/i;
    cout << "R = V/I\n";
    cout << "R = " << v << ":" << i << endl;
    cout << "Nilai Hambatan Tersebut Adalah = " << r << " ohm" << endl;
    cout << "===================================================\n";

    return 0;

}
