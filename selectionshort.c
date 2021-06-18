#include <stdio.h>

void SelectionSort(int *array, int n);

main (){
int vector[10] = {1,2,5,71,99,0,5,16,26,3};
int n = sizeof(vector) / sizeof(vector[0]);
//muestro vector original
printf ("El vector original: ");
for(int i = 0; i < n; i++){
    printf ("%i ", vector[i]);
}
SelectionSort(vector, n);
//muestro el vector despues del ordenamiento
printf ("\n El vector modificado: ");
for(int i = 0; i < n; i++){
      printf ("%i ", vector[i]);
}
}
//ordenamiento selection sort
void SelectionSort(int *array, int n){
  int x, y, min, tmp;
  for(x = 0; x < n; x++) {
    min = x;
    for(y = x + 1; y < n; y++) {
      if(array[min] > array[y]) {
        min = y;
      }
    }
    tmp = array[min];
    array[min] = array[x];
    array[x] = tmp;
  
    }
}