#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//cases covered ss,gg,ww and sw,sg,gs,ws,wg,gw

int snakewaterGun(char you, char comp)
{
    if(you==comp)
    {
        return 0;
    }

   if(you=='s' && comp=='g'){
    return -1;
   }

   else if(you=='g' && comp=='s'){
    return 1;
   }

   if(you=='s' && comp=='w'){
    return 1;
   }

   else if(you=='w' && comp=='s'){
    return -1;
   }

   if(you=='g' && comp=='w'){
    return -1;
   }

   else if(you=='w' && comp=='g'){
    return 1;
   }
  // return 0;
}

int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 +1;

    if(number<33){
        comp='s';
    }

    else if(number>33 && number<66)
    {
        comp='w';
    }

    else{
        comp='g';
    }
    //comp='s';
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
    scanf("%c",&you);

    int result = snakewaterGun(you,comp);

    printf("You chose %c and computer chose %c.",you,comp);

    if(result==0)
{
    printf("Game draw!\n");
}

    else if(result==1)
    {
        printf("You win!\n");
    }

    else{
        printf("You lose!\n");
    }

    
    return 0;
}