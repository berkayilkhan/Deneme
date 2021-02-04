#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int c[100],t[100],i,cift=0,tek=0,N,say;
	printf("Dizinin eleman sayisi: " );
    scanf("%d",&N);
    int d[N];
     for(i=0;i<N;i++)
	{ 
	  printf("d[%d] =" ,i+1);
	  scanf("%d",&d[i]);	  
	}
	for(i=0;i<N;i++)
     {
  	if(d[i]%2==0)
  	{
  	     c[cift]=d[i];
	  	 cift++;
	  	
	  }
	  else if(d[i]%2!=0)
	  {
	    t[tek]=d[i];
	    tek++;
	  }
  
  }
  printf("cift elemanlar \n " );
     for(i=0;i<cift;i++)
  printf(" %d ",c[i]);
   printf(" \n tek elemanlar \n " );
  for(i=0;i<tek;i++)
  printf(" %d ",t[i]);
  return 0;
}
