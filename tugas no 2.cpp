    #include <iostream>

    using namespace std;
    main (){

    cout << "\t\t MENGHITUNG NILAI AKHIR MAHASISWA \n";
    cout << "======================================================================================\n";

    double NilaiAkhir;

    //Bobot Penilaian
    cout << "Nilai Akhir dari Mata Kuliah Algoritma dan Pemrograman ditentukan oleh 3 nilai yaitu :\n";
    cout << "Praktikum 20%\n";
    cout << "UTS       30%\n";
    cout << "UAS       50%\n\n";

    //Nilai Mahasiswa
    cout << "Berapakah Nilai Akhir Mahasiswa dengan Nilai Seperti Berikut:\n ";
    cout << "Nilai Praktikum : 75\n ";
    cout << "Nilai UTS       : 70\n ";
    cout << "Nilai UAS       : 88\n\n ";

    //Rumus dan Hasil
    int p = 75;
    int ut = 70;
    int ua = 88;

    cout << "Nilai Akhir = 75 x 20% + 70 x 30% + 88 x 50%\n ";

    NilaiAkhir = p*20/100 + ut*30/100 + ua*50/100;

    cout << "Jadi Nilai Akhir dari Mahasiswa Tersebut sebesar : "<< NilaiAkhir << endl;

    return 0;

}
