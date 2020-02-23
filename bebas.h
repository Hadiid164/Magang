/* File      : bebas.h */
/* Tanggal   : 21 Februari 2020 */
/* Topik     : Tugas cakru programming pandago pertama */

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <sstream>
#ifndef BEBAS_H
#define BEBAS_H

#include "boolean.h"

string ke_str(int N){
    string z;
    z.push_back((char)(N+'0'));
    return z;
}


void PrintHaiNTimes (int N){
/* Menulis "Hai" diakhiri newline sebanyak N kali */
	int i = 0;
	while(i<N){
		printf("Hai\n");
		i += 1;
	}
}


void GanjilOrGenap (int X){
/* Jika X adalah bilangan ganjil maka muncul pesan
*/
/*    std::string Xstr = to_string(X);
*/

    string Xstr = ke_str(X);
	if(X%2==0){
		cout<<Xstr +" adalah bilangan genap"<<endl;
	}
	else{
		cout<<Xstr + " adalah bilangan ganjil\n"<<endl;
	}
}

int DeretArit50 ();
/* Menghasilkan nilai dari 
   1 + 2 + 3 + ... + 50     */
/* Harus dikerjakan menggunakan sistem looping (for atau while) */

void ModNumber (int X, int Y){
/* Mengirimkan hasil dari X mod Y ke layar (diakhiri newline) */
/* Contoh : X = 10; Y = 3
   Output : 
   Hasil dari 10 mod 3 adalah 1 */
   int Z = Z%Y;
   cout<<"Hasil dari " +ke_str(X) + " mod "+ke_str(Y)+" adalah " ke_str(Z)<<endl;

}
int TambahOrKurang (int A, int B, int C);
/* Jika A adalah ganjil maka menghasilkan nilai dari
   pertambahan B dan C */
/* Jika sebaliknya maka menghasilkan pengurangan dari B oleh C */

boolean IsPrima (int X);
/* Mengirimkan true jika X adalah bilangan prima */
/* Asumsi : X <= 10 */

#endif