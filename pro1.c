#include<stdio.h>
#include<math.h>
#define bool int
#define R 6
#define C 5
int min(int a, int b, int c);
void MaxSubSquare(bool M[R][C])
{
  int i,j;
  int S[R1][C];
  int maximum, i_index_max, j_index_max;
  maximum = S[0][0]; i_index_max = 0; j_index_max = 0;
   
  /* Set first column of S[][]*/
  for(i = 0; i < R1; i++)
     S[i][0] = M[i][0];
   
  /* Set first row of S[][]*/   
  for(j = 0; j < C; j++)
     S[0][j] = M[0][j];
       
    for(i = 1; i < R1; i++)
    {
        for(j = 1; j < C; j++)
        {
            if(M[i][j] == 1)
                S[i][j] = min(S[i][j-1], S[i-1][j], S[i-1][j-1]) + 1;
            else
                S[i][j] = 0;
        }   
    }
    
   
    for(i = 0; i < R1; i++)
    {
        for(j = 0; j < C; j++)
        {
            if(maximum < S[i][j])
            {
                maximum = S[i][j];
                i_index_max = i;
                j_index_max = j;
            }       
        }                
    }    
    
    printf("Maximum size sub-matrix is: \n");
    for(i = i_index_max; i > i_index_max - maximum; i--)
    {
        for(j = j_index_max; j > j_index_max - maximum; j--)
        {
            printf("%d ", M[i][j]);
        } 
        printf("\n");
    } 
}
int min(int a, int b, int c)
{
int m = a;
if (m > b) 
	m = b;
if (m > c) 
	m = c;
return m;
}
int main()
{
bool M[R1][C] = {{0, 1, 1, 0, 1}, 
				{1, 1, 0, 1, 0}, 
				{0, 1, 1, 1, 0},
				{1, 1, 1, 1, 0},
				{1, 1, 1, 1, 1},
				{0, 0, 0, 0, 0}};
				
MaxSubSquare(M);
getchar(); 
} 
