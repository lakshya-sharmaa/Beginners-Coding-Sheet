#include <stdio.h>
#include <ctype.h>
//  Write a Program to Check Whether a Character is Vowel or Consonant

int main(void)
{
    char alphab, lowercaseCheck;
    printf("Enter the character: ");
    scanf("%c", &alphab);
   
   lowercaseCheck = tolower(alphab);

   if( lowercaseCheck == 'a' || lowercaseCheck == 'e' || lowercaseCheck == 'i' || lowercaseCheck == 'o' || lowercaseCheck == 'u')
   {
    printf("%c is a vowel\n", alphab);
   }
   else
   {
    printf("%c is not a vowel\n", alphab);
   }
}

// method without ctype.h which i thought earlier

// #include <stdio.h>

// int main() {
//     char alphab, lowercaseCheck;

//     do {
//         
//         printf("Enter a character: ");
//         scanf(" %c", &alphab);

//         // Convert to lowercase
//         if (alphab >= 'A' && alphab <= 'Z') {
//             lowercaseCheck = alphab + ('a' - 'A'); //ASCII VALUE CONVERSION USED HERE FOR MY REFERENCE (For example, let's say inputChar is 'B' (with ASCII value 66). The expression would be 66 + ('a' - 'A'), which equals 66 + (97 - 65) = 98. The ASCII value 98 corresponds to the lowercase letter 'b'. Therefore, the expression effectively converts an uppercase character to its lowercase equivalent.)
//         } else {
//             lowercaseCheck = alphab;
//         }

//         // Check if the character is a vowel using if-else and logical OR
//         if ((lowercaseCheck >= 'a' && lowercaseCheck <= 'z') &&
//             (lowercaseCheck == 'a' || lowercaseCheck == 'e' || lowercaseCheck == 'i' || lowercaseCheck == 'o' || lowercaseChar == 'u')) {
//             printf("%c is a vowel.\n", alphab);
//             break; // exit the loop if a valid character is entered
//         } else {
//             printf("%c is not a vowel. Please enter a valid character.\n", alphab);
//         }

//     } while (1); // Infinite loop until a valid character is entered

//     return 0;
// }