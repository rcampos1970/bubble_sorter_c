#include<stdio.h>
// standard library contains functions for rand and srand
#include<stdlib.h>
#include<time.h>

int main(void){
  int size = 10;
  int array[size];
  // integer variable t is temporary, used later to do the changing part
  int t;
  int i,j;
  
 // srand is the seed (in this case the time is beeing used)
// this makes a true random number every time
  srand(time(NULL));
  
// creating the random array with a defined size
  for(i = 0;i<size;i++){
    array[i] = rand()%100;
  // just making sure that no adjacent number are equal  
  if(array[i] == array[i-1]){
      array[i] = rand()%100;
    }
  }

// printing array
  for(i = 0;i<size;i++){
    printf("%d\t",array[i]);
  }
  
 // BUBLLE SORTER
  for(i=0;i<size;i++){
    for(j=0;j<size-1;j++){
      if(array[j+1]<array[j]){
	// changing part
        t = array[j];
	array[j] = array[j+1];
	array[j+1] = t;
      }
    }
  }
  printf("\n");
  // printing array again
   for(i = 0;i<size;i++){
    printf("%d\t",array[i]);
  }
  printf("\n");
  return 0;
}
