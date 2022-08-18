#include <stdio.h>

int main()
{
  char *tens[]={"teen","Twenty","Thiry","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
  char *digits[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
  char *teens[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventen","Eighteen","Nineteen"};
  int f,s;
  printf("Enter a two-digit number: ");
  scanf("%1d%1d",&f,&s);
  printf("%d %d\n",f,s);
  if (f!=1 && f!=0 && s!=0)
    printf("%s-%s.",tens[f-1],digits[s]);
  else if(f==1)
    printf("%s.",teens[s]);
  else if(f!=1 && s==0)
    printf("%s.",tens[f-1]);
  else if(f==0)
    printf("%s.",digits[s]);
  printf("\n");
  return 0;
}
