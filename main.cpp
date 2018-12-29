#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

void changecol(int numofcol)
                            // GOTOWE
///////////////////////////////KOLORKI ////////////////////////////////////////////

{
HANDLE hWyj;
hWyj = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hWyj,numofcol);
}
int main()

{
  int wybor, c=0;                                    //GOTOWE
////////////////////////////// ROZMIAR OKIENKA (WSTEPU) ////////////////////////////////////
    {


    system("title Kudlate przygody");


    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT sr;

    sr.Left = 0;
    sr.Top = 0;
    sr.Right = 100;
    sr.Bottom = 50;
   SetConsoleWindowInfo(handle,true,&sr);
    }


                                       // GOTOWE
/////////////////////////////////////// WSTEP DO GRY ///////////////////////////////////////////
{
string a;
cout<<endl;
changecol(4);
cout<<"UWAGA ";cout<<" UWAGA ";cout<<"UWAGA ";cout<<" UWAGA ";cout<<"UWAGA ";cout<<" UWAGA ";cout<<" UWAGA ";cout<<"UWAGA ";cout<<" UWAGA ";cout<<" UWAGA ";cout<<" UWAGA ";cout<<"UWAGA ";cout<<" UWAGA ";
cout<<endl;
cout<<"----------------------------------------------------------------------------------------"<<endl;
changecol(15);
cout<<"PROSZE UZYWAC TYLKO LICZB W PROGRAMIE (WPISANIE LITERY SPOWODUJE CRASH GRY)"<<endl;
changecol(4);
cout<<"----------------------------------------------------------------------------------------";
cout<<endl;
cout<<endl;
changecol(15);

string tekst ="GRACZU, WITAJ W GRZE PT. KUDLATE PRZYGODY !" ;
for (int i = 0; i < tekst.length(); i++)
    {
        cout << tekst[i];
        Sleep(90); }
cout<<endl;
string wstep2 ="CZEKA CIE NIESAMOWITA PRZYGODA ! " ;
for (int i = 0; i < wstep2.length(); i++)
    {
        cout << wstep2[i];
        Sleep(90); }
cout<<endl;cout<<endl;
changecol(4);
cout<<" Kliknij dowolny przycisk aby przejsc do menu"<<endl;
changecol(0);system("pause");
changecol(1);
}
                                    //   GOTOWE
/////////////////////////////////////// MENU GRY //////////////////////////////////////////
{
int wybor, c=0;
    system("cls");
    cout<<endl;
poczatek:
cout<<"                                                                        Wersja gry : Alpha 1.0"<<endl;
changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;

changecol(4);
cout<<"                  witaj w menu gry !" ;changecol(6);cout<<"                  ===="<<endl;
changecol(2);
cout<<"                -------------------- ";changecol(6);cout<<"                 ===="<<endl;
changecol(4);
cout<<"1)";changecol(5);cout<<"                Nowa Gra";changecol(6);cout<<"                            ===="<<endl;changecol(5);
changecol(2);           cout<<"-----------------------------";cout<<"-------------------------";changecol(6);cout<<"===="<<endl;changecol(5);
changecol(4);
cout<<"2)";changecol(5);cout<<"                wczytaj gre";changecol(6);cout<<"                         ===="<<endl;changecol(5);
changecol(2);           cout<<"-----------------------------";cout<<"-------------------------";changecol(6);cout<<"===="<<endl;changecol(5);
changecol(4);
cout<<"3)";changecol(5);cout<<"                opcje gry";changecol(6);cout<<"                           ===="<<endl;changecol(5);
changecol(2);           cout<<"-----------------------------";cout<<"-------------------------";changecol(6);cout<<"===="<<endl;changecol(5);
changecol(4);
cout<<"4)";changecol(5);cout<<"                napisy";changecol(6);cout<<"                              ===="<<endl;changecol(5);
changecol(2);           cout<<"-----------------------------";cout<<"-------------------------";changecol(6);cout<<"===="<<endl;changecol(5);
changecol(4);
cout<<"5)";changecol(5);cout<<"                instrukcja gry";changecol(6);cout<<"                      ===="<<endl;changecol(5);
changecol(2);           cout<<"-----------------------------";cout<<"-------------------------";changecol(6);cout<<"===="<<endl;changecol(5);
changecol(4);
cout<<"6)";changecol(5);cout<<"                wyjscie z gry";changecol(6);cout<<"                       ===="<<endl;changecol(5);
changecol(2);           cout<<"-----------------------------";cout<<"-------------------------";changecol(6);cout<<"===="<<endl;changecol(5);

changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
changecol(4);
cout<<"A wiec postanowiles wybrac opcje nr : ";
changecol(15);
cin>>wybor;
cout<<endl;





                                       // DO ZROBIENIA TYLKO SAVE
/////////////////////////////////////    WYBORY  //////////////////////////////////////////////////
switch(wybor)
{
case 1:
system("cls");

 changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
    cout<<"wybrales nowa gre !"<<endl;
    goto nowagra;
changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
system("cls");
    break;
                                          // NIE GOTOWE
/////////////////////////////////////////// SAVE ///////////////////////////////////////////////
{
case 2:
        int a;
  system ("cls");
  zapis:
            changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
        changecol(15);
        cout<<"chcesz wczytac save!"<<endl;
        cout<<endl;cout<<endl;
    changecol(14);
        cout<<"ZAPIS NR 1."<<endl;
        cout<<" tu bedzie zapis"<<endl;
        cout<<"ZAPIS NR 2."<<endl;
        cout<<" tu bedzie zapis"<<endl;
        cout<<"ZAPIS NR 3."<<endl;
        cout<<"tu bedzie zapis"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
changecol(15);
cout<<"czy chcesz wrocic do menu ?"<<endl;
changecol(2);
cout<<"1> TAK CHCE"<<endl;
changecol(4);
cout<<"2> NIE, JESZCZE NIE"<<endl;
changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
changecol(15);
cin>>a;
if (a==1)
{
    system("cls");
    goto poczatek;
}
else
{
    system("cls");
    goto zapis;

}

break;
}
                                         // WKROTCE BEDZIE GOTOWE
            ////////////////////////////////////// OPCJE /////////////////////////////////////////
        {
        int a,b;
        case 3:

    system ("cls");
    opcje:

        changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
changecol(4);
        cout<<"opcje gry !"<<endl;
        cout<<endl;changecol(15);
cout<<"Opcji narazie nie ma :<";
cout<<endl;
cout<<endl;
cout<<endl;
changecol(15);
cout<<"czy chcesz wrocic do menu ?"<<endl;
changecol(2);
cout<<"1> TAK CHCE"<<endl;
changecol(4);
cout<<"2> NIE, JESZCZE NIE"<<endl;
changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
changecol(15);
cin>>a;
if (a==1)
{
    system("cls");
    goto poczatek;
}
else if(a==2)
{
    system("cls");
    goto opcje;

}
        }
                                            // GOTOWE
        ////////////////////////////////// CREDITSY //////////////////////////////////////////
        {

case 4:
    int a;

    system ("cls");
    napisy:
            changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
          system ("cls");
          changecol(8);

            cout<<"chcesz zobaczyc napisy !"<<endl;
changecol(5);
            cout<<"------------------------"<<endl;

    cout<<endl;
changecol(2);
    cout<<"                                      Prace nad gra rozpoczely sie : 19-12-2018 21:30"<<endl;
    cout<<endl;
changecol(8);
    cout<<"Gre wymyslili : "<<endl;

changecol(15);
        cout<<"KUDLATY"<<endl;

        cout<<"DANIOLEQQ"<<endl;
changecol(8);
        cout<<"Gre programowal : "<<endl;
changecol(15);
        cout<<"DANIOLEQQ"<<endl;
changecol(8);
        cout<<"Fabule opracowal : "<<endl;
changecol(15);
        cout<<"KUDLATY"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
changecol(4);
    cout<<"kliknij 1. aby wyjsc do menu"<<endl;
    changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
    changecol(15);
    cin>>a;
    if (a==1)
    {
        system ("cls");
    goto poczatek;

    }
    else
    {
        system("cls");
    goto napisy;
    }
changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
        break;
        }
                                            // GOTOWE
            /////////////////////////////////// INSTRUKCJA ////////////////////////////////////
{
int a;
        case 5:
            system ("cls");
changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
instrukcja1:
changecol(7);
            cout<<"      oto instrukcja gry"<<endl;
changecol(8);
            cout<<"       ------------------";
cout<<endl;
cout<<endl;
changecol(15);
        cout<<"O co chodzi w grze ? tu sie wszystkiego dowiesz"<<endl;
cout<<endl;
cout<<"Kudlate przygody to gra tekstowa w ktorej chodzi o "<<endl;
cout<<"wyobrazenie sobie przestrzeni w ktorej sie znajdujesz."<<endl;
cout<<"Gra opiera sie glownie na losowosci. Poszczegolne mechaniki"<<endl;;
cout<<" poznasz podczas samego grania."<<endl;
cout<<"W grze bedziesz mial mozliwosc wyborow, ktore moga"<<endl;
 cout<<"zmienic przebieg gry :) takze wybieraj madrze graczu."<<endl;
 cout<<endl;
  cout<<endl;
  changecol(1);
  cout<<"_____________________________________________________"<<endl;
  changecol(11);
  cout<<"*POSTACIE OZNACZONE TYM KOLOREM SA FABULARNE*"<<endl;
  cout<<endl;
  changecol(12);
  cout<<"*POSTACIE OZNACZONE TYM KOLOREM TO PRZECIWNICY*"<<endl;
  cout<<endl;
  changecol(6);
  cout<<"*POSTACIE OZNACZONE TYM KOLOREM TO ZWYCZAJNE NPC*"<<endl;
  cout<<endl;
  changecol(10);
  cout<<"*U NICH ZDABEDZIESZ MISJE*"<<endl;
   cout<<endl;
    changecol(1);
  cout<<"_____________________________________________________"<<endl;
  cout<<endl;

changecol(4);
cout<<"Kliknij ";
changecol(2);
cout<<"1.";
changecol(4);
cout<<" aby wrocic do menu gry"<<endl;
changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
changecol(15);
cin>>a;

if(a!=1)
{
system("cls");
goto instrukcja1;
}
else
{
system("cls");
goto poczatek;
}

break;
}
                                           //GOTOWE
         /////////////////////////////////// WYJSCIE Z GRY //////////////////////////////
      {

int a;

        case 6:
     system ("cls");
            changecol(6);
wyjscie:
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
changecol(15);
cout<<"Czy napewno chcesz wyjsc z gry ?"<<endl;
changecol(2);
cout<<"1> jesli TAK"<<endl;
changecol(12);
cout<<"2> jesli NIE"<<endl;
changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
changecol(15);
cin>>a;
if(a==1)
{
    changecol(0);
    return 0;
}
else if(a==2)
{
  system("cls");
goto poczatek;
}
else if (a!=1 || a!=2)
{
    cout<<"cos poszlo nie tak sprobuj jeszcze raz !"<<endl;
    system("cls");
    changecol(6);
    goto wyjscie;
}
break;
      }
                                           // GOTOWE
        ///////////////////////////////////// OPCJA DEFAULT ////////////////////////////////
        {


        default :
            system("cls");
            goto poczatek;
        break;


}
}
}
////////////////////////////////////////////// GRA ////////////////////////////////////////////////////

{


nowagra:
    system("cls");
int a;
int b,c;
changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
changecol(4);
    cout<<"wybrales nowa gre !"<<endl;
changecol(15);
    cout<<" Teraz czeka cie EPICKA przygoda !"<<endl;
changecol(6);
cout<<"======================================================="<<endl;
cout<<"======================================================="<<endl;
changecol(15);
cout<<"Kliknij dowolny przycisk aby kontynuowac."<<endl;
changecol(0);
system("pause");
Sleep(6);

system("cls");

changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
string tekst ="Wstawaj...obudz sie kudlaty...szybko nie ma czasu trzeba uciekac..." ;
for (int i = 0; i < tekst.length(); i++)
    {
        cout << tekst[i];
        Sleep(80); }
cout<<endl;
changecol(11);
cout<<"*Kudlaty*"<<endl;
changecol(15);
string tekst1 ="Co sie dzieje Migordzie?" ;
for (int i = 0; i < tekst1.length(); i++)
    {
        cout << tekst1[i];
        Sleep(80); }
cout<<endl;
cout<<endl;
changecol(2);
cout<<"*KUDLATY WSTAJE, SZYBKO UBIERA ZBROJE, BIERZE MIECZ*"<<endl;
cout<<endl;

changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
       string tekst2 ="Woje Gudra oblezyli nasze miasto, zburzyli wschodznie mury i zajeli rynek!" ;
for (int i = 0; i < tekst2.length(); i++)
    {
        cout << tekst2[i];
        Sleep(80); }
cout<<endl;
changecol(11);
cout<<"*Kudlaty*"<<endl;
changecol(15);
 string tekst3 ="Kurwa jak to sie stalo !?!?! gdzie byly straze czemu oni tego nie zauwazyli?";
for (int i = 0; i < tekst3.length(); i++)
    {
        cout << tekst3[i];
        Sleep(80); }
cout<<endl;
changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
      string tekst4 ="Straze zostaly zestrzelone przez lucznikow w nocy!" ;
for (int i = 0; i < tekst4.length(); i++)
    {
        cout << tekst4[i];
        Sleep(80); }
cout<<endl;
changecol(11);
cout<<"*Kudlaty*"<<endl;
changecol(15);
string tekst5 ="Jak do tego doszlo ?" ;
for (int i = 0; i < tekst5.length(); i++)
    {
        cout << tekst5[i];
        Sleep(80); }
cout<<endl;
changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
string tekst6 ="Chodz wytlumacze ci wszystko w bezpiecznym miejscu!" ;
for (int i = 0; i < tekst6.length(); i++)
    {
        cout << tekst6[i];
        Sleep(80); }
cout<<endl;

changecol(2);
cout<<endl;
cout<<endl;
cout<<"*Kudlaty i Migord wychodza z komnaty w kierunku tuneli ktore prowadza za mury miasta*"<<endl;
cout<<endl;

changecol(11);
cout<<"*Kudlaty*"<<endl;
changecol(15);
string tekst7 ="A moja zona i syn?! musze po nich wrocic!" ;
for (int i = 0; i < tekst7.length(); i++)
    {
        cout << tekst7[i];
        Sleep(80); }
cout<<endl;
changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
string tekst8 ="Kazalem ich odnalesc i uciec tunelami panie";
for (int i = 0; i < tekst8.length(); i++)
    {
        cout << tekst8[i];
        Sleep(80); }
        cout<<endl;
        cout<<endl;
opis1:
changecol(4);
cout<<"------------------------------------------------------------------------------"<<endl;
cout<<"Przed wyborem sciezki mozesz zobaczyc opis Postaci. "<<endl;
cout<<"------------------------------------------------------------------------------"<<endl;
changecol(3);cout<<"1)";changecol(15); cout<<"Opis Migorda !"<<endl;changecol(3);
cout<<"2)";changecol(15); cout<<"Opis Kudlatego !"<<endl;changecol(3);
cout<<"3)";changecol(15);cout<<"Przejdz dalej"<<endl;
changecol(4);
cout<<"------------------------------------------------------------------------------"<<endl;
changecol(15);
cin>>b;

if (b==1)
{
    changecol(4);
    cout<<"----------------------------------------------------------------------------------"<<endl;
    changecol(11);
    cout<<"*Migord* ";changecol(4);cout<<"- ";changecol(15);
    cout<<"'Straznik'(Sluga,obronca) Kudlatego.Kiedys byl poteznym magiem, ale podczas wojny w 3 erze  "<<endl;
    cout<<"inny czarnoksieznik wyssal z niego cala moc."<<endl;changecol(0);

    system("pause");
    goto opis1;
}
else if (b==2)
{
    changecol(4);
    cout<<"----------------------------------------------------------------------------------"<<endl;
   changecol(11);
    cout<<"*Kudlaty* ";changecol(4);cout<<"- ";changecol(15);
    cout<<"Krol... W sumie to dawny, jego miasto zostalo przejete przez wojow Gudra... "<<endl;
    cout<<"Kudlaty bedzie starac sie odzyskac ziemie ktore stracil do ostatniej krwi"<<endl;changecol(0);

    system("pause");
    goto opis1;
}
else if (b==3)
{
    goto dalej;
}
else if (b!=1||b!=2||b!=3)
{
    cout<<"nie ma takiej opcji. Sprobuj ponownie"<<endl;
    goto opis1;
}
dalej:
    changecol(4);
cout<<"----------------------------------------------------------------------"<<endl;
changecol(3);
cout<<"1>";changecol(15);cout<<" Podazaj tunelami dalej z Migordem"<<endl;cout<<endl;
changecol(3);cout<<"2>";changecol(15);cout<<" Wracasz sie po czym szukasz zony i syna"<<endl;
cout<<endl;
wybor2:
cout<<endl;
changecol(1);
cout<<"//Postanowiles wybrac obcje nr\\ : ";
changecol(2);
cin>>a;
changecol(15);
cout<<"----------------------------------------------------------------------"<<endl;
if(a==1)

{
    string a;
cout<<endl;cout<<endl;
changecol(11);
cout<<"*Kudlaty*"<<endl;
changecol(15);
       string tekst1 ="Jak cos im sie stanie to ujebe ci jajca!" ;
for (int i = 0; i < tekst1.length(); i++)
    {
        cout << tekst1[i];
        Sleep(80); }
cout<<endl;
changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
       string tekst2 ="..." ;
for (int i = 0; i < tekst2.length(); i++)
    {
        cout << tekst2[i];
        Sleep(80); }
cout<<endl;cout<<endl;
changecol(2);cout<<"*Po wyjsiu z tunelu zauwazyli statek na ktorym czekalo paru wojow*"<<endl;cout<<endl;

changecol(11);
cout<<"*Kudlaty*"<<endl;
changecol(15);
       string tekst3 ="Migordzie ile mozna na nich czekac? juz powinni tu byc!" ;
for (int i = 0; i < tekst3.length(); i++)
    {
        cout << tekst3[i];
        Sleep(80); }
cout<<endl;
changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
       string tekst4 ="Spokojnie panie! przybeda" ;
for (int i = 0; i < tekst4.length(); i++)
    {
        cout << tekst4[i];
        Sleep(80); }
cout<<endl;cout<<endl;
changecol(2);
cout<<"*Po chwili przybiegla zona bez syna*"<<endl;
cout<<endl;

changecol(11);
cout<<"*Kudlaty*"<<endl;
changecol(15);
       string tekst5 ="Gdzie jest onfryl?" ;
for (int i = 0; i < tekst5.length(); i++)
    {
        cout << tekst5[i];
        Sleep(80); }
cout<<endl;cout<<endl;
changecol(2);
cout<<"*rozplakana Arwena odpowiada*"<<endl;
cout<<endl;
changecol(11);
cout<<"*Arwena*"<<endl;
changecol(15);
       string tekst6 ="Nie zyje, Wojo Gudra przebil jego serce zatrutym mieczem" ;
for (int i = 0; i < tekst6.length(); i++)
    {
        cout << tekst6[i];
        Sleep(80); }
cout<<endl;cout<<endl;
changecol(2);
cout<<"*Kudlaty upada na kolana i zaczyna krzyczec[...]*"<<endl;
cout<<endl;

    {


       cout<<endl;
changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
       string tekst ="Panie musimy odplywac" ;
for (int i = 0; i < tekst.length(); i++)
    {
        cout << tekst[i];
        Sleep(80); }

cout<<endl;
changecol(11);
cout<<"*Kudlaty*"<<endl;
changecol(15);
       string tekst1 ="..." ;
for (int i = 0; i < tekst1.length(); i++)
    {
        cout << tekst1[i];
        Sleep(80); }

cout<<endl;
changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
       string tekst2 ="Wioslowac" ;
for (int i = 0; i < tekst2.length(); i++)
    {
        cout << tekst2[i];
        Sleep(80); }
cout<<endl;cout<<endl;
changecol(2);
cout<<"*Po wyplynieciu z rzeki na morze otwarte*"<<endl;

cout<<endl;
changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
       string tekst3 ="Panie co rozkazesz" ;
for (int i = 0; i < tekst3.length(); i++)
    {
        cout << tekst3[i];
        Sleep(80); }



cout<<endl;
changecol(11);
cout<<"*Kudlaty*"<<endl;
changecol(15);
       string tekst4 ="Plyniemy do mojego przyjaciela..." ;
for (int i = 0; i < tekst4.length(); i++)
    {
        cout << tekst4[i];
        Sleep(80); }


    }


changecol(0);
system("pause");


}


else if (a==2)
{
int liczba,liczba1,liczba2,liczba3,liczba4;
cout<<endl;
changecol(2);
cout<<"*Kudlaty wyrywa sie z uscisku Migorda, biegnie w kierunku komnaty."<<endl;
cout<<"Po wyjsciu z tunelu do budynku widzi powalonego woja z synem i zona "<<endl;
cout<<"a przed nimi wojownik Gudra.Kudlaty podbiega z mieczem do wojownika...*"<<endl;
changecol(0);system("pause");
cout<<endl;
changecol(11);
cout<<"//ZACZYNA SIE WALKA !//"<<endl;changecol(4);
cout<<"Kudlaty 100HP  ";cout<<"  Wojownik Gudra  100hp"<<endl;



changecol(15);
       string tekst1 ="Kudlaty zadaje " ;
for (int i = 0; i < tekst1.length(); i++)
                    {
        cout << tekst1[i];
        Sleep(100); }
        {
srand(time(NULL));
    liczba= rand()%70+15;
    changecol(4);
    cout<<liczba;
    changecol(15);
    cout<<" DMG"<<endl;
    changecol(0);system("pause");
}

    changecol(15);
       string tekst2 ="Wojownik Gudra zadaje " ;
for (int i = 0; i < tekst2.length(); i++)
                    {
        cout << tekst2[i];
        Sleep(100); }
    {
    srand(time(NULL));
    liczba1= rand()%15+1;
    changecol(4);
    cout<<liczba1;
    changecol(15);
    cout<<" DMG"<<endl;
    changecol(0);system("pause");
    }

    changecol(15);
       string tekst3 ="Kudlaty zadaje " ;
for (int i = 0; i < tekst3.length(); i++)
                    {
        cout << tekst3[i];
        Sleep(100); }
    {
    srand(time(NULL));
    liczba2= rand()%70+5;
    changecol(4);
    cout<<liczba2;
    changecol(15);
    cout<<" DMG"<<endl;
    changecol(0);system("pause");
    }

    changecol(15);
       string tekst4 ="Wojownik Gudra zadaje " ;
for (int i = 0; i < tekst4.length(); i++)
                {
        cout << tekst4[i];
        Sleep(100); }
  {

    srand(time(NULL));
    liczba3=rand()%10+1;
    changecol(4);
    cout<<liczba3;
    changecol(15);
    cout<<" DMG"<<endl;
    changecol(0);system("pause");
  }



      if(liczba+liczba2>=100)
      {
cout<<endl;
changecol(2);
cout<<"*Kudlaty wygrywa starcie*"<<endl;
changecol(0);system("pause");


cout<<endl;
changecol(2);
cout<<"*Kudlaty upada na kolana lapiac sie za brzuch na ktorym*"<<endl;
cout<<" byla rana cieta, zona podbiegla chwytajac go i ciagnac"<<endl;
cout<<" w kierunku tunelu... Po wyjsciu z tunelu zauwazyli statek"<<endl;
cout<<" na ktorym czekalo paru wojownikow*"<<endl;
}
if(liczba1+liczba3>=100)
{
    cout<<"przegrales"<<endl;
}
else if(liczba+liczba2<=99)
{
changecol(15);
       string tekst1 ="Kudlaty zadaje " ;
for (int i = 0; i < tekst1.length(); i++)

{
cout << tekst1[i];
Sleep(100);
}
{
srand(time(NULL));
    liczba= rand()%70+1;
    changecol(4);
    cout<<liczba;
    changecol(15);
    cout<<" DMG"<<endl;
    changecol(0);system("pause");
cout<<endl;
changecol(2);
cout<<"*Kudlaty wygrywa starcie*"<<endl;
changecol(0);system("pause");
cout<<endl;
changecol(2);
cout<<"*Kudlaty upada na kolana lapiac sie za brzuch na ktorym*"<<endl;
cout<<" byla rana cieta, zona podbiegla chwytajac go i ciagnac"<<endl;
cout<<" w kierunku tunelu... Po wyjsciu z tunelu zauwazyli statek"<<endl;
cout<<" na ktorym czekalo paru wojownikow*"<<endl;
goto kontynuacja;
}
changecol(0);
system("pause");
}


{
kontynuacja:

       cout<<endl;
changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
       string tekst ="Panie musimy odplywac" ;
for (int i = 0; i < tekst.length(); i++)
    {
        cout << tekst[i];
        Sleep(80); }
cout<<endl;
changecol(11);
cout<<"*Kudlaty*"<<endl;
changecol(15);
       string tekst1 ="..." ;
for (int i = 0; i < tekst1.length(); i++)
    {
        cout << tekst1[i];
        Sleep(80); }
cout<<endl;
changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
       string tekst2 ="Wioslowac" ;
for (int i = 0; i < tekst2.length(); i++)
    {
        cout << tekst2[i];
        Sleep(80); }
cout<<endl;
changecol(2);
cout<<"*Po wyplynieciu z rzeki na morze otwarte*"<<endl;

cout<<endl;
changecol(11);
cout<<"*Migord*"<<endl;
changecol(15);
       string tekst3 ="Panie co rozkazesz" ;
for (int i = 0; i < tekst3.length(); i++)
    {
        cout << tekst3[i];
        Sleep(80); }
cout<<endl;
changecol(11);
cout<<"*Kudlaty*"<<endl;
changecol(15);
       string tekst4 ="Plyniemy do mojego przyjaciela..." ;
for (int i = 0; i < tekst4.length(); i++)
    {
        cout << tekst4[i];
        Sleep(80); }
        changecol(0);
        system("pause");

goto fabula;

}
    fabula:
{
    cout<<endl;
}

return 0;


}
else if (a!=1||a!=2)
{
cout<<"nie ma takiego wyboru !"<<endl;
        goto wybor2;
    }
}
}



