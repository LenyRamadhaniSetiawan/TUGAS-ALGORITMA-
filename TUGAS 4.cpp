/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int HP;
    int Serang = 120;
    int Medicalkit = 5;
    int Pertolongan = 3;
    
    int Musuh = 2000;
    int Serangan = 500;
    
    string Karakter;
    string Pilihan;
    string Jenis;
    string Senjata;
    string Pahwalan;
    string Akibat;
    
    cout << "\033[2J\033[1;1H";
    cout<< " KK   KK      AA      RRRRRR   DD D         AA      SSS    HH  HH   IIII       AA      NN      NN"  << endl;
    cout<< " KK KK       AAAA     RR  RR   DD  DDD     AAAA    SS      HH  HH    II       AAAA     NN NN   NN"  << endl;
    cout<< " KKK        AAAAAA    RRRR     DD  DDD    AAAAAA      SS   HHHHHH    II      AAAAAA    NN  NN  NN"  << endl;
    cout<< " KK KK     AA    AA   RR RR    DD  DD    AA    AA      SS  HH  HH    II     AA    AA   NN    N NN"  << endl;
    cout<< " KK   KK  AA      AA  RR   RR  DD D     AA      AA  SSS    HH  HH   IIII   AA      AA  NN      NN"  << endl;  
    cout<<  endl;
    cout<< "          KK   KK   IIII   NN      NN    GGGG   DD D         O00      MM M     M MM   " << endl;
    cout<< "          KK KK      II    NN NN   NN  GG       DD  DDD    OO   OO    MM  M  M   MM   " << endl;
    cout<< "          KKK        II    NN  NN  NN  GG GGGG  DD  DDD    OO   OO    MM    MM   MM   " << endl;
    cout<< "          KK KK      II    NN    N NN  GG    G  DD  DD     OO   OO    MM         MM   " << endl;
    cout<< "          KK   KK   IIII   NN      NN   GGGGG   DD D         OOO      MM         MM   " << endl;
    
    cout << endl;
    cout << " KETIK APAPUN UNTUK MENGETAHUI KISAH KARDASHIAN KINGDOM :";
    cin  >>   Pilihan;
    
    
    // kisah cerita dari kardashian kingdom // 
    cout << "\033[2J\033[1;1H"; 
    cout << " ************************************************" << endl;
    cout << " ************************************************" << endl;
    cout << " **              KARDASHIAN KINGDOM            **" << endl;
    cout << " ************************************************" << endl;
    cout << " **         WHAT IS KARDASHIAN KINGDOM ?       **" << endl;
    cout << " **     SEBUAH KERAJAAN YANG DIPIMPIN OLEH     **" << endl;
    cout << " **     KING ROBERT DAN IA MEMILIKI PRINCES    **" << endl;
    cout << " **     BERNAMA KYLEE SEORANG PUTRI CANTIK     **" << endl;
    cout << " ************************************************" << endl;
    cout << " ************************************************" << endl;
    cout << endl;
    
    cout << "KETIK APAPUN UNTUK MELANJUTKAN KISAH KARDASHIAN KINGDOM :";
    cin  >>   Pilihan;
     
    
    // kylee dan kerajaannya //
    cout << "\033[2J\033[1;1H";
    cout << " **************************************************************** " << endl;
    cout << " **************************************************************** " << endl;
    cout << " **          DISUATU MALAM YANG INDAH KING ROBERT              ** " << endl;
    cout << " **          MENGADAKAN PESTA ULANG TAHUN PRINCES              ** " << endl;
    cout << " **         KYLEE, RAJA & RATU MENGUNDANG KERAJAAN             ** " << endl;
    cout << " **      NEGERI SEBELAH, PESTA BERJALAN DENGAN MERIAH          ** " << endl;
    cout << " **   HINGGA TEPAT JAM 22.00 PUTRI DI KABARKAN MENHILANG       ** " << endl;
    cout << " **  RAJA MENGERAHKAN PRAJURIT UNTUK MENCARI SANG PRINCESS     ** " << endl;
    cout << " **   TETAPI HINGGA 2 HARI PRINCESS TIDAK BISA D TEMUKAN       ** " << endl;
    cout << " ** RAJA MENGADAKAN SAYEMBARA SIAPAPUN YANG BISA MENEMUKAN     ** " << endl;
    cout << " **    SANG PRINCESS AKAN MENDAPATKAN IMBALAN 1MILLION         ** " << endl;
    cout << " **************************************************************** " << endl;
    cout << " **************************************************************** " << endl;
    cout << endl;
    
    cout << " KETIK APAPUN UNTUK MEMULAI SAYEMBARA :";
    cin  >>   Pilihan;
    
    while(true){
    // karakter untuk berperang //    
    cout << " \033[2J\033[1;1H";
    cout << " \033[31m*************************************\033[0m" << endl;
    cout << " \033[31m--------SAYEMBARA DIMULAIIII---------\033[0m" << endl;
    cout << " \033[31m*************************************\033[0m" << endl;
    cout << endl << endl;

    cout << " \033[31m*************************************\033[0m" << endl;
    cout << " \033[31m**       TENTUKAN JAGOANMU         **\033[0m" << endl;
    cout << " \033[31m**                                 **\033[0m" << endl;
    cout << " \033[31m*************************************\033[0m" << endl;
    cout << " \033[31m**       1. RAKYAT BIASA           **\033[0m" << endl;
    cout<<  " \033[31m*************************************\033[0m" << endl;
    cout << " \033[31m**          2. PRAJURIT            **\033[0m" << endl;
    cout<<  " \033[31m*************************************\033[0m" << endl;
    cout << " \033[31m**    3 PANGERAN NEGERI SEBELAH    **\033[0m" << endl;
    cout << " \033[31m*************************************\033[0m" << endl;
    
    cout << endl;
    cout << " TENTUKAN JAGOAN PILIHANMU : ";
    cin  >> Karakter;
    
        if(Karakter=="1"){
        Pahwalan="RAKYAT BIASA";
        break;
        }
    
        else if(Karakter=="2"){
        Pahwalan="PRAJURIT";
        break;
        }
    
        else if(Karakter=="3"){
        Pahwalan="PANGERAN NEGERI SEBELAH";
        break;
        }
        
        else{
        continue;
        }
        
    }
    
    
    cout << " ANDA MEMILIH " << Pahwalan << " UNTUK BERTARUNG DI SAYEMBARA INI" << endl << endl;
    
    cout << " KETIK APA SAJA UNTUK MEMILIH ALAT PERANG MU : ";
    cin  >>   Pilihan;
    
    while(true){
    // alat perang //    
    cout << " \033[2J\033[1;1H";    
    cout << " \033[31m****************\033[0m" << endl;
    cout << " \033[31m***ALATPERANG***\033[0m" << endl;
    cout << " \033[31m****************\033[0m" << endl;
    cout << " \033[31m** 1.TOMBAK   **\033[0m" << endl;
    cout << " \033[31m****************\033[0m" << endl;
    cout << " \033[31m** 2.PANAHAN  **\033[0m" << endl;
    cout << " \033[31m****************\033[0m" << endl;
    cout << " \033[31m** 3.SAMURAI  **\033[0m" << endl;
    cout << " \033[31m****************\033[0m" << endl;
    
    cout << endl;
    cout << " ALAT PERANG YANG MAU KAMU PAKAI : ";
    cin  >> Senjata;
    
    
    if(Senjata=="1"){
        Jenis="TOMBAK";
        cout <<" \033[1;31m ===================================>\033[0m "<<endl;
        HP = 1000;
        break;
        }
    
        else if(Senjata=="2"){
        Jenis="PANAHAN";
        cout <<" \033[1;31m     *           \033[0m "<<endl;
        cout <<" \033[1;31m   *   *         \033[0m "<<endl;
        cout <<" \033[1;31m  *======*=====> \033[0m "<<endl;
        cout <<" \033[1;31m   *   *         \033[0m "<<endl;
        cout <<" \033[1;31m     *           \033[0m "<<endl;
        HP = 1600;
        break;
        }
    
        else if(Senjata=="3"){
        Jenis="SAMURAI";
        cout <<" \033[1;31m    ||          \033[0m "<<endl;
        cout <<" \033[1;31m=====|=========>\033[0m "<<endl;
        cout <<" \033[1;31m    ||          \033[0m "<<endl;
        HP = 2100;
        break;
        }
        
        else{
        continue;
        }

    }
    
    cout << endl;
    cout << " ANDA MENGGUNAKAN " << Jenis << " SEBAGAI KEKUATANMU" << endl;
    cout << endl;
    cout << " JADI PILIHAN JAGOANMU IALAH " << Pahwalan << " ,DENGAN MENGGUNAKAN ALAT PERANG " << Jenis << endl;
    cout << endl;
    cout <<" DENGAN KEKUATAN SENJATA SEBESAR: "   << HP << endl;
    
    cout << endl;
    cout << " KETIK APAPUN UNTUK MEMULAI BERTARUHAN : ";
    cin  >>   Pilihan;
    
    while(true){
    // gameeee //    
    cout << "\033[2J\033[1;1H";
    cout <<" JAGOANMU IALAH " << Pahwalan << ", MENGGUNAKAN " << Jenis << endl;
    cout << endl;
    cout <<" DENGAN KEKUATAN SENJATA SEBESAR: "   << HP << endl; 
    
    cout << endl;
    cout <<" KEKUATANKU  = " << HP << endl;
    cout <<" PENCULIK JELEK = " << Musuh << endl;
    
    cout << endl; 
    cout << Akibat;
    
    cout << endl;
    cout <<" 1. SERANG PENCULIK " << endl;
    cout <<" 2. MEDICALKIT          " << endl;
    cout <<" 3. PERTOLONGAN     " << endl;
    
    cout << endl;
    cout <<" PILIHANMU : ";
    cin  >>  Pilihan;
    
        if(Pilihan=="1"){
        HP -= Serangan;
        Musuh -= Serang; 
      
        }
    
        else if(Pilihan=="2"){
        
            if(Medicalkit >= 1){
            HP += 500;
        
            Medicalkit -= 1;
            
            cout << endl;
            Akibat = " BERHASIL MENGGUNAKAN MEDICALKIT";
        
            }
        
            else if(Medicalkit < 1){
        
            cout << endl;
            Akibat = " MEDICALKIT KAMU TELAH HABIS";
        
            }
            
        }
    
        else if(Pilihan=="3"){
            
            if(Pertolongan >= 1){
            HP -= Serangan;
            Musuh -= Serang + 500;
        
            Pertolongan -= 1;
            
            Akibat = " KAMU BERHASIL DITOLONG";
            
            }
        
            else if(Pertolongan < 1){
        
            Akibat = " KAMU TIDAK MEMILIKI PERTOLONGAN";
        
            }
        
        }

            if(HP <= 0){
            cout << " KAMU TERBUNUH OLEH PENCULIK ";
            break;
            }
            
            if(Musuh <= 0){
            cout << " KAMU BERHASIL MENGALAHKAN PENCULIK & MENDAPATKAN PRINCESS,";
            cout << " SELAMAT KAMU MENDAPATKAN 1 MILLION DARI KING";
            break;
            }
    
        continue;
    
    }

    return 0;
}
    
    