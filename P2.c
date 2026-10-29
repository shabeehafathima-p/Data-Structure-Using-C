#include<stdio.h>
int main()
{
  int a[20], b[20], c[40];
  int m,n;
  void readarray(int[],int);
  void printarray(int[],int);
  void merge(int[], int[], int[], int, int);
  printf("No. of elements in 1st array[1-20] : ");
  scanf("%d",&m);
  printf("Enter elements in non-decreasing order : ");
  readarray(a,m);
  printf("No. of elements in 2nd array : ");
  scanf("%d",&n);
  printf("Enter elements in non-decreasing order : ");
  readarray(b,n);
  merge(a, b, c, m, n);
  printf("Merged Array : \n");
  printarray(c,m+n);
}
void readarray(int d[], int n)
{
  int i;
  for(i=0; i<n; i++)
    scanf("%d",&d[i]);
}
void printarray(int e[], int n)
{
  int i;
  for(i=0; i<n; i++)
    printf(" %d ",e[i]);
  return;
}
void merge(int x[], int y[], int z[], int m, int n)
{
  int i, j, k;
  i=j=k=0;
  while(i<m && j<n)
    if(x[i]<y[j])
    {
      z[k]=x[i];
      i=i+1;
      k=k+1;
    }
    else
    {
      z[k]=y[j];
      j=j+1;
      k=k+1;
    }
  while(i<m)
    z[k++]=x[i++];
  while(j<n)
    z[k++]=y[j++];
}
