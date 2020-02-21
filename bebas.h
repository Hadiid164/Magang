/* File      : bebas.h */
/* Tanggal   : 21 Februari 2020 */
/* Topik     : Tugas cakru programming pandago pertama */

#ifndef BEBAS_H
#define BEBAS_H

#include "boolean.h"

void PrintHaiNTimes (int N);
/* Menulis "Hai" diakhiri newline sebanyak N kali */
/* Contoh : N = 3 */
/* Output :
   Hai
   Hai
   Hai                                             */

void GanjilOrGenap (int X); 
/* Jika X adalah bilangan ganjil maka muncul pesan
   "X (dalam angka) adalah bilangan ganjil"        
   dan sebaliknya (kedua-duanya diakhiri newline)  */
/* Contoh : X = 3
   Output :
   3 adalah bilangan ganjil. */

int DeretArit50 ();
/* Menghasilkan nilai dari 
   1 + 2 + 3 + ... + 50     */
/* Harus dikerjakan menggunakan sistem looping (for atau while) */

void ModNumber (int X, int Y);
/* Mengirimkan hasil dari X mod Y ke layar (diakhiri newline) */
/* Contoh : X = 10; Y = 3
   Output : 
   Hasil dari 10 mod 3 adalah 1 */

int TambahOrKurang (int A, int B, int C);
/* Jika A adalah ganjil maka menghasilkan nilai dari
   pertambahan B dan C */
/* Jika sebaliknya maka menghasilkan pengurangan dari B oleh C */

boolean IsPrima (int X);
/* Mengirimkan true jika X adalah bilangan prima */
/* Asumsi : X <= 10 */

#endif