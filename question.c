#include<stdio.h>

int main (int argc, char *argv[])
{
    FILE *fp = fopen("config", "ab+"); // Write to ?
      if (fp) {
        char stringAsChar[2];
        stringAsChar[0] = 0x3F;
        stringAsChar[1] = 0x0A;
        char noOfBytesWritten = 2;
        noOfBytesWritten = fwrite(stringAsChar, 1, 2, fp);
      }
    return 0;
}

/* This is probably really shitty but, but thats what I am */
