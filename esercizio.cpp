/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define DIM 50
using namespace std;

struct Libri
{
    string titolo;
    string autore;
    string editore;
    int anno;
    float prezzo;
    string codice;
    string genere;
};

int inserimento(Libri bibblioteca[])
{
    int n;
    cout<<"Quanti libri vuoi inserire?"<<endl;
    cin>>n;
    
    for(int i = 0; i < n; i++)
    {
        cout<<"Titolo"<<endl<<"\n";;
        cin>>bibblioteca[i].titolo;
        cout<<"Codice"<<endl<<"\n";;
        cin>>bibblioteca[i].codice;
        cout<<"Autore"<<endl<<"\n";;
        cin>>bibblioteca[i].autore;
        cout<<"Editore"<<endl<<"\n";;
        cin>>bibblioteca[i].editore;
        cout<<"Anno"<<endl<<"\n";;
        cin>>bibblioteca[i].anno;
        cout<<"Genere"<<endl<<"\n";;
        cin>>bibblioteca[i].genere;
        cout<<"Prezzo"<<endl<<"\n";;
        cin>>bibblioteca[i].prezzo;
    }
    
    return n;
}

void stampa(Libri bibblioteca[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<"Catalogo"<<endl;
        cout<<"Titolo\n"<<bibblioteca[i].titolo<<endl<<"\n";
        cout<<"Codice\n"<<bibblioteca[i].codice<<endl<<"\n";;
        cout<<"Autore\n"<<bibblioteca[i].autore<<endl<<"\n";;
        cout<<"Editore\n"<<bibblioteca[i].editore<<endl<<"\n";;
        cout<<"Anno\n"<<bibblioteca[i].anno<<endl<<"\n";;
        cout<<"Genere\n"<<bibblioteca[i].genere<<endl<<"\n";;
        cout<<"Prezzo\n"<<bibblioteca[i].prezzo<<endl<<"\n";;
    }
}

int main()
{
    Libri bibblioteca[DIM];
    int n = 0;
    
    n = inserimento(bibblioteca);
    stampa(bibblioteca, n);
    
    return 0;
}
