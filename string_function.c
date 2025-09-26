#include <stdio.h>

// Function to find length
int my_strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

// Function to copy
void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to concatenate
void my_strcat(char str1[], char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') i++;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++; j++;
    }
    str1[i] = '\0';
}

// Function to compare
int my_strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}

// Function to reverse
void my_strrev(char str[]) {
    int i = 0, j = my_strlen(str) - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
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
    printf("1. Length of strings\n");
    printf("2. Copy string1 to result\n");
    printf("3. Concatenate string1 + string2\n");
    printf("4. Compare string1 and string2\n");
    printf("5. Reverse string1\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of string1 = %d\n", my_strlen(str1));
            printf("Length of string2 = %d\n", my_strlen(str2));
            break;
        case 2:
            my_strcpy(result, str1);
            printf("Copied string = %s\n", result);
            break;
        case 3:
            my_strcat(str1, str2);
            printf("Concatenated string = %s\n", str1);
            break;
        case 4: {
            int cmp = my_strcmp(str1, str2);
            if (cmp == 0) printf("Strings are Equal\n");
            else if (cmp > 0) printf("String1 is Greater\n");
            else printf("String2 is Greater\n");
            break;
        }
        case 5:
            my_strrev(str1);
            printf("Reversed string1 = %s\n", str1);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
