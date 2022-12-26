#include <stdio.h>
#include <string.h>
#include "search_text.h"
#define LINE 256
#define WORD 30

int mygetline(char s[]);

int mygetword(char w[]);

int substring( char *str1, char *str2);

int similar (char *s, char *t, int n);

void print_lines(char *str);

void print_similar_words(char *str);

int main(){
    char *sptr1 = "aagabahj";
    char *sptr2 = "aba";
    printf("%d\n", substring(sptr1, sptr2));
    return 0;
}
/*

*/
int mygetline(char s[]){
    int i = 0;
    for (int i = 0; i < LINE; i++)
    {
        if(scanf("%c", &s[i]) == EOF){
            s[i] = '\0';
            break;
        }
        if(s[i] == '\n'){
            break;
        }
    }
    if(i == LINE){
        s[i-1] = '\n';
    }
    return i;
}
/*

*/
int mygetword(char w[]){
    int i = 0;
    for (int i = 0; i < WORD; i++)
    {
        scanf("%c", &w[i]);
        if(w[i] == EOF){
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
/*

*/
int substring( char *str1, char *str2){
    int index1 = 0;
    int index2 = 0;

    while (str1[index1])
    {
        if(str2[index2] == str1[index1]){
            index1++;
            index2++;
        }
        else if (str2[index2] == '\0')
        {
            return 1;
        }
        else{
            index1++;
        }
    }
    return 0;
}
/*

*/
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
/*

*/
void print_lines(char *str){

}
/*

*/
void print_similar_words(char *str){

}