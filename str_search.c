#include <stdio.h>
#include <string.h>

#define LINE 256
#define WORD 30

int mygetline(char s[]);

int mygetword(char w[]);

int substring( char *str1, char *str2);

int similar (char *s, char *t, int n);

void print_lines(char *str);

void print_similar_words(char *str);

int main(){
    char str[WORD], plan;
    mygetword(str);
    scanf("%c\n", &plan);
    if(plan == 'a'){
        print_lines(str);
    }
    else if(plan == 'b'){
        print_similar_words(str);
    }
    return 0;
}
/*

*/
int mygetline(char s[]){
    int i = 0;
    for (i = 0; i < LINE; i++)
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
        s[i-1] = '\0';
    }
    return i;
}
/*

*/
int mygetword(char w[]){
    int i = 0;
    for (i = 0; i < WORD; i++)
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
// this function print all the lines where`s the string we lokking for exist in them.
void print_lines(char *str)
{
    char line[LINE];
    while (mygetline(line))
    {
        if (substring(line, str))
        {
            //puts(line);
            printf("%s\n", line);
        }
    }
}
/*

*/
// this function prints the words that similar to the string we looking for.
void print_similar_words(char *str)
{
    char word[WORD];
    while (mygetword(word))
    {
        if (similar(str, word, 1) || similar(str, word, 0))
        {
            printf("%s\n", word);
        }
    }
}