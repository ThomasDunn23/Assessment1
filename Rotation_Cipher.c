#include <stdio.h>

/*Before Running Code- Right Click on .c Program on left , Open in terminal , then type "./a.out" */

int RotationEncription();
int RotationDecription();



int main() { 
int inp ; 
printf("Press 1 to open Encription:" ) ;
scanf ("%d", &inp);
switch (inp) {
    case 1 : RotationEncription() ; 
    break ;
    case 2 : RotationDecription() ;
    break ; 
}}



int RotationEncription()
{
    char Arr[99];
    char chr = 0 ;  // Announcing Array and Message
    int x, shift  ;

    printf("Enter Message to Encript:\n") ; // Printing useable interface
    scanf("%s" , Arr);
    printf("Enter Number of Shifts in Encription: \n" ); // User enters how many times they want to shift the cipher 
    scanf("%d" , &shift);
    
    for (x = 0; Arr[x]!= '\0' ; x++ ) // Checks every number entered into Array [Since at the end of every array is \0]

    chr = Arr[x] ; 
    
    if (chr >= 'a' && chr <= 'z') { // For letters between a and z on ASCII
    chr = chr + shift ; 
    
    if (chr > 'z') {
        chr = chr - 'z' + 'a' - 1 ; } // Stops any Digits 
  Arr[x]=chr ; 
  }
  else if (chr >= 'A' && chr<= 'Z') 
  {
      chr = chr + shift ; 
      if (chr > 'Z')
      {
          chr = chr - 'Z' + 'A' - 1 ; 
      }
      Arr[x]=chr ; 
  }
  printf ("Encription: %s\n", Arr);
  
  return 0 ; }
  
  int RotationDecription() {
      printf("Havent Completed this function Yet"); 
      return 0 ; 
  }

 
