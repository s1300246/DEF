#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(){
     char a[100];

    printf("What is your name?\n");

    scanf("%s",a);

    printf("Hello,%s!\n",a);

    //aaaaaaaa
 

  for(i=0;i<=1;i++){

    srand(time(NULL));

    a[i]=rand()%6+1;

    printf("Die %d: %d\n",i+1,a[i]);

    sleep(1);
  }

  s=a[0]+a[1];

  printf("Total value: %d\n",s);
  if(s>7) printf("%s won!\n",a);
 else printf("%s lost!\n",a);
   
  return 0;
}

