#include <stdio.h>
#include <string.h>
void revString(char *strArr);

int main(void)
{
    int ch;
    int i = 0;

//Create a program to reverse a string using getchar stop reading when array is full or reach '\n'.
char arr[100];
int arrLength = sizeof(arr)/sizeof(arr[0]);
char arrReverse[arrLength];



while (ch != '\n' && i < arrLength){
        ch = getchar();
        arr[i] = ch;
        i++;
}


printf("Entered: %s", arr);
revString(&arr);

}

void revString(char *strArr){
    int length = strlen(strArr);
    for (int x = length; x >= 0; x--){
        printf("%c", *(strArr + x));
    }
}
