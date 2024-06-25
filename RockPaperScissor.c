#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//creatiing a function...
int game(char you , char computer){

if(you == computer){
    return -1;   // -1 for game tie...
}

if(you == 's' && computer == 'p'){
    return 0;     // 0 for comuter win
}
   else if(you == 'p' && computer == 's'){
        return 1 ;   // 1 for you win.
   }

if(you == 'z' && computer == 's'){
    return 0;

}
    else if(you == 's' && computer == 'z'){
        return 1;

    }

if(you == 'z' && computer == 'p'){
    return 1;

}
        else if(you == 'p' && computer == 'z'){
                return 0;
        }
}


int main(){
    int n;
    
    char you,computer,result;

    srand(time(NULL));

   n =  rand() % 100;

if(n < 33){
    computer = 's';  // "s" stand for stone

}
else if(n >33 && n < 66){
    computer = 'p';       // "p " stands for paper
}

else{
    computer = 'z'; // "Z" stands for scissor.
}

printf("\n\n\t\t\tEnter s for STONE , Enter p for PAPER, Enter z for SCISSOR\n\n\t\t\t\t\t");
scanf("%c", &you);  //for taking input values.

// Now we call the "game" function.

result = game(you , computer);
 
if(result == -1){
    printf("\n\n\t\t\t\tGame Draw....!");
}

else if(result == 1){
    printf("\n\n\t\t\t\tOH You WIN......");

}
else{
    printf("\n\n\t\t\t\tNO... You LOSE.....");
}
return 0;

}