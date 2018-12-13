#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

struct wadah
{
    char nopung[5],nama[40],posisi[30];
    struct wadah *next;
} *front,*rear,*temp;

void enqueue()
{
    temp=new wadah;
    cout<<"  Data Pemain Sepak Bola  "<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"No Punggung : ";
    fflush(stdin);gets(temp->nopung);
    cout<<"Nama        : ";
    gets(temp->nama);
    cout<<"Posisi      : ";
    gets(temp->posisi);
    temp->next==NULL;
    if (front==NULL)
    {
        front=rear=temp;
    }
        else
        {
           rear->next=temp;
           rear=temp;
        }
    system("cls");
}

void dequeue()
{
    if (front==NULL)
    {
        cout<<"Antrian Kosong\n\n";
        system("pause");
        system("cls");
    }
        else
        {
            temp=front;
            front=front->next;
            delete (temp);
            cout<<"Dequeue Berhasil"<<endl<<endl;
            system("pause");
            system("cls");
        }
}

void tampil()
{
    if(front==NULL)
    {
        cout<<"Antrian Kosong\n\n";
        system("pause");
        system("cls");
    }
        else
        {
            temp=front;
            cout<<"     Isi Antrian     "<<endl;
            cout<<"---------------------"<<endl;
            while (temp!=NULL)
            {
                cout<<temp->nopung<<" --> "<<temp->nama<<" --> "<<temp->posisi<<endl;
                temp=temp->next;
            }
            cout<<endl;
            system("pause");
            system("cls");
        }
}

int main()
{
    int pilihan;
    do
    {
        cout<<"     Queue dengan Linked List    "<<endl;
        cout<<"================================="<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Tampil"<<endl;
        cout<<"4. Keluar"<<endl<<endl;
        cout<<"Masukkan Pilihan(1-4) : ";
        cin>>pilihan;
        cout<<endl;

        switch(pilihan)
        {
            case 1 :
                enqueue();
                break;
            case 2 :
                dequeue();
                break;
            case 3 :
                tampil();
                break;
            case 4 :
                tampil();
                break;
            default :
                cout<<"Inputan Anda Salah"<<endl;
                system("pause");
                system("cls");
        }
    }
    while (pilihan!=4);
    return 0;
}
