/*#include <stdio.h> //WILL NEED TO REMOVE PREVIOUS COMMENT TO RUN CODE
#include <string.h>
//Before Running Code- Right Click on .c Program on left , Open in terminal , then type "./a.out" 

int RotationEncription(); // Declaring the functions used in this code / 
int RotationDecription();
int RotationDecriptionBrute();


int main() {  // This function uses a switch statement to open up seperate functions//
int inp ; 
printf("Press 1 For Encription, 2 for Decription and 3 for Brute Attack:" ) ;
scanf ("%d", &inp);
switch (inp) {
    case 1 : RotationEncription() ; 
    break ;
    case 2 : RotationDecription() ;
    break ; 
    case 3 : RotationDecriptionBrute() ; 
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
    for (x = 0; Arr[x]!= '\0' ; x++ ) {// Checks every number entered into Array [Since at the end of every array is \0]
    if (Arr[x]>96 && Arr[x]<123){
        Arr[x] = Arr [x] -32 ; //Changing Lowercase Input to Uppercase by subsituting ASCII values 
    }
    if ((Arr[x] + shift) >= 65 && (Arr[x] + shift) <= 90){
    Arr[x] = Arr[x] +shift; }
    else {
        Arr[x] = Arr [x] + (shift - 26) ; // Wrapping Text around for values greater than Z
    }}
    
  printf ("Encription: %s\n", Arr);
  
  return 0 ; }
  
  int RotationDecription() 
  {
    char Arr[99];
    char chr = 0 ;  // Announcing Array and Message
    int x, shift  ;

    printf("Enter Message to Decript:\n") ; // Printing useable interface
    scanf("%s" , Arr);
    printf("Enter Known Number of Shifts to Decript: \n" ); // User enters how many times they want to shift the cipher 
    scanf("%d" , &shift);
   for (x = 0; Arr[x]!= '\0' ; x++ ) {// Checks every number entered into Array [Since at the end of every array is \0]
    if (Arr[x]>96 && Arr[x]<123){
        Arr[x] = Arr [x] -32 ;
    }
    if ((Arr[x] - shift) >= 65 && (Arr[x] - shift) <= 90){
    Arr[x] = Arr[x] - shift; }
    else {
        Arr[x] = Arr [x] - (shift - 26) ;
    }}
    
     
    
     printf ("Decription: %s\n", Arr);
  
  return 0 ; } 
  
  int RotationDecriptionBrute()
   {
    char Arr[99];
    char chr = 0 ;  // Announcing Array and Message
    int x, shift  ;

    printf("Enter Message to Decript:\n") ; // Printing useable interface
    scanf("%s" , Arr);
    printf("Enter Known Number of Shifts to Decript: \n" ); // User enters how many times they want to shift the cipher 
    scanf("%d" , &shift);
    for (shift=0 ; shift <27; shift++){
   for (x = 0; Arr[x]!= '\0' ; x++ ) {// Checks every number entered into Array [Since at the end of every array is \0]
    if (Arr[x]>96 && Arr[x]<123){
        Arr[x] = Arr [x] -32 ;
    }
    if ((Arr[x] - shift) >= 65 && (Arr[x] - shift) <= 90){
    Arr[x] = Arr[x] - shift; }
    else {
        Arr[x] = Arr [x] - (shift - 26) ;
    }}
    
     
    
     printf ("Brute Force Key %d: %s\n", shift , Arr);
}
  
  return 0 ; } 
    
  

 
