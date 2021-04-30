#include<stdio.h>
#include<string.h>



 // 1. Reverse String.
void ReverseStr(char * str){
   char *start = str, *end = str, temp;
   int len = strlen(str), i;
   //printf("len = %d\n", len);
   end = str;
   for(i = 0; i < len-1; i++)
       end++;
    
   while(start < end){
        printf("start = %c\t end = %c\n",*start, *end);
        temp = *end;
        *end = *start;
        *start = temp;
        start++;
        end--;
   }
}

void reverse(char * start, char * end){
    char temp;
    while(start < end){
        temp = *end;
        *end-- = *start;
        *start++ = temp;
    }
}

void reversewords(char* str){
    char *start = str, *temp = str;
    while(*temp){
        temp++;
        if(*temp == '\0'){
            reverse(start, temp - 1);
        }
        else if(*temp == ' '){
            reverse(start, temp - 1);
            start = temp + 1;
        }
    }
    reverse(str, temp-1);
}




// Driver code
int main(){
    //char c[] = "Sheshmani";
    //char c[10] = "Sheshmani";

    // The character pointer is for read only.
    // The character array can be modify.

    char c[200];
    puts("Enter the string :\t");
    gets(c);
    ReverseStr(c);
    printf("The reverse string = %s\n", c);

    printf("%s\n", "--------------------------------------------------------------------");
    char str[100];
    gets(str);
    reversewords(str);
    printf("Ans = %s\t", str);
    return 0;
}




