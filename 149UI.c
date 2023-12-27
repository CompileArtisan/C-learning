#include <stdio.h>
#include <conio.h> // for getche

int printUI(char UIheadings[10][100], int totalOptions) {
    int selectedOption = 0;
    while (1) {
        printf("\033[2J\033[1;1H\033[0m");
        printf("\033[38;2;255;255;255m  ");
        printf("%s\n", UIheadings[0]);
        for(int i=0 ; i<totalOptions ; i++){
            if(i==selectedOption){
                printf("\033[38;2;255;0;0m\033[1m \033[4m");
                printf("%-9s",UIheadings[i+1]);
            }
            else{
                printf("\033[38;2;255;255;255m\033[0m");
                printf("%-9s",UIheadings[i+1]);
            }
        }
        printf("\n\n\n");
        char key = getche();
        if (key == 'a' || key == 'A') {
            selectedOption = (selectedOption - 1 + totalOptions) % totalOptions;
        }
        else if (key == 'd' || key == 'D') {
            selectedOption = (selectedOption + 1) % totalOptions;
        }
        else if (key == '\r') {
            break;
        }
    }
    printf("\nSelected Option: %d\n", selectedOption + 1);
    return selectedOption + 1;
}


int main() {
    char UIheadings[10][100] = {"Best Heading in the world\nA-Left ; D for Right\n\n","Car","Bike","Cycle","scooter","rishab"};
    int x=printUI(UIheadings,5);
    printf("%d",x);
    return 0;
}