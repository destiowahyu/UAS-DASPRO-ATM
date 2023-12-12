#include<iostream>

using namespace std;

int main()
{
    int pin=123456;
    int saldo=1000000;
    int kode,tot,tarik;
    char ulang;
    char keluar;

    login:
cout<<endl;
cout<<"============================================="<<endl;
cout<<"      SELAMAT DATANG di ATM BANK SENDIRI     "<<endl;
cout<<"============================================="<<endl;
cout<<endl;
cout<<"MASUKAN PIN ANDA "<<endl;
cin>>pin;
if (pin==123456){
        goto menu;
        }
        else {
                cout<<"PIN Yang Anda Masukan Salah"<<endl;
                cout<<"Apkah Anda ingin keluar? (y/t)"<<endl;
                cin>>keluar;
                if (keluar=='y'){
                    goto exit;
            }
        else {
            goto login;
        }

}
cout<<endl;


    menu:
cout<<"|==============================================|"<<endl;
cout<<"|                     MENU                     |"<<endl;
cout<<"|==============================================|"<<endl;
cout<<"| 1. 100000              5. 1000000            |"<<endl;
cout<<"| 2. 200000              6. Jumlah Lain        |"<<endl;
cout<<"| 3. 500000              7. Informasi Saldo    |"<<endl;
cout<<"| 4. 800000              8. Keluar             |"<<endl;
cout<<"|----------------------------------------------|"<<endl;
cout<<endl;
cout<<" Silahkan Masukan Pilihan Anda : ";
cin>>kode;
switch (kode)
{
case 1:
    tarik =100000;
    cout<<"Anda Melakukan Penarikan Sebesar :"<<tarik<<endl;
    tot= (saldo-tarik);
    cout<<"Sisa Saldo Anda Sebesar  :"<<tot<<endl;
    cout<<" "<<endl;
    cout<<"Apakah Anda ingin melakukan transaksi lain? (y/n)"<<endl;
    cin>>ulang;
    if (ulang=='y'){
            goto menu;
    }
    else{
        goto exit;
    }
    break;

case 2:
    tarik =200000;
    cout<<"Anda Melakukan Penarikan Sebesar :"<<tarik<<endl;
    tot= (saldo-tarik);
    cout<<"Sisa Saldo Anda Sebesar  :"<<tot<<endl;
    cout<<" "<<endl;
    cout<<"Apakah Anda ingin melakukan transaksi lain? (y/n)"<<endl;
    cin>>ulang;
    if (ulang=='y'){
            goto menu;
    }
    else{
        goto exit;
    }
    break;

case 3:
    tarik =500000;
    cout<<"Anda Melakukan Penarikan Sebesar :"<<tarik<<endl;
    tot= (saldo-tarik);
    cout<<"Sisa Saldo Anda Sebesar  :"<<tot<<endl;
    cout<<" "<<endl;
    cout<<"Apakah Anda ingin melakukan transaksi lain? (y/n)"<<endl;
    cin>>ulang;
    if (ulang=='y'){
            goto menu;
    }
    else{
        goto exit;
    }
    break;


case 4:
    tarik =800000;
    cout<<"Anda Melakukan Penarikan Sebesar :"<<tarik<<endl;
    tot= (saldo-tarik);
    cout<<"Sisa Saldo Anda Sebesar  :"<<tot<<endl;
    cout<<" "<<endl;
    cout<<"Apakah Anda ingin melakukan transaksi lain? (y/n)"<<endl;
    cin>>ulang;
    if (ulang=='y'){
            goto menu;
    }
    else{
        goto exit;
    }
    break;

case 5:
    tarik =1000000;
    cout<<"Anda Melakukan Penarikan Sebesar :"<<tarik<<endl;
    tot= (saldo-tarik);
    cout<<"Sisa Saldo Anda Sebesar  :"<<tot<<endl;
    cout<<" "<<endl;
    cout<<"Apakah Anda ingin melakukan transaksi lain? (y/n)"<<endl;
    cin>>ulang;
    if (ulang=='y'){
            goto menu;
    }
    else{
        goto exit;
    }
    break;

case 6:
    cout<<"Maksimal Tarik Tunai 1250000"<<endl;
    cout<<"Silahkan Masukan jumlah uang yang ingin anda ambil :"<<endl;
    cin>>tarik;
    cout<<endl;


    if ((tarik %50000)!=0)
    {
        cout<<"Jumlah penarikan tidak bisa dilakukan "<<endl;
        cout<<"Hanya Kelipatan 50000 "<<endl;
        cout<<" "<<endl;
        cout<<"Apakah Anda ingin melakukan transaksi lain? (y/n)"<<endl;
        cin>>ulang;
        if (ulang=='y'){
            goto menu;
                }
            else{
            goto exit;
            }
        break;
    }
    else if(saldo<tarik)
    {
        cout<<"Saldo anda tidak mencukupi"<<endl<<endl;
        cout<<"Saldo Anda : Rp "<<saldo<<endl<<endl;
        cout<<"Apakah Anda ingin melakukan transaksi lain? (y/n)"<<endl;
        cin>>ulang;
        if (ulang=='y'){
            goto menu;
                }
            else{
            goto exit;
            }
        break;
    }


    else if(tarik>1250000)
    {
         cout<<"Jumlah penarikan tidak bisa dilakukan maksimum Rp 1.250.000,- /hari"<<endl;
         cout<<"Apakah Anda ingin melakukan transaksi lain? (y/n)"<<endl;
         cin>>ulang;
         if (ulang=='y'){
            goto menu;
                }
            else{
            goto exit;
            }
         break;
    }


    else
    {
         cout<<"Proses Penarikan Berhasil "<<endl;
         tot= (saldo-tarik);
         cout<<"Sisa Saldo Anda Rp "<<tot<<endl;
         cout<<"Apakah Anda ingin melakukan transaksi lain? (y/n)"<<endl;
         cin>>ulang;
         if (ulang=='y'){
            goto menu;
                }
            else{
            goto exit;
            }
         break;
    }
    break;




case 7:
    cout<<"Saldo Anda Saat Ini :"<<saldo<<endl;
    cout<<"Apakah Anda ingin melakukan transaksi lain? (y/n)"<<endl;
         cin>>ulang;
         if (ulang=='y'){
            goto menu;
                }
            else{
            goto exit;
            }
    break;


case 8:
    goto exit;
    break;

default:
    cout<<"Kode Yang Anda Masukan Tidak Tersedia"<<endl;
}


exit:
    cout<<" "<<endl;
    cout<<"TerimaKasih Atas Kunjungan Anda"<<endl;

return 0;
}
