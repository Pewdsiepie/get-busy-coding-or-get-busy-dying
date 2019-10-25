#include <stdio.h>
int main(){
  int a,b,c,d,f,e;
  scanf("%d %d",&a,&b);
  c=a+b;
  d=a-b;
  e=a*b;
  printf("%d + %d = %d\n",a,b,c);
  printf("%d - %d = %d\n",a,b,d);
  printf("%d * %d = %d\n",a,b,e); 
  if(b!=0&&(a%b)==0){f=a/b;printf("%d / %d = %d\n",a,b,f);}
  else if(b!=0&&(a%b)!=0){float f=a/(b*1.0);printf("%d / %d = %.2f\n",a,b,f);}

  return 0;
}
