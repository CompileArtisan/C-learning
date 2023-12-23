#include<stdio.h>
int main(){
    FILE*fp = fopen("Wplus.txt","w+");
    fputs("Hey Buddy! All good here.",fp); 
    /*Now the file position indicator is at the end of the string.
    so we use rewind(fp) to bring it back to the beginning*/
    rewind(fp);
    while(!feof(fp)){
        printf("%c",fgetc(fp));
    }
    return 0;
}