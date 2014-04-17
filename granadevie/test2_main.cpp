#include <stdlib.h>
#include <iostream>
#include <conio.h>
  using namespace std;
  
  
  
//-----------------------------------------
//deklaracja tablicy
const short LICZBA_kolumn = 10;
const short LICZBA_wierszy =10;
int wygrana=3;
int tab1[ LICZBA_kolumn ][ LICZBA_wierszy ]={
{0,1,1,0},
{1,0,8,1},
{0,7,1,1},
{3,1,9,2},
};

void wyswietlanie_tablicy(){
   for(int i=0;i<LICZBA_wierszy;i++)
  {
    for(int j=0;j<LICZBA_kolumn;j++)
    {
         cout<<tab1[i][j]<<" "; 
    }
    cout<<endl;
  }
}
//-----------------------------------------


void zapis_do_tablicy(int wiersz,int kolumna,int pionek){
	int poprawne=0;
	while(poprawne==0){
		
		if(tab1[wiersz-1][kolumna-1]==0){
			tab1[wiersz-1][kolumna-1]=pionek; 	
			poprawne=1;
		}
		else{
			cout<<"miejsce jest zajête sprobuj poniwnie";
						
			cout<<"podaj nowa kolumne ->";
			cin>>kolumna;
			if(kolumna>LICZBA_kolumn){
		 		cout<<"postaraj sie trafic w plansze";
		 		cout<<endl<<"sprobuj ponownie ->";
		 		cin>>kolumna;
			}
			   
			
			cout<<"podaj nowy wiersz ->";
			cin>>wiersz;
			if (wiersz>LICZBA_wierszy){
			cout<<"postaraj sie trafic w plansze";
			 		cout<<endl<<"sprobuj ponownie ->";
			 		cin>>wiersz;
			}
			
			poprawne=0;
		}
	}
	  
}






void zerowanie_tablicy(){
for(int i=0;i<LICZBA_wierszy;i++)
  {
    for(int j=0;j<LICZBA_kolumn;j++)
    {
       tab1[i][j]=0; 
      
    }
 }
}



bool sprawdzanie_wygranej(int gracz){
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//sprawdzanie wierszy
	 int wynik=0;
	 	
	 for(int wiersz=0;wiersz<LICZBA_wierszy;wiersz++){
	 	wynik=0;
		 for(int i=0;i<LICZBA_kolumn;i++){
		 	if(tab1[wiersz][i]==gracz){	 		
		 		wynik=wynik+1;
		 		
		 		if(tab1[wiersz][i+1]==0&&i<LICZBA_kolumn&&wynik<wygrana){
		 			wynik=0;
				 }
				 if (wynik==wygrana){
					return 1;
				 }
    		 	}
		  }	
	 }
	 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 	//sprawdzanie kolumn
	 	
	wynik=0;
	 for(int kolumna=0;kolumna<LICZBA_kolumn;kolumna++){
	 	wynik=0;
		 for(int j=0;j<LICZBA_kolumn;j++){
		 	if(tab1[j][kolumna]==gracz){	 		
		 		wynik=wynik+1;
		 		
		 		if(tab1[j+1][kolumna]==0&&j<LICZBA_wierszy&&wynik<wygrana){
		 			wynik=0;
				 }
				 if (wynik==wygrana){
					return 1;
				 }
		 	}
		  }	
	 }
// ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

		//sprawdzanie skosu takiego->"\"
	

	for(int a=0;a<LICZBA_kolumn;a++){
			wynik=0;
			for(int i=0;i<LICZBA_kolumn-a;i++){
			
			if(tab1[a+i][i]==gracz){wynik =wynik+1;}
			else{wynik=0;}
				
				if (wynik==wygrana){
					return 1;
				 }
			
					
			}
			
	}

	
	for(int a=0;a<LICZBA_kolumn;a++){
		wynik=0;
			for(int i=0;i<LICZBA_kolumn-a;i++){
			
			
			if(tab1[i][a+i]==gracz){wynik =wynik+1;}
			else{wynik=0;}
				
				if (wynik==wygrana){
					return 1;
				 }		
			}
		
	}
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//sprawdzanie skosu takiego->"/"
		wynik=0;
	cout<<"   ";
	for(int a=0;a<LICZBA_kolumn;a++){
		wynik=0;
			for(int i=0;i<a+1;i++){
				//cout<<tab1[a-i][i];
				
				if(tab1[a-i][i]==gracz){wynik =wynik+1;}
			else{wynik=0;}
				
				if (wynik==wygrana){
										return 1;
				 }
				
			}
			
	}
			
			
	cout<<endl;
	for(int a=0;a<LICZBA_kolumn;a++){
		wynik=0;
			for(int i=0;i<LICZBA_kolumn-a;i++){
				//cout<<tab1[LICZBA_kolumn-1-i][a+i];
				
				if(tab1[LICZBA_kolumn-1-i][a+i]==gracz){wynik =wynik+1;}
			else{wynik=0;}
				
				if (wynik==wygrana){
					return 1;
				 }
				
			}
	}
	
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	 return 0;
}
	
	 
	 
void runda(int gracz){
	
 cout<<"	GRACZ nr"<<gracz<<endl<<endl;
 cout<<"podaj kolumne na ktorej postawisz pionek ->";
 int wiersz,kolumna;
 	cin>>kolumna;
 	if (kolumna>LICZBA_kolumn){
 		cout<<"postaraj sie trafic w plansze";
 		cout<<endl<<"sprobuj ponownie ->";
 		cin>>kolumna;
 	}
  cout<<endl;
  
 cout<<"a teraz podaj wiersz ->";
	cin>>wiersz;	
		if (wiersz>LICZBA_wierszy){
 		cout<<"postaraj sie trafic w plansze";
 		cout<<endl<<"sprobuj ponownie ->";
 		cin>>wiersz;
 	}
 cout<<endl;
 	zapis_do_tablicy(wiersz,kolumna,gracz);
 	system( "cls" );
}	 
	 
	 
	 

int main()
{
   

zerowanie_tablicy();

int Wygrana=0;
while(Wygrana==0){
	wyswietlanie_tablicy();
	runda(1);
	if(sprawdzanie_wygranej(1)){
			cout<<"wygrales graczu nr 1";
			Wygrana=1;
			getch();
		}
	else{
			wyswietlanie_tablicy();
			runda(2);
			if(sprawdzanie_wygranej(2)){
				cout<<"wygrales graczu nr 2";
			Wygrana=1;
			getch();
			}
	}
	}

	
getch();
system( "cls" );
cout<<"koniec gry";

    return 0;
}
//-----------
