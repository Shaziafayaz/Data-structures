#include <stdio.h>

// Function to find length of string
int strLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

// Function to copy one string to another
void strCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to compare two strings
int strCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

// Function to concatenate two strings
void strConcat(char str1[], char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') i++; // move i to end of str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

// Function to reverse a string
void strReverse(char str[]) {
    int i = 0, j = strLength(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str1[100], str2[100], result[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\nMenu:\n");
    printf("1. Length\n2. Copy\n3. Compare\n4. Concatenate\n5. Reverse\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length of string1 = %d\n", strLength(str1));
            printf("Length of string2 = %d\n", strLength(str2));
            break;
        case 2:
            strCopy(result, str1);
            printf("Copied string = %s\n", result);
            break;
        case 3: {
            int cmp = strCompare(str1, str2);
            if (cmp == 0)
                printf("Strings are equal\n");
            else if (cmp > 0)
                printf("String1 is greater\n");
            else
                printf("String2 is greater\n");
            break;
        }
        case 4:
            strConcat(str1, str2);
            printf("Concatenated string = %s\n", str1);
            break;
        case 5:
            strReverse(str1);
            printf("Reversed string1 = %s\n", str1);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
