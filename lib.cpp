
#include "lib.h"

float funzione(const float numeri[], int dim){
   numeri[dim];
   float max=numeri[0];
   for(int i=0 ; i<dim ; i++){
       if(numeri[i]>max){
           max=numeri[i];
       }
   }
   return max;
}
