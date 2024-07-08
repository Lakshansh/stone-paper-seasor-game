// stone paper seasor game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int func(int n){
   srand(time(NULL)); 
       return  rand()%n;
}

int main() {
    int player=0; int cpu=0;
      int x; int a;
    for(int i=1;i<=3;i++){
        printf("   round number %d\n",i);
    printf("press 1 for rock\npress 2 for paper\npress 3 for seasor\n");
    
    scanf("%d",&a);
    
   
   x=func(3);
    if(x==0){
        printf("My choice is rock\n");
    }
    else if(x==1){
     printf("My choice is paper\n");
              }
else if(x==2){
     printf("My choice is seasor\n");
}
if(a==1){
    if(x==2){
        printf("you won round %d\n",i);
        player++;
    }
    else if(x==1){
        printf("CPU won round %d\n",i);
        cpu++;
    }
    else{
        printf("%d round drawn\n",i);
    }
}
else if(a==2){
    if(x==0){
         printf("you won round %d\n",i);
          player++;
    }
    else if(x==2){
         printf("CPU won round %d\n",i);
         cpu++;
    }
    else{
        printf("%d round drawn\n",i);
    }
}
else if(a==3){
    if(x==1){
         printf("you won round %d\n",i);
          player++;
    }
    else if(x==0){
        printf("CPU won round %d\n",i);
        cpu++;
    }
    else{
        printf("%d round drawn\n",i);
    }
}
}
if(player==2 || player==3){
    printf("you won the game\n");
}
else if(player ==1 && cpu==1){
    printf(" game drawn\n");
}
else if(player==1 && cpu==0){
    printf("you won the game");
}
else if(player==0 && cpu==0){
    printf("match drawn");
}
else if((cpu==3)||(cpu==1 && player==0)){
    printf("cpu won the game");
}


    return 0;
}