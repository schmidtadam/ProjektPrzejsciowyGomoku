
#include "mojdll3.h"



Mojdll3::Mojdll3()
{


}

int Mojdll3::kolumna()
{


int rozmiar=15;

//zasady punktacjii punktacja

  int pg1=1;                  //pionek komputera
  int pg2=1;
  int pg3=1;
  int pg_ultime=205;
  int pk1=1;                 //pionek gracza
  int pk2=1;
  int pk3=1;
 int pk_ultime=200;

                          // tworzenie tablicy punktów
 int i=0;
 int j=0;
 for(i=0;i<rozmiar;i++){
        for(j=0;j<rozmiar;j++){

            if(tablica_testowa[i][j]==0){

                    // ///////////////////wersja optymistyczna//////////////////patrzy na połozenie swojego pionka
                    //jeżeli w następnym miejscu jest pionek
                    // dół i prawa
                    if(i<=13&&tablica_testowa[i+1][j]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk1;}

                    if(j<=13&&i<=13&&tablica_testowa[i+1][j+1]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk1;}

                    if(j<=13&&tablica_testowa[i][j+1]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk1;}
                    // góra i lewa

                    if(j>=1&&tablica_testowa[i][j-1]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk1;}

                    if(i>=1&&tablica_testowa[i-1][j]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk1;}

                    if(j>=1&&i>=1&&tablica_testowa[i-1][j-1]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk1;}



                    // /////////////////////////////////////////////
                     //jeżeli w następnym miejscu są dwa pionki
                    // dół i prawa
                    if(i<=12&&tablica_testowa[i+1][j]==1&&tablica_testowa[i+2][j]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk2;}

                    if(j<=12&&i<=12&&tablica_testowa[i+1][j+1]==1&&tablica_testowa[i+2][j+2]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk2;}

                    if(j<=12&&tablica_testowa[i][j+1]==1&&tablica_testowa[i][j+2]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk2;}
                    // góra i lewa

                    if(j>=2&&tablica_testowa[i][j-1]==1&&tablica_testowa[i][j-2]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk2;}

                    if(i>=2&&tablica_testowa[i-1][j]==1&&tablica_testowa[i-2][j]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk2;}

                    if(j>=2&&i>=2&&tablica_testowa[i-1][j-1]==1&&tablica_testowa[i-2][j-2]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk2;}



                    // /////////////////////////////////////////////
                     //jeżeli w następnym miejscu są trzy pionki
                    // dół i prawa
                    if(i<=12&&tablica_testowa[i+1][j]==1&&tablica_testowa[i+2][j]==1&&tablica_testowa[i+3][j]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk3;}

                    if(j<=12&&i<=12&&tablica_testowa[i+1][j+1]==1&&tablica_testowa[i+2][j+2]==1&&tablica_testowa[i+3][j+3]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk3;}

                    if(j<=12&&tablica_testowa[i][j+1]==1&&tablica_testowa[i][j+2]==1&&tablica_testowa[i][j+3]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk3;}
                    // góra i lewa

                    if(j>=2&&tablica_testowa[i][j-1]==1&&tablica_testowa[i][j-2]==1&&tablica_testowa[i][j-3]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk3;}

                    if(i>=2&&tablica_testowa[i-1][j]==1&&tablica_testowa[i-2][j]==1&&tablica_testowa[i-3][j]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk3;}

                    if(j>=2&&i>=2&&tablica_testowa[i-1][j-1]==1&&tablica_testowa[i-2][j-2]==1&&tablica_testowa[i-3][j-3]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk3;}




        // ///////////////////wersja pesymistyczna//////////////////////////paczy na połozenie pionka gracza

                    if(i<=13&&tablica_testowa[i+1][j]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg1;}

                    if(j<=13&&i<=13&&tablica_testowa[i+1][j+1]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg1;}

                    if(j<=13&&tablica_testowa[i][j+1]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg1;}
                    // góra i lewa

                    if(j>=1&&tablica_testowa[i][j-1]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg1;}

                    if(i>=1&&tablica_testowa[i-1][j]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg1;}

                    if(j>=1&&i>=1&&tablica_testowa[i-1][j-1]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg1;}



                    // /////////////////////////////////////////////
                     //jeżeli w następnym miejscu są dwa pionki
                    // dół i prawa
                    if(i<=12&&tablica_testowa[i+1][j]==2&&tablica_testowa[i+2][j]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg2;}

                    if(j<=12&&i<=12&&tablica_testowa[i+1][j+1]==2&&tablica_testowa[i+2][j+2]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg2;}

                    if(j<=12&&tablica_testowa[i][j+1]==2&&tablica_testowa[i][j+2]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg2;}
                    // góra i lewa

                    if(j>=2&&tablica_testowa[i][j-1]==2&&tablica_testowa[i][j-2]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg2;}

                    if(i>=2&&tablica_testowa[i-1][j]==2&&tablica_testowa[i-2][j]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg2;}

                    if(j>=2&&i>=2&&tablica_testowa[i-1][j-1]==2&&tablica_testowa[i-2][j-2]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg2;}

                    // /////////////////////////////////////////////
                     //jeżeli w następnym miejscu są trzy pionki
                    // dół i prawa
                    if(i<=12&&tablica_testowa[i+1][j]==2&&tablica_testowa[i+2][j]==2&&tablica_testowa[i+3][j]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg3;}

                    if(j<=12&&i<=12&&tablica_testowa[i+1][j+1]==2&&tablica_testowa[i+2][j+2]==2&&tablica_testowa[i+3][j+3]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg3;}

                    if(j<=12&&tablica_testowa[i][j+1]==2&&tablica_testowa[i][j+2]==2&&tablica_testowa[i][j+3]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg3;}
                    // góra i lewa

                    if(j>=2&&tablica_testowa[i][j-1]==2&&tablica_testowa[i][j-2]==2&&tablica_testowa[i][j-3]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg3;}

                    if(i>=2&&tablica_testowa[i-1][j]==2&&tablica_testowa[i-2][j]&&tablica_testowa[i-3][j]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg3;}

                    if(j>=2&&i>=2&&tablica_testowa[i-1][j-1]==2&&tablica_testowa[i-2][j-2]&&tablica_testowa[i-3][j-3]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg3;}


// /////////////////////////////////blokowanie przeciwnika///////////////////////////////


                    if(i<=11&&tablica_testowa[i+1][j]==2&&tablica_testowa[i+2][j]==2&&tablica_testowa[i+3][j]==2&&tablica_testowa[i+4][j]==0)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                    if(j<=11&&i<=11&&tablica_testowa[i+1][j+1]==2&&tablica_testowa[i+2][j+2]==2&&tablica_testowa[i+3][j+3]==2&&tablica_testowa[i+4][j+4]==0)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                    if(j<=11&&tablica_testowa[i][j+1]==2&&tablica_testowa[i][j+2]==2&&tablica_testowa[i][j+3]==2&&tablica_testowa[i][j+4]==0)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}
                    // góra i lewa

                    if(j>=3&&tablica_testowa[i][j-1]==2&&tablica_testowa[i][j-2]==2&&tablica_testowa[i][j-3]==2&&tablica_testowa[i][j-4]==0)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                    if(i>=3&&tablica_testowa[i-1][j]==2&&tablica_testowa[i-2][j]&&tablica_testowa[i-3][j]==2&&tablica_testowa[i-4][j]==0)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                    if(j>=3&&i>=3&&tablica_testowa[i-1][j-1]==2&&tablica_testowa[i-2][j-2]&&tablica_testowa[i-3][j-3]==2&&tablica_testowa[i-4][j-4]==0)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;}

  // /////////////////////////////////blokowanie przeciwnika (nieprzewidziany part2)///////////////////////////////

                    if(i<=11&&tablica_testowa[i+1][j]==2&&tablica_testowa[i+2][j]==2&&tablica_testowa[i+3][j]==2&&tablica_testowa[i+4][j]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                    if(j<=11&&i<=11&&tablica_testowa[i+1][j+1]==2&&tablica_testowa[i+2][j+2]==2&&tablica_testowa[i+3][j+3]==2&&tablica_testowa[i+4][j+4]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                    if(j<=11&&tablica_testowa[i][j+1]==2&&tablica_testowa[i][j+2]==2&&tablica_testowa[i][j+3]==2&&tablica_testowa[i][j+4]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}
                    // góra i lewa

                    if(j>=3&&tablica_testowa[i][j-1]==2&&tablica_testowa[i][j-2]==2&&tablica_testowa[i][j-3]==2&&tablica_testowa[i][j-4]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                    if(i>=3&&tablica_testowa[i-1][j]==2&&tablica_testowa[i-2][j]&&tablica_testowa[i-3][j]==2&&tablica_testowa[i-4][j]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                    if(j>=3&&i>=3&&tablica_testowa[i-1][j-1]==2&&tablica_testowa[i-2][j-2]&&tablica_testowa[i-3][j-3]==2&&tablica_testowa[i-4][j-4]==2)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;}

// /////////////////////////////////!!wygrana!!///////////////////////////////

                    if(i<=11&&tablica_testowa[i+1][j]==1&&tablica_testowa[i+2][j]==1&&tablica_testowa[i+3][j]==1&&tablica_testowa[i+4][j]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk_ultime;;}

                    if(j<=11&&i<=11&&tablica_testowa[i+1][j+1]==1&&tablica_testowa[i+2][j+2]==1&&tablica_testowa[i+3][j+3]==1&&tablica_testowa[i+4][j+4]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk_ultime;;}

                    if(j<=11&&tablica_testowa[i][j+1]==1&&tablica_testowa[i][j+2]==1&&tablica_testowa[i][j+3]==1&&tablica_testowa[i][j+4]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk_ultime;;}
                    // góra i lewa

                    if(j>=3&&tablica_testowa[i][j-1]==1&&tablica_testowa[i][j-2]==1&&tablica_testowa[i][j-3]==1&&tablica_testowa[i][j-4]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk_ultime;;}

                    if(i>=3&&tablica_testowa[i-1][j]==1&&tablica_testowa[i-2][j]&&tablica_testowa[i-3][j]==1&&tablica_testowa[i-4][j]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk_ultime;;}

                    if(j>=3&&i>=3&&tablica_testowa[i-1][j-1]==1&&tablica_testowa[i-2][j-2]&&tablica_testowa[i-3][j-3]==1&&tablica_testowa[i-4][j-4]==1)
                    {tablica_testowa[i][j]=tablica_testowa[i][j]+pk_ultime;}

                }

             }
           }


    int temp_wart=0;
    int temp_i=7;

             for(i=0;i<rozmiar;i++){
              for(j=0;j<rozmiar;j++){
                if(tablica_testowa[i][j]>temp_wart){
                  temp_wart=tablica_testowa[i][j];
                    temp_i=j;
if(temp_i>15)
    temp_i=1;
                    }
                }
             }


return temp_i+1;
}





int Mojdll3::wiersz()
{

    int rozmiar=15;


    //zasady punktacjii punktacja

      int pg1=4;      //pioenk komputera
      int pg2=21;
      int pg3=41;
      int pg_ultime=205;
      int pk1=3;      //pionek gracza
      int pk2=20;
      int pk3=40;
     int pk_ultime=200;

            // tworzenie tablicy punktów
     int i=0;
     int j=0;
                 for(i=0;i<rozmiar;i++){
                  for(j=0;j<rozmiar;j++){
                    if(tablica_testowa[i][j]==0){

                        // ///////////////////wersja optymistyczna//////////////////////////paczy na połozenie swojego pionka
                        //jeżeli w następnym miejscu jest pionek
                        // dół i prawa
                        if(i<=13&&tablica_testowa[i+1][j]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk1;}

                        if(j<=13&&i<=13&&tablica_testowa[i+1][j+1]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk1;}

                        if(j<=13&&tablica_testowa[i][j+1]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk1;}
                        // góra i lewa

                        if(j>=1&&tablica_testowa[i][j-1]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk1;}

                        if(i>=1&&tablica_testowa[i-1][j]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk1;}

                        if(j>=1&&i>=1&&tablica_testowa[i-1][j-1]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk1;}



                        // /////////////////////////////////////////////
                         //jeżeli w następnym miejscu są dwa pionki
                        // dół i prawa
                        if(i<=12&&tablica_testowa[i+1][j]==1&&tablica_testowa[i+2][j]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk2;}

                        if(j<=12&&i<=12&&tablica_testowa[i+1][j+1]==1&&tablica_testowa[i+2][j+2]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk2;}

                        if(j<=12&&tablica_testowa[i][j+1]==1&&tablica_testowa[i][j+2]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk2;}
                        // góra i lewa

                        if(j>=2&&tablica_testowa[i][j-1]==1&&tablica_testowa[i][j-2]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk2;}

                        if(i>=2&&tablica_testowa[i-1][j]==1&&tablica_testowa[i-2][j]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk2;}

                        if(j>=2&&i>=2&&tablica_testowa[i-1][j-1]==1&&tablica_testowa[i-2][j-2]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk2;}



                        // /////////////////////////////////////////////
                         //jeżeli w następnym miejscu są trzy pionki
                        // dół i prawa
                        if(i<=12&&tablica_testowa[i+1][j]==1&&tablica_testowa[i+2][j]==1&&tablica_testowa[i+3][j]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk3;}

                        if(j<=12&&i<=12&&tablica_testowa[i+1][j+1]==1&&tablica_testowa[i+2][j+2]==1&&tablica_testowa[i+3][j+3]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk3;}

                        if(j<=12&&tablica_testowa[i][j+1]==1&&tablica_testowa[i][j+2]==1&&tablica_testowa[i][j+3]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk3;}
                        // góra i lewa

                        if(j>=2&&tablica_testowa[i][j-1]==1&&tablica_testowa[i][j-2]==1&&tablica_testowa[i][j-3]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk3;}

                        if(i>=2&&tablica_testowa[i-1][j]==1&&tablica_testowa[i-2][j]==1&&tablica_testowa[i-3][j]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk3;}

                        if(j>=2&&i>=2&&tablica_testowa[i-1][j-1]==1&&tablica_testowa[i-2][j-2]==1&&tablica_testowa[i-3][j-3]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk3;}




            // ///////////////////wersja pesymistyczna//////////////////////////paczy na połozenie pionka gracza

                        if(i<=13&&tablica_testowa[i+1][j]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg1;}

                        if(j<=13&&i<=13&&tablica_testowa[i+1][j+1]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg1;}

                        if(j<=13&&tablica_testowa[i][j+1]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg1;}
                        // góra i lewa

                        if(j>=1&&tablica_testowa[i][j-1]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg1;}

                        if(i>=1&&tablica_testowa[i-1][j]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg1;}

                        if(j>=1&&i>=1&&tablica_testowa[i-1][j-1]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg1;}



                        // /////////////////////////////////////////////
                         //jeżeli w następnym miejscu są dwa pionki
                        // dół i prawa
                        if(i<=12&&tablica_testowa[i+1][j]==2&&tablica_testowa[i+2][j]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg2;}

                        if(j<=12&&i<=12&&tablica_testowa[i+1][j+1]==2&&tablica_testowa[i+2][j+2]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg2;}

                        if(j<=12&&tablica_testowa[i][j+1]==2&&tablica_testowa[i][j+2]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg2;}
                        // góra i lewa

                        if(j>=2&&tablica_testowa[i][j-1]==2&&tablica_testowa[i][j-2]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg2;}

                        if(i>=2&&tablica_testowa[i-1][j]==2&&tablica_testowa[i-2][j]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg2;}

                        if(j>=2&&i>=2&&tablica_testowa[i-1][j-1]==2&&tablica_testowa[i-2][j-2]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg2;}

                        // /////////////////////////////////////////////
                         //jeżeli w następnym miejscu są trzy pionki
                        // dół i prawa
                        if(i<=12&&tablica_testowa[i+1][j]==2&&tablica_testowa[i+2][j]==2&&tablica_testowa[i+3][j]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg3;}

                        if(j<=12&&i<=12&&tablica_testowa[i+1][j+1]==2&&tablica_testowa[i+2][j+2]==2&&tablica_testowa[i+3][j+3]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg3;}

                        if(j<=12&&tablica_testowa[i][j+1]==2&&tablica_testowa[i][j+2]==2&&tablica_testowa[i][j+3]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg3;}
                        // góra i lewa

                        if(j>=2&&tablica_testowa[i][j-1]==2&&tablica_testowa[i][j-2]==2&&tablica_testowa[i][j-3]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg3;}

                        if(i>=2&&tablica_testowa[i-1][j]==2&&tablica_testowa[i-2][j]&&tablica_testowa[i-3][j]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg3;}

                        if(j>=2&&i>=2&&tablica_testowa[i-1][j-1]==2&&tablica_testowa[i-2][j-2]&&tablica_testowa[i-3][j-3]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg3;}


    // /////////////////////////////////blokowanie przeciwnika///////////////////////////////


                        if(i<=11&&tablica_testowa[i+1][j]==2&&tablica_testowa[i+2][j]==2&&tablica_testowa[i+3][j]==2&&tablica_testowa[i+4][j]==0)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                        if(j<=11&&i<=11&&tablica_testowa[i+1][j+1]==2&&tablica_testowa[i+2][j+2]==2&&tablica_testowa[i+3][j+3]==2&&tablica_testowa[i+4][j+4]==0)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                        if(j<=11&&tablica_testowa[i][j+1]==2&&tablica_testowa[i][j+2]==2&&tablica_testowa[i][j+3]==2&&tablica_testowa[i][j+4]==0)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}
                        // góra i lewa

                        if(j>=3&&tablica_testowa[i][j-1]==2&&tablica_testowa[i][j-2]==2&&tablica_testowa[i][j-3]==2&&tablica_testowa[i][j-4]==0)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                        if(i>=3&&tablica_testowa[i-1][j]==2&&tablica_testowa[i-2][j]&&tablica_testowa[i-3][j]==2&&tablica_testowa[i-4][j]==0)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                        if(j>=3&&i>=3&&tablica_testowa[i-1][j-1]==2&&tablica_testowa[i-2][j-2]&&tablica_testowa[i-3][j-3]==2&&tablica_testowa[i-4][j-4]==0)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;}

      // /////////////////////////////////blokowanie przeciwnika (nieprzewidziany part2)///////////////////////////////

                        if(i<=11&&tablica_testowa[i+1][j]==2&&tablica_testowa[i+2][j]==2&&tablica_testowa[i+3][j]==2&&tablica_testowa[i+4][j]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                        if(j<=11&&i<=11&&tablica_testowa[i+1][j+1]==2&&tablica_testowa[i+2][j+2]==2&&tablica_testowa[i+3][j+3]==2&&tablica_testowa[i+4][j+4]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                        if(j<=11&&tablica_testowa[i][j+1]==2&&tablica_testowa[i][j+2]==2&&tablica_testowa[i][j+3]==2&&tablica_testowa[i][j+4]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}
                        // góra i lewa

                        if(j>=3&&tablica_testowa[i][j-1]==2&&tablica_testowa[i][j-2]==2&&tablica_testowa[i][j-3]==2&&tablica_testowa[i][j-4]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                        if(i>=3&&tablica_testowa[i-1][j]==2&&tablica_testowa[i-2][j]&&tablica_testowa[i-3][j]==2&&tablica_testowa[i-4][j]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;;}

                        if(j>=3&&i>=3&&tablica_testowa[i-1][j-1]==2&&tablica_testowa[i-2][j-2]&&tablica_testowa[i-3][j-3]==2&&tablica_testowa[i-4][j-4]==2)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pg_ultime;}

    // /////////////////////////////////!!wygrana!!///////////////////////////////

                        if(i<=11&&tablica_testowa[i+1][j]==1&&tablica_testowa[i+2][j]==1&&tablica_testowa[i+3][j]==1&&tablica_testowa[i+4][j]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk_ultime;;}

                        if(j<=11&&i<=11&&tablica_testowa[i+1][j+1]==1&&tablica_testowa[i+2][j+2]==1&&tablica_testowa[i+3][j+3]==1&&tablica_testowa[i+4][j+4]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk_ultime;;}

                        if(j<=11&&tablica_testowa[i][j+1]==1&&tablica_testowa[i][j+2]==1&&tablica_testowa[i][j+3]==1&&tablica_testowa[i][j+4]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk_ultime;;}
                        // góra i lewa

                        if(j>=3&&tablica_testowa[i][j-1]==1&&tablica_testowa[i][j-2]==1&&tablica_testowa[i][j-3]==1&&tablica_testowa[i][j-4]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk_ultime;;}

                        if(i>=3&&tablica_testowa[i-1][j]==1&&tablica_testowa[i-2][j]&&tablica_testowa[i-3][j]==1&&tablica_testowa[i-4][j]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk_ultime;;}

                        if(j>=3&&i>=3&&tablica_testowa[i-1][j-1]==1&&tablica_testowa[i-2][j-2]&&tablica_testowa[i-3][j-3]==1&&tablica_testowa[i-4][j-4]==1)
                        {tablica_testowa[i][j]=tablica_testowa[i][j]+pk_ultime;}

                    }

                 }
               }

        // znajdowanie najlepiej punktowanego miejsca

        int temp_wart=0;
        int temp_j=7;

                 for(i=0;i<rozmiar;i++){
                  for(j=0;j<rozmiar;j++){
                    if(tablica_testowa[i][j]>temp_wart){
                      temp_wart=tablica_testowa[i][j];
                      temp_j=i;
                      if(temp_j>15 )
                          temp_j=1;
                        }
                    }
                 }




    return (temp_j+1);

    for(int j1=0;j1<15;j1++){
        for(int i1=0;i1<15;i1++){
          tablica_testowa[i1][j1]=0;
            }
        }



    }




