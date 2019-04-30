// Tyson Bennett (c3303634) 
// Assignment 1

#include<stdio.h>


int main() 
{
    // Line below is the array which defines our leters in the alphabet for the rotation to circulate
    char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' ,'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char inGoing[25] = "abcdefghijklmnopqrstuvwxyz";     
    char outGoing[25];               // When this will be printed it will be the encrypted code            
    int i = 0;                       // Counter for iterations
    int a;
    int k = 1;                      // This int is the key to the rotation value
    char mChar;                      // Character 
    int m = 0;
    
    // Initiating for loop where it will read given characters
    for (i = 0; i < 27; i++)
    {
        mChar = inGoing[i];         // Assigning the given char string to a character
        m = mChar;                  // Assigning the character to a workable int
        if (k > 0 && k <= 25)      // First if statement for the math revolving around the positive key value <= 25
        {
            a = ((m + k)%26);               // Given math equation to work ASCII
            outGoing[i] = alpha[a];         // Assigning a to the correct spot of the encrypted message
            printf("it worked for pos %d: %d  %c \n", i, a, outGoing[i]);

        }
        else if (k < 0 && k >= (-25))       // This statement runs if the value of the key is < 0 or >= -25
        {
            a = ((m - k)%26);                // Given equation once again to work ASCII only this time with a negative key value
            outGoing[i] = alpha[a];          // Assigning a to the correct spot of the encrypted message
            printf("it worked for neg %d: %d  %c \n", i, a, outGoing[i]);
        }
        else if (k == 0)                            // If the user inputs 0
        {
            printf("No encryption to be made.");    // Tells them instead of crashing
        }
    }
    for (i = 0; i < 27; i++)                
    {
        printf("%c", outGoing[i]);
    }
    printf("\n Finished!");
    printf("\n Tadaaaaa!");
    return 0;
}