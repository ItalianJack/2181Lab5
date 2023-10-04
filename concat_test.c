// SID 801272540

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * concatenate(const char * string1, const char * string2) {
    // Determine the length of string 1 (not including end of string char)
    int str1Length = 0;
    for (int i = 0; string1[i] != '\0'; i++) {str1Length++;}

    // Determine the length of string 2 (not including end of string char)
    int str2Length = 0;
    for (int i = 0; string2[i] != '\0'; i++) {str2Length++;}

    // Allocate the appropriate amount of memory.
    // 1 byte x (str1Length + str2Length) + 2
    // chars are 1 byte, plus 2 bytes for the space in between the strings and the end of string char.
    char* result = malloc(str1Length + str2Length + 2);

    // Copy the first string to the result
    strcpy(result, string1);

    // Append a space to the result
    const char spaceStr[] = " ";
    strcat(result, &spaceStr);

    // Append the second string to the result
    strcat(result, string2);

    return result;
}

int main(int argc, const char * argv[]) {
    char str1[100] = "The United States";
    char str2[100] = "of America";

    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    char * str3;

    str3 = concatenate(str1, str2);

    printf("\nThe two strings concatenated: %s\n", str3);


    char str4[100] = "The University of North Carolina";
    char str5[100] = "at Charlotte";

    printf("\nFirst string: %s\n", str4);
    printf("Second string: %s\n", str5);

    char * str6;

    str6 = concatenate(str4, str5);

    printf("\nThe two strings concatenated: %s\n", str6);

    return 0;
}
