#include <stdio.h> // Will need to remove comment to run code OR comment this code out to run Rotation Cipher
//Before Running Code- Right Click on .c Program on left , Open in terminal , then type "./a.out" 
int SubstitutionEncryption() ;
int SubstitutionDecryption() ;

int main ()
{
int inp ; 
printf("Press 1 to open Encryption or 2 to open Decryption:"); 
scanf("%d", &inp); 
switch (inp) 
   {
    case 1 : SubstitutionEncryption() ;
    break ; 
    case 2 : SubstitutionDecryption() ; 
    break ; 
   }
}

    int SubstitutionEncryption() // Introduces Individual Function 
 { 
    char Arr[99];
    int x, i , key, T;
    printf ("Enter Message to Encrypt:\n"); // User Interface
    scanf("%d" , &T); //Acting Input Buffer for scanf below
    scanf("%[^\n]s" , Arr); 
    printf ("Key: \n"); 
    scanf("%d" , &key);
    printf ("Key: %d" , key ); 
    for (x = 0; Arr[x]!= '\0' ; x++ ) // Checks every number entered into Array [Since at the end of every array is \0]
   { 
    if (Arr[x]>96 && Arr[x]< 123)
    {
         Arr[x] = Arr [x] - 32 ; //Changing Lowercase Input to Uppercase by subsituting ASCII values 
    }
   }
    if (key=1) 
    { 
        char Key1[26] = "QAZWSXEDCRFVTGBYHNUJMIKOLP" ; // Creating Array and Encrytion Key 
        for (i = 0; Arr[i] != '\0'; i++) // Checks all numbers in Array
       {  
            x = (int)Arr[i];
        if (x>64 && x<91) // ASCII characters
        {  
            x = x - 65; // Converting ASCII characters starting at 64 to Array starting at 0 
            Arr[i] = Key1[x] ; // Creating Array as an Encryption 
        }
       }
    printf ("\nEncrypted Message: %s\n", Arr) ;
    }
    return 0 ;
 }
    
    int SubstitutionDecryption ()// Introduces Individual Function
 {  
    char Arr[99];
    int x, i , key, T;
    printf ("Enter Message to Decrypt:\n"); // User Interface
    scanf("%d", &T);
    scanf("%[^\n]s" , Arr); 
    printf ("Key: \n"); 
    scanf("%d" , &key);
    printf ("Key: %d" , key ); 
    for (x = 0; Arr[x]!= '\0' ; x++ ) // Checks every number entered into Array [Since at the end of every array is \0]
  { 
    if (Arr[x]>96 && Arr[x]< 123)
     {
         Arr[x] = Arr [x] - 32 ; //Changing Lowercase Input to Uppercase by subsituting ASCII values 
     }
  }
    if (key=1)
       { 
        char Key1[26] = "BOIHGKNQVTWYURXZAJEMSLDFPC" ; // Encryted Array above Key decoded 
        for (i = 0; Arr[i] != '\0'; i++)// Checks all numbers in Array 
        {
            x = (int)Arr[i];
        if (x>64 && x<91) // ASCII characters 
          {
            x = x - 65; // Converting ASCII characters starting at 64 to Array starting at 0 
            Arr[i] = Key1[x] ; // Creating Array as an Encryption 
          }
       }
    printf ("\nEncrypted Message: %s\n", Arr) ;
      }
    return 0 ;
  }
        
    
    
    

        
        
    
    
    




 // REMOVE THIS COMMENT to run code 