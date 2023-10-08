/* Md. Ahanaful Alam 1002143421*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int RandNumber()
{
    srand(time(0));
    int RandNum = rand()%20 + 1;
    return RandNum;
}

int Menu()
{
    int User;
    
    printf("Pick a question to answer.\n\n 1. Will I be able to watch the last episode of One Piece?\n 2. Will I carry on doing the hardwork?\n 3. Will I get 100 points on my next Calc Exam?\n 4. Will I be able to enjoy my life to the fullest?\n 5. Can I make the best use of any oppurtunity?\n\n");
    printf("Enter a choice between 1 and 5: ");
    scanf("%d", &User);
    while ((User < 1) || (User > 5))
    {
        printf("Enter a choice between 1 and 5: ");
        scanf("%d", &User);
        
    }
    return User;
}
int main()
{
    int RandomNm, Question;

    RandomNm = RandNumber();
    Question = Menu();
   printf("The answer to question %d is...", Question);
        switch (RandomNm)
        {
        case 1:
            printf("It is certain.");
            
            break;
        case 2:
            printf("It is decidedly so.");
            break;
        case 3:
            printf("Without a doubt.");
            break;
        case 4:
            printf("Yes definitely.");
            break;
        case 5:
            printf("You may rely on it.");
            break;
        case 6:
            printf("As I see it, yes.");
            break;
        case 7:
            printf("Most likely.");
            break;
        case 8:
            printf("Outlook good.");
            break;
        case 9:
            printf("Yes.");
            break;
        case 10:
            printf("Signs point to yes.");
            break;
        case 11:
            printf("Reply hazy, try again.");
            break;
        case 12:
            printf("Ask again later.");
            break;
        case 13:
            printf("Better not tell you now.");
            break;
        case 14:
            printf("Cannot predict now.");
            break;
        case 15:
            printf("Concentrate and ask again.");
            break;
        case 16:
            printf("Don't count on it.");
            break;
        case 17:
            printf("My reply is no.");
            break;
        case 18:
            printf("My sources say no.");
            break;
        case 19:
            printf("Outlook not so good.");
            break;
        case 20:
            printf("Very doubtful.");
            break;
        default:
            printf("Not sure how we hot here.");
            break;
        }
   
}
