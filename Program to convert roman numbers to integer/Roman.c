#include<stdio.h>
#include<string.h>
int Romtoint(char ch);

int main () {
    printf("This program is accurate for number 1-10 ");
char rom[4];
int sum =0;
printf("Enter the roman number that you want to convert  :");
gets(rom);
int n = strlen(rom);
char S1=rom[0];
char S2=rom[1];
int x= Romtoint(S1);
int y=Romtoint(S2);

if(x<y){
     sum=y-x;
}else {
    for(int i=0;i<n;i++){
        sum = sum + Romtoint(rom[i]);
    }
}
printf("%d is the integer value of %s",sum,rom);

  return 0;
}

int Romtoint(char ch){
    
    if(ch=='I' || ch=='i'){
        return 1;
    } else if(ch=='V' || ch=='v'){
        return 5;
    }else if(ch=='X' || ch=='x'){
        return 10;
    }
}

