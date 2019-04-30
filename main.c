// Tyson Bennett (c3303634) 
// Assignment 1

#include<stdio.h>
#include<string.h>
#include<math.h>

int main() 
{
    int k;
    //int m;
    //char alpha[a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, y, z];
    char inGoing[150];
    char outGoing[150];
    
    printf("Enter message to be encrypted: \n");
    scanf("%s", &inGoing);
    printf("Enter a number between -25 and 25 for the rotation key: \n", &k);
    if (k > 0)
    {
        //outGoing == (inGoing + k) * (26%);
        printf("it worked for pos");
    }
    printf("%s", outGoing);
    return 0;
}
// this scans input for most common char

// 
// loop to see how far it is from most comon char in alphabet
