#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct karta{
    string nazov;
    int hodnota;
};

void Vytajte(){
    cout << "vitajte v mojej hre!" << endl;
}

void repeat(){
   karta prva = {
      "eso",
      1
  };
    karta druha = {
      "dvojka",
      2
  };  
    karta tretia = {
      "trojka",
      3
  };
    karta stvrta = {
      "stvorka",
      4
  };
    karta piata = {
      "patka",
      5
  };
  karta siesta = {
      "sestka",
      6
  };
  karta siedma = {
      "sedmicka",
      7
  };
  karta osma = {
      "osmicka",
      8
  };
    karta deviata = {
      "deviatka",
      9
  };
  karta desiata = {
      "desiatka",
      10
  };
  karta jedenasta = {
      "jack",
      11
  };
  karta dvanasta = {
      "kralovna",
      12
  };
  karta trinasta = {
      "kral",
      13
  };
  karta strnasta = {
      "zolik",
      14
  };
   
    Vytajte();
    cout << prva.nazov << " = " << prva.hodnota <<endl;
    cout << druha.nazov << " = " << druha.hodnota <<endl;
    cout << tretia.nazov << " = " << tretia.hodnota <<endl;
    cout << stvrta.nazov << " = " << stvrta.hodnota <<endl;
    cout << piata.nazov << " = " << piata.hodnota <<endl;
    cout << siesta.nazov << " = " << siesta.hodnota <<endl;
    cout << siedma.nazov << " = " << siedma.hodnota <<endl;
    cout << osma.nazov << " = " << osma.hodnota <<endl;
    cout << deviata.nazov << " = " << deviata.hodnota <<endl;
    cout << desiata.nazov << " = " << desiata.hodnota <<endl;
    cout << jedenasta.nazov << " = " << jedenasta.hodnota <<endl;
    cout << dvanasta.nazov << " = " << dvanasta.hodnota <<endl;
    cout << trinasta.nazov << " = " << trinasta.hodnota <<endl;
    cout << strnasta.nazov << " = " << strnasta.hodnota <<endl;
    cout << "kolko chcete vlozit?" << endl;
    float badzet;
    float stavka;
    cin >> badzet;
    cout << "vlozili ste: " << badzet << "EUR" << endl;
    cout << "kolko chcete stavit?" << endl;
    cin >> stavka;
    cout << "stavili ste " << stavka << "EUR" << endl;
    srand((unsigned) time(0));
    int random_cislo = 1 + (rand() % 14);
    cout << "prva karta je: ";
    cout << prva.nazov << " " << prva.hodnota << endl;
    cout<< "druha bude vacsia alebo mensia? (v-m)"<<endl;
    string a;
    int score = 0;
    
    cin>>a;
    if(a == "v"){
        if(random_cislo > prva.hodnota){
            cout << "vyhral si!"<< endl;
            badzet = badzet + stavka;
            cout << "zarobil si " << stavka << " teraz mas " << badzet << endl; 
            score++;
        }
        else if(random_cislo < prva.hodnota){
            cout << "prehral si!" << endl;
            badzet = badzet - stavka;
            cout << "prisiel si o " << stavka << " ostava ti este " << badzet << endl;
        }
        else{
            cout << "nieco sa pokazilo skus to este raz"<< endl;
        }
    }
    if(a == "m"){
        if(random_cislo < prva.hodnota){
            cout << "vyhral si!"<< endl;
            badzet = badzet + stavka;
            cout << "zarobil si " << stavka << " teraz mas " << badzet << endl;
            score++;
        }
        else if(random_cislo > prva.hodnota){
            cout << "prehral si!" << endl;
            badzet = badzet - stavka;
            cout << "prisiel si o " << stavka << " ostava ti este " << badzet << endl;
        }
        else{
            cout << "nieco sa pokazilo skus to este raz"<< endl;
        }
    }

    cout<< "dalsia ma hodnotu:"<< random_cislo <<endl;
    cout<< "druha bude vacsia alebo mensia? v-m" << endl;
    srand((unsigned) time(0));
    int random_cislo2 = 1 + (rand() % 14);
    string b;
    cin >> b;
    if(b == "v"){
        if(random_cislo2 > random_cislo){
            cout << "vyhral si!"<< endl;
            badzet = badzet + stavka;
            cout << "zarobil si " << stavka << " teraz mas " << badzet << endl;
            score++;
        }
        else if(random_cislo2 < random_cislo){
            cout << "prehral si!" << endl;
            badzet = badzet - stavka;
            cout << "prisiel si o " << stavka << " ostava ti este " << badzet << endl;
        }
        else{
            cout << "nieco sa pokazilo skus to este raz"<< endl;
        }
    }
    if(b == "m"){
        if(random_cislo2 < random_cislo){
            cout << "vyhral si!"<< endl;
            badzet = badzet + stavka;
            cout << "zarobil si " << stavka << " teraz mas " << badzet << endl;
            score++;
        }
        else if(random_cislo2 > random_cislo){
            cout << "prehral si!" << endl;
            badzet = badzet - stavka;
            cout << "prisiel si o " << stavka << " ostava ti este " << badzet << endl;
        }
        else{
            cout << "nieco sa pokazilo skus to este raz"<< endl;
        }
    }

    cout<< "dalsia ma hodnotu:"<< random_cislo2 <<endl;
    cout<< "druha bude vacsia alebo mensia? v-m" << endl;
    srand((unsigned) time(0));
    int random_cislo3 = 1 + (rand() % 14);
    string c;
    cin >> c;
    if(c == "v"){
        if(random_cislo3 > random_cislo2){
            cout << "vyhral si!"<< endl;
            badzet = badzet + stavka;
            cout << "zarobil si " << stavka << " teraz mas " << badzet << endl;
            score++;
        }
        else if(random_cislo3 < random_cislo2){
            cout << "prehral si!" << endl;
            badzet = badzet - stavka;
            cout << "prisiel si o " << stavka << " ostava ti este " << badzet << endl;
        }
        else{
            cout << "nieco sa pokazilo skus to este raz"<< endl;
        }
    }
    if(c == "m"){
        if(random_cislo3 < random_cislo2){
            cout << "vyhral si!"<< endl;
            badzet = badzet + stavka;
            cout << "zarobil si " << stavka << " teraz mas " << badzet << endl;
            score++;
        }
        else if(random_cislo3 > random_cislo2){
            cout << "prehral si!" << endl;
            badzet = badzet - stavka;
            cout << "prisiel si o " << stavka << " ostava ti este " << badzet << endl;
        }
        else{
            cout << "nieco sa pokazilo skus to este raz"<< endl;
        }
    }
    cout << "tvoje score je:" << score << " z 3"<< endl;
    cout << "ak chcete pokracovat stlacte a ak nie tak n"<< endl;
    string odpoved;
    cin >> odpoved;
    if(odpoved == "a")
    {
        repeat();
    }
    else if(odpoved == "n"){
        
    }
}

