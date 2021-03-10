#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <unistd.h>
#include "functions.h"
using namespace std;

int def(){

}

int main(int argc, char *argv[]){
    
    int const N = 100;
    int a[N];
    char o;
    int rs;
    opterr=0;
    while ((rs=getopt(argc,argv, ":c:f:n:h")) !=-1){
        switch (rs){
            case 'c':cout<< average(a, 100); break;
            case 'f':cout<< variance(a, 100); break;
            case 'n':cout<<  dispersia(a, 100); break;
            case 'h':printhelp(); return 0;     
            default:printerror(); return 1;
        }
    
   }

}

