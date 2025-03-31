#include<stdio.h>
#include<stdlib.h>
static int score= 0;


void scoreList(){
    printf("Score: %d \n", score);
}
void finalResult(){
    char loop;
    printf("\tDo you want to try again? \n\tEnter y or n: ");
    scanf("%s", &loop);
    if(loop == 'Y' || loop == 'y'){
        quizChapterDetail();
    }
}

void choiceChapter(int choice){
    switch (choice)
    {
    case 1:
        chapter1QuizQuestion();
        break;
    case 2:
        break;
    default:
        break;
    }
}



void main(){
    int score = 0 , quiz;
    quizChapterDetail();
}

void quizChapterDetail(){
    printf("\n\tGeneral IT Quiz for Entrance Preparation\n\n");
    printf("\t\t\tCONTENT\n");
    printf("    ................................................................\n");
    printf("Chapter 1: Introduction of Computer\n");
    printf("Chapter 2: Computer Software, OS & Programing Concept\n");
    printf("Chapter 3: Computer Fundamental & Multimedia\n");
    printf("Chapter 4: Application Package\n");
    printf("Chapter 5: Introduction to Internet and www Network\n");
    printf("Chapter 6: Email, Social Networking and E-Governance service\n");
    printf("Chapter 7: Digital Finance tools and Apllication\n");
    printf("Chapter 8: Over View of Facts Skills and Cybersecurity\n");
    printf("Chapter 9: Network\n");
    printf("Chapter 10: Software\n");
    printf("    ................................................................\n");
    int choice;
    printf("\tSelect your desiralbe chapter(1,10): ");
    scanf("%d",&choice);
    choiceFuction(choice);
}


void chapter1QuizQuestion(){
    char ans;
    printf("\n1. What is computer?\n");
    printf("  a. An electronic device that can process\n");
    printf("  b. A type of transportation vehicle\n");
    printf("  c. A musical intrument\n");
    printf("  d. A cooking tool\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 65 || (int)ans == 97){
        score ++;
    }
    printf("\n2. What was the first electronic computer called?\n");
    printf("  a. IBM PC\n");
    printf("  b. Manitosh\n");
    printf("  c. Electronic Numerical Integrator and Computer(ENIAC)\n");
    printf("  d. Windows\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 67 || (int)ans == 99){
        score ++;
    }
    printf("\n3. What are the two main components of a computer?\n");
    printf("  a. Hardware and software\n");
    printf("  b. Input and output\n");
    printf("  c. Processor and memory\n");
    printf("  d. Monitor and keyboard\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 65 || (int)ans == 97){
        score ++;
    }
    printf("\n4. What does CPU stands for?\n");
    printf("  a. Centeral processing unit\n");
    printf("  b. Computer processing units\n");
    printf("  c. Centeral power units\n");
    printf("  d. Conntrol Processing units\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 65 || (int)ans == 97){
        score ++;
    }
    printf("\n5. What is the primary function of RAM in a computer?\n");
    printf("  a. To store data permanently\n");
    printf("  b. To execute instruction\n");
    printf("  c. To temporarily store dat and instructions for the CPU to access quickly\n");
    printf("  d. To cool the computer\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 67 || (int)ans == 99){
        score ++;
    }

    worngQuestionList();
}