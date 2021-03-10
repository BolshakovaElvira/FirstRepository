#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include "functions.h"
using namespace std;

void printhelp(){
   cout<<"Choose a operation:\n"<<"-c - average\n"<<"-f - variance\n"<<"-n - dispersia\n";
}
void printerror(){
    cout<<"ERROR\n -h -call for help\n";
}
void VVOD(int a[100],const int N){
	int i;
	ifstream f("input.txt");
	for(i=0;i<N;i++) f>>a[i];
	
}

double average(int a[100],const int N) { //среднее
 	double s=0.;
 	for (int i=0; i<N; i++) s+=a[i];
 	return(s/N);
}

double variance(int a[100],const int N) { //несмещенная дисперсия
 	double s2=0.,s=0.;
 	for (int i=0; i<N; i++) { s2+=pow(a[i],2); s+=a[i]; }
 	return (s2-pow(s,2)/N)/(N-1);
}

double dispersia(int a[100],const int N)//средне-квадратичное отклонение
{
 	double s1=0.0,s2 = 0.0;
 	for (int i=0; i<N; i++){
  		s1 += a[i];
  		s2 += a[i] * a[i];
 	}
 	s1 /= N;
 	return(s2 / N - s1 * s1);
 	
 }
 
