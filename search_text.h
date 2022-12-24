#ifndef SEARCH_TEXT_H
#define SEARCH_TEXT_H

int getline(char s[]);
int getword(char w[]);
int substring( char *str1, char *str2);
int similar (char *s, char *t, int n);
void print_lines(char *str);
void print_similar_words(char *str);

#endif