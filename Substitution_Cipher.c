 #include <stdio.h> // Will need to remove comment to run code 

int SubstitutionEncription() ;
int SubstitutionDecription() ;

int main () {
int inp ; 
printf("Press 1 to open Encription or 2 to open Decription:"); 
scanf("%d", &inp); 
switch (inp) {
    case 1 : SubstitutionEncription() ;
    break ; 
    case 2 : SubstitutionDecription() ; 
    break ; 
}}

    int SubstitutionEncription(){
    char Arr[99];
    int x, i , key;
    printf ("Enter Message to Encript:\n");
    scanf("%s" , Arr); 
    printf ("Key: \n"); 
    scanf("%d" , &key);
    printf ("Key: %d" , key ); 
    for (x = 0; Arr[x]!= '\0' ; x++ ) { // Checks every number entered into Array [Since at the end of every array is \0]
    if (Arr[x]>96 && Arr[x]< 123){
         Arr[x] = Arr [x] - 32 ; //Changing Lowercase Input to Uppercase by subsituting ASCII values 
    }}
    if (key=1) {
        char Key1[26] = "QAZWSXEDCRFVTGBYHNUJMIKOLP" ; 
        for (i = 0; Arr[i] != '\0'; i++) {
        if (x>64 && x<91) {
            x = x - 65;
            Arr[i] = Key1[x] ; 
    }}
    printf ("Encripted Message: %s", Arr) ; }
    return 0 ; }
    
    int SubstitutionDecription (){
        
    }
    
    

        
        
    
    
    




 // REMOVE THIS COMMENT to run code 