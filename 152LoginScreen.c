#include<stdio.h>
#include<string.h>
#include<conio.h> // for getch

char USRNM[20] = "admin";
char PSSWRD[20] = "wishab";


int LoginScreen(int x, int y){
    // x and y are the coordinates of the top left corner of the login screen
    char username[20], password[20];
           printf("\033[2J\033[%d;%dH ________________________",y+3,x+33);
    printf("\033[%d;%dHUsername:     |________________________|",y+4,x+19);
                  printf("\033[%d;%dH ________________________",y+5,x+33);
    printf("\033[%d;%dHPassword:     |________________________|",y+6,x+19);
    printf("\033[%d;%dH",y+4,x+34);
    scanf("%s",username);
    printf("\033[%d;%dH",y+6,x+34);
    int i=0;
    char ch;
    while(1){
        ch = getch();
        if(ch == '\r'){ // '\r' is the Enter key
            password[i] = '\0';
            break;
        }
        else if(ch == '\b'){ // '\b' is the Backspace key
            if(i > 0){
                i--;
                printf("\033[D \033[D"); // Erase the last *
            }
        }
        else{
            password[i++] = ch;
            printf("*");
        }
    }
    if (strcmp(username,USRNM) == 0 && strcmp(password, PSSWRD) == 0) {
        printf("\n\nLogin Successful!\n");
        return 1;
    }
    else {
        printf("\n\nLogin Failed!\n");
        return 0;
    } 
}


int main(){
    LoginScreen(25,0);
    
    
    return 0;
}