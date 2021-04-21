<<<<<<< HEAD
=======
//12345
//22
//Good Buy!
чтобы бы мне поделать
>>>>>>> 1d9020b84ff68904649df39d248ac637b930fcee
#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
#include "functions.h"
using namespace std;
//new

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
/**
@function average
Numeric function that takes two parameters: an array and the number of elements in the array. The function calculates the arithmetic mean. 
@param Parameter1 – parameter responsible for an integer array(int)
@param Parameter2 - parameter responsible for the number of elements in the array(int)
@return arithmetical mean(double)
*/

double average(int a[100],const int N) { //среднее
 	double s=0.;
 	for (int i=0; i<N; i++) s+=a[i];
 	return(s/N);
}
/**
@function variance
Numeric function that takes two parameters: an array and the number of elements in the array. The function calculates variance
@param Parameter1 – parameter responsible for an integer array(int)
@param sParameter2 - parameter responsible for the number of elements in the array(int)
@return variance(double)
*/
double variance(int a[100],const int N) { //несмещенная дисперсия
 	double s2=0.,s=0.;
 	for (int i=0; i<N; i++) { s2+=pow(a[i],2); s+=a[i]; }
 	return (s2-pow(s,2)/N)/(N-1);
}
/**
@function dispersia
Numeric function that takes two parameters: an array and the number of elements in the array. The function calculates the dispersia. 
@param Parameter1 – parameter responsible for an integer array(int)
@param Parameter2 - parameter responsible for the number of elements in the array(int)
@return dispersia(double)
*/
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
 
