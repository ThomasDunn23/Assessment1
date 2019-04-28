#include <stdio.h>

/*Before Running Code- Right Click on .c Program on left , Open in terminal , then type "./a.out" */

int RotationEncription(); // Declaring the functions used in this code / 
int RotationDecription();


int main() {  // This function uses a switch statement to open up seperate functions//
int inp ; 
printf("Press 1 to open Encription and 2 for Decription:" ) ;
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
    if ((Arr[x] + shift) >= 65 && (Arr[x] + shift) <= 90){
    Arr[x] = Arr[x] +shift; }
    else {
        Arr[x] = Arr [x] + (shift - 26) ;
    }
    if ((Arr[x] + shift) >= 97 && (Arr[x] + shift) <= 122){
        Arr[x] = Arr[x] + shift; 
    }
    else {
        Arr [x] = Arr[x] + (shift - 26) ; 
    }
    
    
//    if (chr >= 'a' && chr <= 'z') { // For letters between a and z on ASCII
//    chr = chr + shift ; 
//    
//    if (chr > 'z') {
//        chr = chr - 'z' + 'a' - 1 ; } // Wraps Rotation Cipher Back around 
//  Arr[x]=chr ; 
//  }
//  else if (chr >= 'A' && chr<= 'Z') 
//  {
//      chr = chr + shift ; 
//      if (chr > 'Z')
//      {
//          chr = chr - 'Z' + 'A' - 1 ; 
//      }
//      Arr[x]=chr ; 
//  }
  printf ("Encription: %s\n", Arr);
  
  return 0 ; }
  
  int RotationDecription() 
  {
    char Arr[99];
    char chr = 0 ;  // Announcing Array and Message
    int x, shift  ;

    printf("Enter Message to Decript:\n") ; // Printing useable interface
    scanf("%s" , Arr);
    printf("Enter Number of Shifts in Decription: \n" ); // User enters how many times they want to shift the cipher 
    scanf("%d" , &shift);
    
    for (x = 0; Arr[x]!= '\0' ; x++ ) // Checks every number entered into Array [Since at the end of every array is \0]
    if ((Arr[x] + shift) >= 65 && (Arr[x] + shift) <= 90){
    Arr[x] = Arr[x] - shift; }
    else {
        Arr[x] = Arr [x] - (shift - 26) ;
    }
    if ((Arr[x] + shift) >= 97 && (Arr[x] + shift) <= 122){
        Arr[x] = Arr[x] - shift; 
    }
    else {
        Arr [x] = Arr[x] - (shift - 26) ; 
    }
    
  

 
