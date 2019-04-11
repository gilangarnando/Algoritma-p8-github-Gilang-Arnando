#include <iostream>
using namespace ::std;
struct nilai {
double a,absen;
int uts, uas, tugas,grade;
float hasil;
string nama, nim;
};

nilai n;

void input ()
{
    cout<<"\nMasukkan data dengan benar : ";
    cout<<"\nNama     : ";
    cin>>n.nama;
    cout<<"NIM      : ";
    cin>>n.nim;
}
void pembatas ()
{
    cout<<"\n=============================================\n";
}
void nilai ()
{
    cout<<"\nUTS          : ";
    cin>>n.uts;
    cout<<"UAS          : ";
    cin>>n.uas;
    cout<<"Tugas        : ";
    cin>>n.tugas;
    cout<<"Absen        : ";
    cin>>n.a;
    n.absen=n.a*100/14;
    //anggap saja pertemuan sampai 14 kali

}
void total ()
{
    n.hasil=(n.uts*0.2)+(n.uas*0.3)+(n.tugas*0.35)+(n.absen*0.15);
    cout<<"\nHasil nilai : "<<n.hasil;
    cout<<"\nGrade : ";

    if (n.hasil >=81)
        cout<<"A";
    else if (n.hasil>=61)
        cout<<"B";
    else if(n.hasil>=41)
        cout<<"C";
    else if (n.hasil>=21)
        cout<<"D";
    else if (n.hasil>=0)
        cout<<"E";
    else
        cout<<"Kesalahan";
}

void output ()
{
    cout<<"\nUTS    : "<<n.uts;
    cout<<"\nUAS    : "<<n.uas;
    cout<<"\nTugas  : "<<n.tugas;
    cout<<"\nAbsen  : "<<n.absen;
    cout<<"\nHasil  : "<<n.hasil;
    cout<<"\nGrade  : ";
     if (n.hasil >=81)
        cout<<"A";
    else if (n.hasil>=61)
        cout<<"B";
    else if(n.hasil>=41)
        cout<<"C";
    else if (n.hasil>=21)
        cout<<"D";
    else if (n.hasil>=0)
        cout<<"E";
    else
        cout<<"Kesalahan";
}

main()
{ string x;
 do{cout<<"Program untuk Mencari Nilai ";
    input ();
    pembatas();
    nilai();
    pembatas();
    total();
    pembatas();
    output();
    pembatas();
    cout<<"\nApakah ingin mengulang program ?";
    cin>>x;
}
while (x=="y");}
