/* AIM : A program to read two alphabetical characters and print all the characters in-between them including the given ones.
AUTHOR : MONISHA.S
DATE   : 15-03-2022
*/
#include <stdio.h>
int main()
{
    char ch1,ch2,newline1,newline2; //declaration 
    int letter;
    scanf("%c",&ch1); //read the first character
    scanf("%c",&newline1);//read the newline charater(default character)
    scanf("%c",&ch2); //read the second character
    scanf("%c",&newline2); //read the default newline character
    if(ch1<ch2){ //if character 1 less than chracter 2
        for(letter=ch1;letter<=ch2;letter++){
            printf("%c ",letter); //diaplay the character
        }
    }
    else{  //if ch1 greater than ch2
        for(letter=ch1;letter<=122;letter++){
            printf("%c ",letter); //diaplay upto 'z'
        }
        for(letter=97;letter<=ch2;letter++){ //continuously dispaly upto given second character
            printf("%c ",letter);
        }
    }
}