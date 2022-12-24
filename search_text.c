#include <stdio.h>
#include <string.h>
#define LINE 256
#define WORD 30

int getline(char s[]){

}

int getword(char w[]){
    int i = 0;
    char c;
    for (size_t i = 0; i < WORD; i++)
    {
        scanf("%c", c);
        if(c == EOF){
            w[i] = '\0';
            break;
        }
        if(w[i] == '\n' || w[i] == '\t' || w[i] == ' '){
            w[i] = '\0';
            break;
        }
    }
    if (i == WORD)
    {
        w[i-1] = '\0';
    }
    return i;
}

int substring( char *str1, char *str2){

}
int similar (char *s, char *t, int n){
    int counter = 0;
    int indexS = 0;
    int indexT = 0;
    
    while(s[indexS]){
        if(s[indexS] == t[indexT]){
            indexS++;
            indexT++;
        }
        else{
            indexS++;
            counter++;
        }
    }
    if(counter == n){
        return 1;
    }
    return 0;
}
void print_lines(char *str){

}
void print_similar_words(char *str){

}
