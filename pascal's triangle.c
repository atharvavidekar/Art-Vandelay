#include<stdio.h>
int main()
{  
    int q,w,e,r=1,tri=0,incr=1;
for(q=1;q<=6;q++)
{
   for(w=1;w<=(31-(((q-1)*5)+q)/2);w++)
  { 
      printf(" ");
  }
  if(q>=3)
  {
      tri=tri+incr;
      incr++;
      r=r+1;
  }

  for(e=1;e<=q;e++)
  {
   if(e==1||e==q)
       printf("1     ");
   else if(e==2||e==(q-1))
   {
       printf("%d     ",r);
       
   }
   else if(e==3||e==(q-2))
   {
       printf("%d     ",tri);
   }
  }
  printf("\n\n");
}
return 0;
}