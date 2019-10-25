#include <stdio.h>

int main() {
    printf("C: Let's chat!\n");
    char userInput[100];
    printf("U:");
    gets(userInput);
    printf("C: %s to you too! What's your name?\nU:",userInput);
    char name[20];
    scanf("%s", name);
    printf("C: Oh, hi %s. I am HAL! How old are you?\nU:",name);
    int age=0;
    scanf("%d",&age);
    printf("C: Ooh, %d is quite something.\nU:",age);
    gets(userInput);
    gets(userInput);
    printf("\nC: Sorry, not sure what \"%s\" means.\n Anyways, what country are you from?\nU:");
    char country[30];
    scanf("%s", country);
    printf("Ohh, I heard %s is really nice. What is your favourite food?\nU:", country);
    char food[100];
    gets(food);
    gets(food);
    printf("I bet I'd like %s too, if I could, you know, eat it. Can you tell me one hobby of yours?", food);
    return 0;
}