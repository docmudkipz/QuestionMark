#include<stdio.h>

int main (int argc, char *argv[])
{
    FILE *fp = fopen("questions.txt", "ab+"); // Write to ?
      if (fp) {
        char Question[2];
        Question[0] = 0x3F;
        Question[1] = 0x0A;
        char QbutnoA = 2;
        QbutnoA = fwrite(Question, 1, 2, fp);
      }
    return 0;
}

/* This is probably really shitty but, but thats what I am */
