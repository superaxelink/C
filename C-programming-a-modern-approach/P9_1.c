#include <stdio.h>
#define n 10

int main(void)
{
  int i,s[n];
  void selection_sort(int s[],int q);
/*  printf("Introduce the number of integers you want: ");
  scanf("%d",&n); */
  printf("Introduce %d integers: ",n);
  for (i=0;i<n;i++)
    scanf("%d",&s[i]);
  selection_sort(s,n);
  printf("Sorted numbers: ");
  for (i=0;i<n;i++)
    printf(" %d",s[i]);
  printf("\n");
  return 0;
}

void selection_sort(int a[], int m)
{
  int dj, da, ds, sw, j;
  da=0;
  for (j=0;j<m;j++){
    if(da<a[j]){
      da=a[j];
      dj=j;
    }
  }
  ds=a[m-1];
  a[m-1] = a[dj];
  a[dj] = ds;
  if (m>2)
    selection_sort(a,--m);
}