int main() {
  karta prva = {
      "eso",
      1
  };
    karta druha = {
      "dvojka",
      2
  };  
    karta tretia = {
      "trojka",
      3
  };
    karta stvrta = {
      "stvorka",
      4
  };
    karta piata = {
      "patka",
      5
  };
  karta siesta = {
      "sestka",
      6
  };
  karta siedma = {
      "sedmicka",
      7
  };
  karta osma = {
      "osmicka",
      8
  };
    karta deviata = {
      "deviatka",
      9
  };
  karta desiata = {
      "desiatka",
      10
  };
  karta jedenasta = {
      "jack",
      11
  };
  karta dvanasta = {
      "kralovna",
      12
  };
  karta trinasta = {
      "kral",
      13
  };
  karta strnasta = {
      "zolik",
      14
  };
   
    Vytajte();
    cout << prva.nazov << " = " << prva.hodnota <<endl;
    cout << druha.nazov << " = " << druha.hodnota <<endl;
    cout << tretia.nazov << " = " << tretia.hodnota <<endl;
    cout << stvrta.nazov << " = " << stvrta.hodnota <<endl;
    cout << piata.nazov << " = " << piata.hodnota <<endl;
    cout << siesta.nazov << " = " << siesta.hodnota <<endl;
    cout << siedma.nazov << " = " << siedma.hodnota <<endl;
    cout << osma.nazov << " = " << osma.hodnota <<endl;
    cout << deviata.nazov << " = " << deviata.hodnota <<endl;
    cout << desiata.nazov << " = " << desiata.hodnota <<endl;
    cout << jedenasta.nazov << " = " << jedenasta.hodnota <<endl;
    cout << dvanasta.nazov << " = " << dvanasta.hodnota <<endl;
    cout << trinasta.nazov << " = " << trinasta.hodnota <<endl;
    cout << strnasta.nazov << " = " << strnasta.hodnota <<endl;
    cout << "kolko chcete vlozit?" << endl;
    float badzet;
    float stavka;
    cin >> badzet;
    cout << "vlozili ste: " << badzet << "EUR" << endl;
    cout << "kolko chcete stavit?" << endl;
    cin >> stavka;
    cout << "stavili ste " << stavka << "EUR" << endl;
    srand((unsigned) time(0));
    int random_cislo = 1 + (rand() % 14);
    cout << "prva karta je: ";
    cout << prva.nazov << " " << prva.hodnota << endl;
    cout<< "druha bude vacsia alebo mensia? (v-m)"<<endl;
    string a;
    int score = 0;
    
    cin>>a;
    if(a == "v"){
        if(random_cislo > prva.hodnota){
            cout << "vyhral si!"<< endl;
            badzet = badzet + stavka;
            cout << "zarobil si " << stavka << " teraz mas " << badzet << endl; 
            score++;
        }
        else if(random_cislo < prva.hodnota){
            cout << "prehral si!" << endl;
            badzet = badzet - stavka;
            cout << "prisiel si o " << stavka << " ostava ti este " << badzet << endl;
        }
        else{
            cout << "nieco sa pokazilo skus to este raz"<< endl;
        }
    }
    if(a == "m"){
        if(random_cislo < prva.hodnota){
            cout << "vyhral si!"<< endl;
            badzet = badzet + stavka;
            cout << "zarobil si " << stavka << " teraz mas " << badzet << endl;
            score++;
        }
        else if(random_cislo > prva.hodnota){
            cout << "prehral si!" << endl;
            badzet = badzet - stavka;
            cout << "prisiel si o " << stavka << " ostava ti este " << badzet << endl;
        }
        else{
            cout << "nieco sa pokazilo skus to este raz"<< endl;
        }
    }

    cout<< "dalsia ma hodnotu:"<< random_cislo <<endl;
    cout<< "druha bude vacsia alebo mensia? v-m" << endl;
    srand((unsigned) time(0));
    int random_cislo2 = 1 + (rand() % 14);
    string b;
    cin >> b;
    if(b == "v"){
        if(random_cislo2 > random_cislo){
            cout << "vyhral si!"<< endl;
            badzet = badzet + stavka;
            cout << "zarobil si " << stavka << " teraz mas " << badzet << endl;
            score++;
        }
        else if(random_cislo2 < random_cislo){
            cout << "prehral si!" << endl;
            badzet = badzet - stavka;
            cout << "prisiel si o " << stavka << " ostava ti este " << badzet << endl;
        }
        else{
            cout << "nieco sa pokazilo skus to este raz"<< endl;
        }
    }
    if(b == "m"){
        if(random_cislo2 < random_cislo){
            cout << "vyhral si!"<< endl;
            badzet = badzet + stavka;
            cout << "zarobil si " << stavka << " teraz mas " << badzet << endl;
            score++;
        }
        else if(random_cislo2 > random_cislo){
            cout << "prehral si!" << endl;
            badzet = badzet - stavka;
            cout << "prisiel si o " << stavka << " ostava ti este " << badzet << endl;
        }
        else{
            cout << "nieco sa pokazilo skus to este raz"<< endl;
        }
    }

    cout<< "dalsia ma hodnotu:"<< random_cislo2 <<endl;
    cout<< "druha bude vacsia alebo mensia? v-m" << endl;
    srand((unsigned) time(0));
    int random_cislo3 = 1 + (rand() % 14);
    string c;
    cin >> c;
    if(c == "v"){
        if(random_cislo3 > random_cislo2){
            cout << "vyhral si!"<< endl;
            badzet = badzet + stavka;
            cout << "zarobil si " << stavka << " teraz mas " << badzet << endl;
            score++;
        }
        else if(random_cislo3 < random_cislo2){
            cout << "prehral si!" << endl;
            badzet = badzet - stavka;
            cout << "prisiel si o " << stavka << " ostava ti este " << badzet << endl;
        }
        else{
            cout << "nieco sa pokazilo skus to este raz"<< endl;
        }
    }
    if(c == "m"){
        if(random_cislo3 < random_cislo2){
            cout << "vyhral si!"<< endl;
            badzet = badzet + stavka;
            cout << "zarobil si " << stavka << " teraz mas " << badzet << endl;
            score++;
        }
        else if(random_cislo3 > random_cislo2){
            cout << "prehral si!" << endl;
            badzet = badzet - stavka;
            cout << "prisiel si o " << stavka << " ostava ti este " << badzet << endl;
        }
        else{
            cout << "nieco sa pokazilo skus to este raz"<< endl;
        }
    }
    cout << "tvoje score je:" << score << " z 3"<< endl;
    cout << "ak chcete pokracovat stlacte a ak nie tak n"<< endl;
    string odpoved;
    cin >> odpoved;
    if(odpoved == "a")
    {
        repeat();
    }
    else if(odpoved == "n"){
        return 0;
    }
  return 0;
}