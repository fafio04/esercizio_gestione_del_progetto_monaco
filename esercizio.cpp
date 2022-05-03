/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

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

void elimina(Libri bibblioteca[], int n)
{
    string elimina;
    int i = 0;
    
    cout<<"inserire il codice dle libro che si vuol eliminare"<<endl;
    cin>>elimina;
    
    while(bibblioteca[i].codice != elimina)
    {
        for(i = 0 ; i < n; i++)
        {
            bibblioteca[i].titolo = "";
            bibblioteca[i].autore = "";
            bibblioteca[i].editore = "";
            bibblioteca[i].anno = 0;
            bibblioteca[i].prezzo = 0;
            bibblioteca[i].codice = "";
            bibblioteca[i].genere = "";
        }
    }
}

void menu(Libri bibblioteca[], int n, int s)
{
    do
  {
      cout<<"1 inserimento libri \n| 2 stampa libri \n| 3 elimina libro \n| 4 cercare un libro \n| 5 cambiare libro \n|6 uscita menù|"<<endl;
      cin>>s;
    switch(s){
    
    case 1:
    
        n = inserimento(bibblioteca);
    break;
    case 2:
    
       stampa(bibblioteca, n); 
    break;
    case 3:
    
        elimina(bibblioteca, n);
    break;
    case 4:
        
    break;
    case 5:
        
    break;
    case 6:
        cout<<"uscita menù"<<endl;
        
    default:
    cout << "Uscita dal menù" << endl;
    }
  }while(s<=5);
  
}

int main()
{
    Libri bibblioteca[DIM];
    int n = 0;
    int s = 0;
    
    menu(bibblioteca, n, s);
    
    return 0;
}