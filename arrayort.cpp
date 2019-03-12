#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main() {
	srand(time(NULL));
	int A[10];
	int tektop = 0,cifttop=0, sayac1=0,sayac2=0,n,i;
	float sonuc, sonuc1;
	cout<<"A[10] = {   ";
	for (i = 0; i < 10; i++) {
		A[i]=rand() % 70 + 20;
		cout<< A[i]<< setw(5);
			if (A[i] % 2 == 0 || A[i]==0) {
				cifttop += A[i];
				sayac1++;
				sonuc = (float)cifttop / sayac1;
			}
			else if (A[i] % 2 != 0) {
				tektop += A[i];
				sayac2++;
				sonuc1 = (float)tektop / sayac2;
			}
		}
	cout <<"}"<< endl;
	cout << "Cift sayilarin ortalamasi: " << sonuc << endl;
	cout << "Tek sayilarin ortalamasi: " << sonuc1;
}
