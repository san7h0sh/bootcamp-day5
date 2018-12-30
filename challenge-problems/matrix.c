
#include "matrix.h"

#define min(a,b) ((a)<(b)?(a):(b)) //Macro to return small value from a and  b.

/*function to perform matric multiplication.*/
void mat_multiply(void *mat_a, void *mat_b, void *mat_c, int size)
{
  //Type conversion generic type to requred data type
  double *a = (double *) mat_a;
  double *b = (double *) mat_b;
  double *c = (double *) mat_c;
  int i,j,k;

  /* Matrix multiplication starts */
  for(i=0;i<size;i++)
  {
      for(j=0;j<size;j++)
      {
          c[i*size + j]=0;
          for(k=0;k<size;k++)
          {
              c[ i*size + j] = c[i*size + j]+a[i*size + k]*b[k*size + j];
          }
      }
  }

  /* Matrix multiplication Completed. */
}

/*Function template to implement tiled Matrix multiplication. */
void mat_multiply_opt(void *mat_a, void *mat_b, void *mat_c, int size, int tile)
{
  double *a = (double *) mat_a;
  double *b = (double *) mat_b;
  double *c = (double *) mat_c;

  //write your code here

}
