#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;


int main() {
   int base, ex, resultado, limite,r2;
   
   cin>>limite;
   cin>>ex;

   base=limite;
   resultado=0;
   r2=resultado;
   
   while (ex>0){ 
        limite = base;
        while(limite>0){
            resultado=resultado+base;
            limite--;
        }
        ex--;
   }

   cout<<resultado << endl;;
    
    return 0;
}