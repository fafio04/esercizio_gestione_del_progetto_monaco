
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

    //! \file esecizio.cpp
    //! \brief implementazione di una bibblioteca digitale
    //! \author Flavio Monaco
    //! \version 1.0


    //! \fn inserimento
    //! \brief serve per inserire il numero dei libri e le loro specifiche

int inserimento(Libri bibblioteca[])
{
    int n;
    cout<<"Quanti libri vuoi inserire?"<<endl;
    cin>>n;
    
    for(int i = 0; i < n; i++)
    {
        cout<<"Titolo"<<endl<<"\n";
        cin>>bibblioteca[i].titolo;
        cout<<"Codice"<<endl<<"\n";
        cin>>bibblioteca[i].codice;
        cout<<"Autore"<<endl<<"\n";
        cin>>bibblioteca[i].autore;
        cout<<"Editore"<<endl<<"\n";
        cin>>bibblioteca[i].editore;
        cout<<"Anno"<<endl<<"\n";
        cin>>bibblioteca[i].anno;
        cout<<"Genere"<<endl<<"\n";
        cin>>bibblioteca[i].genere;
        cout<<"Prezzo"<<endl<<"\n";
        cin>>bibblioteca[i].prezzo;
    }
    
       //! \return restituisce il numero dei libri inseriti
    
    return n;
}
/*!
    \fn stampa
    \brief serve per stampare a video il catalogo dei libri
*/
void stampa(Libri bibblioteca[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<"Catalogo"<<endl;
        cout<<"Titolo\n"<<bibblioteca[i].titolo<<endl<<"\n";
        cout<<"Codice\n"<<bibblioteca[i].codice<<endl<<"\n";
        cout<<"Autore\n"<<bibblioteca[i].autore<<endl<<"\n";
        cout<<"Editore\n"<<bibblioteca[i].editore<<endl<<"\n";
        cout<<"Anno\n"<<bibblioteca[i].anno<<endl<<"\n";;
        cout<<"Genere\n"<<bibblioteca[i].genere<<endl<<"\n";
        cout<<"Prezzo\n"<<bibblioteca[i].prezzo<<endl<<"\n";
    }
}
/*!
    \fn elimina
    \brief serve per eliminare un libro
*/
void elimina(Libri bibblioteca[], int n)
{
    string elimina;
    int i = 0;
    
    cout<<"inserire il codice del libro che si vuole eliminare"<<endl;
    cin>>elimina;
    
    if(bibblioteca[i].codice == elimina)
    {
        for(int i = 0; i < n; i++)
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

/*!
    \fn ricerca
    \brief serve per ricercare un libro
*/
void ricerca(Libri bibblioteca[], int n)
{
    string ricerca;
    int i = 0;
    
    cout<<"Inserire il codice del libro che si vuole cercare"<<endl;;
    cin>>ricerca;
    
    while(bibblioteca[i].codice == ricerca)
    {
        for(int i = 0; i < n; i++)
        {
                cout<<"Catalogo"<<endl;
                cout<<"Titolo\n"<<bibblioteca[i].titolo<<endl<<"\n";
                cout<<"Codice\n"<<bibblioteca[i].codice<<endl<<"\n";
                cout<<"Autore\n"<<bibblioteca[i].autore<<endl<<"\n";
                cout<<"Editore\n"<<bibblioteca[i].editore<<endl<<"\n";
                cout<<"Anno\n"<<bibblioteca[i].anno<<endl<<"\n";;
                cout<<"Genere\n"<<bibblioteca[i].genere<<endl<<"\n";
                cout<<"Prezzo\n"<<bibblioteca[i].prezzo<<endl<<"\n";
        }
    }
}

/*!
    \fn modifica
    \brief serve per modificare le specifiche di un libro
*/
void modifica(Libri bibblioteca[], int n)
{
   string modifica;
   int i = 0;
   
   cout<<"Inserire il codice del libro che si vuole modificare"<<endl;
   cin>>modifica;
   
   while(bibblioteca[i].codice == modifica)
   {
      for(int i = 0; i < n; i++)
        {
            cout<<"Titolo"<<endl<<"\n";
            cin>>bibblioteca[i].titolo;
            cout<<"Codice"<<endl<<"\n";
            cin>>bibblioteca[i].codice;
            cout<<"Autore"<<endl<<"\n";
            cin>>bibblioteca[i].autore;
            cout<<"Editore"<<endl<<"\n";
            cin>>bibblioteca[i].editore;
            cout<<"Anno"<<endl<<"\n";
            cin>>bibblioteca[i].anno;
            cout<<"Genere"<<endl<<"\n";
            cin>>bibblioteca[i].genere;
            cout<<"Prezzo"<<endl<<"\n";
            cin>>bibblioteca[i].prezzo;
        }
   }
}
/*! 
    \fn menù
    \brief serve per scegliere l'azione da fare
*/
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
    
        ricerca(bibblioteca, n);
    break;
    case 5:
        
     modifica(bibblioteca, n);   
    
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