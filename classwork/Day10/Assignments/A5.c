A5.Write a c program to print alphabet triangle.
Input: 5
Output:

       A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
       1    
     121
   12321
  1234321
 123454321

Program : 
#include <stdio.h>
void PrintAlphaTriangle(int n)  // fun to print alphabets triangle
{
    for (int i = 1; i<=n; i++)
 {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        


        for (int j = 1; j <= i; j++)  // alphabet increasing part
      {
            printf("%c", 'A’+j-1);
        }
        for (int j = i - 1; j >= 1; j--) {
            Printf("%c", 'A'+j -1);
        }
        Printf("\n");
    }}
void PrintNumTriangle(int n) 
 {
    	for (int i = 1; i <= n; i++)
 	{
       		 for (int j = 1; j <= n - i; j++) 
{
           		 Printf(" ");
 		 }
        for (int j = 1; j <= i; j++)
       {
            Printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            Printf("%d", j);
        }
        printf("\n"); // nextline
    }
}

int main () 
{
    int n; // to read the input 
     Printf("enter the num of rows: ");
    scanf("%d", &n);
    printAlphaTriangle(n); //calling fun to print alpha triangle 
    printf("\n");
    printNumTriangle(n); //calling fun to print number triangle 
    return 0;
}