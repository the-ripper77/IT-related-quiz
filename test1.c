#include<stdio.h>
#include<stdlib.h>

static int score= 0;
static int mistake=0;

void finalResult();
void quizChapterDetail();
void chapter1QuizQuestion();

void finalResult(){
    printf("    ................................................................\n");
    char loop;
    int total;
    total = score + mistake;
    printf("\tTotal Point: %d \n", total);
    printf("\tTotal Score: %d\n", score);
    printf("\tTotal Mistake: %d \n", mistake);
    score= 0;
    mistake= 0;
    printf("    ................................................................\n");
    printf("# Do you want to try again?, Enter y or n: ");
    scanf("%s", &loop);
    if(loop == 'Y' || loop == 'y'){
        quizChapterDetail();
    }
}



void main(){
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
    printf("Chapter 11: Number System and Conservation Boolean Logic\n");
    printf("    ................................................................\n");
    int choice;
    printf("\tSelect your desiralbe chapter(1-10): ");
    scanf("%d",&choice);
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


void chapter1QuizQuestion(){
    char ans;
    printf("\n1. What is computer?\n");
    printf("  a. An electronic device that can process\n");
    printf("  b. A type of transportation vehicle\n");
    printf("  c. A musical intrument\n");
    printf("  d. A cooking tool\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 65 || (int)ans == 97){
        score ++;   
    }
    else{
        mistake++;
        printf("Your answer is wrong!!\n");

    }
    printf("\n2. What was the first electronic computer called?\n");
    printf("  a. IBM PC\n");
    printf("  b. Manitosh\n");
    printf("  c. Electronic Numerical Integrator and Computer(ENIAC)\n");
    printf("  d. Windows\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 67 || (int)ans == 99){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n3. What are the two main components of a computer?\n");
    printf("  a. Hardware and software\n");
    printf("  b. Input and output\n");
    printf("  c. Processor and memory\n");
    printf("  d. Monitor and keyboard\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 65 || (int)ans == 97){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n4. What does CPU stands for?\n");
    printf("  a. Centeral processing unit\n");
    printf("  b. Computer processing units\n");
    printf("  c. Centeral power units\n");
    printf("  d. Conntrol Processing units\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 65 || (int)ans == 97){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");
        
    }
    printf("\n5. What is the primary function of RAM in a computer?\n");
    printf("  a. To store data permanently\n");
    printf("  b. To execute instruction\n");
    printf("  c. To temporarily store dat and instructions for the CPU to access quickly\n");
    printf("  d. To cool the computer\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 67 || (int)ans == 99){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n6. When was Napier's Bone invented?\n");
    printf("  a. 1617\n");
    printf("  b. 1716\n");
    printf("  c. 1821\n");
    printf("  d. 1724\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 65 || (int)ans == 97){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n7. Who designed the ENIAC?\n");
    printf("  a. Alan Turing\n");
    printf("  b. John Atanasoff\n");
    printf("  c. J. Presper Eckert and John W. Mauchly\n");
    printf("  d. Grace Hopper\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 67 || (int)ans == 99){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n8. What is virtual memory?\n");
    printf("  a. A type of RAM\n");
    printf("  b. A type of storage device\n");
    printf("  c. A portion of the hard drive set up to mimic RAM\n");
    printf("  d. A type of cooling system\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 67 || (int)ans == 99){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n9. How does RAM affect the performance of a computer?\n");
    printf("  a. The more RAM a computer has, the slower it will run\n");
    printf("  b. The more RAM a computer has, the faster it will run\n");
    printf("  c. RAM has no effect on the performance of a computer\n");
    printf("  d. RAM will only improve performance if the computer is running multiple programs\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 66 || (int)ans == 98){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n10. What is the difference between RAM and storage devices such as hard drives?\n");
    printf("  a. RAM is faster but less reliable, while storage devices are slower but more reliable\n");
    printf("  b. RAM is temporary and storage devices are permanent\n");
    printf("  c. RAM is more expensive and storage devices are less expensive\n");
    printf("  d. RAM is physical and storage devices are virtual\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 66 || (int)ans == 98){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n11. How does virtual memory affect the performance of a computer?\n");
    printf("  a. It improves performance\n");
    printf("  b. It degrades performance\n");
    printf("  c. It has no effect on performance\n");
    printf("  d. It depends on the amount of virtual memory available\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 67 || (int)ans == 99){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n12. What is the purpose of virtual memory?\n");
    printf("  a. To increase the amount of physical RAM in a computer\n");
    printf("  b. To provide a backup of physical RAM\n");
    printf("  c. To allow a computer to run programs that require more memory than the physical RAM available\n");
    printf("  d. To improve the performance of storage devices\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 67 || (int)ans == 99){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n13. What is the difference between virtual memory and a swap file?\n");
    printf("  a. Virtual memory is used by Windows, while swap files are used by Linux\n");
    printf("  b. Virtual memory is a portion of the hard drive, while swap files are a portion of an SSD\n");
    printf("  c. Virtual memory is controlled by the operating system, while swap files are controlled by the user\n");
    printf("  d. Virtual memory is used for memory management, while swap files are used for file management\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 66 || (int)ans == 98){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }

    printf("\n14. What is the primary function of the CPU?\n");
    printf("  a. To store data\n");
    printf("  b. To process data\n");
    printf("  c. To display data on the screen\n");
    printf("  d. To transmit data\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 66 || (int)ans == 98){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n15. What is another name for the CPU?\n");
    printf("  a. Microprocessor\n");
    printf("  b. Memory chip\n");
    printf("  c. Graphics card\n");
    printf("  d. Network card\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 65 || (int)ans == 97){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n16. What is the most important component of a computer?\n");
    printf("  a. CPU\n");
    printf("  b. RAM\n");
    printf("  c. Hard drive\n");
    printf("  d. To Power Supply\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 65 || (int)ans == 97){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n17. How many cores does a CPU typically have?\n");
    printf("  a. 1\n");
    printf("  b. 2\n");
    printf("  c. 4\n");
    printf("  d. 8\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 68 || (int)ans == 100){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n18. What type of instructions can a CPU execute?\n");
    printf("  a. Audio instructions\n");
    printf("  b. Video instructions\n");
    printf("  c. Data instructions\n");
    printf("  d. All of the above\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 68 || (int)ans == 100){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n19. What are the two main components of a CPU?\n");
    printf("  a. Control Unit and Arithmetic Logic Unit\n");
    printf("  b. Memory Unit and Arithmetic Unit\n");
    printf("  c. Control Unit and Memory Unit\n");
    printf("  d. Arithmetic Unit and Logic Unit\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 65 || (int)ans == 97){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n20. What is the clock speed of a CPU?\n");
    printf("  a. The amount of RAM it has\n");
    printf("  b. The speed at which it runs\n");
    printf("  c. The amount of storage it has\n");
    printf("  d. The amount of power it consumes\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 66 || (int)ans == 98){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }
    printf("\n21 What is the purpose of the cache in a CPU?\n");
    printf("  a. To store frequently used data\n");
    printf("  b. To cool the CPU\n");
    printf("  c. To increase the clock speed\n");
    printf("  d. To increase the number of cores\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf("%s",&ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') 
    {
        printf("\n Error: The answer you provide is not in the option.\n\tTry again from the beginning!!\n\tYour option are: a, b, c, d \n");
        chapter1QuizQuestion();
    }
    else if( (int)ans == 65 || (int)ans == 97){
        score ++;
    }
    else{
        mistake++;
        printf("\tYour answer is wrong!!\n");

    }

    printf("\n22 What is the difference between a CPU and a GPU?\n");
    printf("  a. A CPU is designed to handle general purpose tasks while a GPU is designed to handle specific tasks, such as video rendering.\n");
    printf("  b. A CPU is more powerful than a GPU\n");
    printf("  c. A CPU is more expensive than a GPU\n");
    printf("  d. A CPU is used for gaming while a GPU is used for video editing\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n23 What is RAM in a computer?\n");
    printf("  a. Random Access Memory\n");
    printf("  b. Read-only Memory\n");
    printf("  c. Permanent storage\n");
    printf("  d. Graphics card\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n24 What is the purpose of an operating system?\n");
    printf("  a. To manage the resources of a computer\n");
    printf("  b. To run applications\n");
    printf("  c. To store data\n");
    printf("  d. To connect to the internet\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n25 What is the difference between hardware and software?\n");
    printf("  a. Hardware is physical, software is virtual\n");
    printf("  b. Hardware is faster, software is slower\n");
    printf("  c. Hardware is more expensive, software is cheaper\n");
    printf("  d. Hardware is input, software is output\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n26 What is a computer virus?\n");
    printf("  a. A harmful program that can damage a computer's software\n");
    printf("  b. Program that can protect a computer from harmful software\n");
    printf("  c. A type of hardware component\n");
    printf("  d. A type of storage device\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n27 What is a computer network?\n");
    printf("  a. A group of computers connected together for communication\n");
    printf("  b. A type of storage device\n");
    printf("  c. A type of cooling system\n");
    printf("  d. A type of input device\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n28 What is cloud computing?\n");
    printf("  a. The use of remote servers to store, manage, and process data\n");
    printf("  b. The use of virtual reality technology in computing\n");
    printf("  c. The use of artificial intelligence in computing\n");
    printf("  d. The use of quantum computing\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n29 What is a computer bug?\n");
    printf("  a. An error in a computer program or system\n");
    printf("  b. A type of virus that affects computer software\n");
    printf("  c. A problem with the hardware of a computer\n");
    printf("  d. A problem with the internet connection\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n30 What can a computer bug cause?\n");
    printf("  a. Minor annoyances\n");
    printf("  b. Serious data loss\n");
    printf("  c. System failures\n");
    printf("  d. All of the above\n");
    printf("    ................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n31 What is a bug in software debugging?\n");
    printf("  a. The process of identifying and removing bugs in software\n");
    printf("  b. The process of protecting software from bugs\n");
    printf("  c. The process of improving the performance of software\n");
    printf("  d. The process of creating new software\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n32 How can bugs be caused in a computer program?\n");
    printf("  a. Coding errors\n");
    printf("  b. Logic errors\n");
    printf("  c. Unexpected interactions between different software components\n");
    printf("  d. All of the above\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n33 What is a software patch?\n");
    printf("  a. A temporary fix for a bug in software\n");
    printf("  b. A permanent fix for a bug in software\n");
    printf("  c. A new version of a software\n");
    printf("  d. A type of software that protects a computer from bugs\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n34 What is a regression bug?\n");
    printf("  a. A bug that is caused by the introduction of a new feature in software\n");
    printf("  b. A bug that was previously fixed, but has reappeared\n");
    printf("  c. A bug that affects only a specific version of software\n");
    printf("  d. A bug that affects only certain types of hardware\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n35 What is a buffer overflow?\n");
    printf("  a. A type of bug that can be caused by input validation errors\n");
    printf("  b. A type of bug that can cause a program to crash\n");
    printf("  c. A type of bug that can be used to exploit a vulnerability in software\n");
    printf("  d. A type of bug that can cause data loss\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n36 What is a Heisenbug?\n");
    printf("  a. A type of bug that is difficult to reproduce\n");
    printf("  b. A type of bug that only occurs under specific conditions\n");
    printf("  c. A type of bug that disappears or changes behavior when attempts are made to observe or study it\n");
    printf("  d. All of the above\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n37 Which of the following is the product of data processing\n");
    printf("  a. Information\n");
    printf("  b. Data\n");
    printf("  c. Software\n");
    printf("  d. Program\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n38 A collection of sixteen bits is called\n");
    printf("  a. Two bytes\n");
    printf("  b. Record\n");
    printf("  c. Word\n");
    printf("  d. Two nibble\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n39 A computer derives its basic strength from\n");
    printf("  a. Speed\n");
    printf("  b. Accuracy\n");
    printf("  c. Storage capacity\n");
    printf("  d. All of them\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n40. Modern computers compared to earlier computers are\n");
    printf("  a. Faster and larger\n");
    printf("  b. Faster and reliable\n");
    printf("  c. Slower but more reliable\n");
    printf("  d. Less reliable\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n41 The use of computers for business applications is attractive because of its\n");
    printf("  a. Automation\n");
    printf("  b. Diligence\n");
    printf("  c. Versatility\n");
    printf("  d. All of them\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n42 A BIT represents a\n");
    printf("  a. Decimal digit\n");
    printf("  b. Hexadecimal digit\n");
    printf("  c. Binary digit\n");
    printf("  d. Octal digit\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n43 Computer cannot do anything without a\n");
    printf("  a. Memory\n");
    printf("  b. Chip\n");
    printf("  c. Program\n");
    printf("  d. I/O devices\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n44 Pick up the false statement\n");
    printf("  a. Computer can manipulate both numeric and non-numeric symbols\n");
    printf("  b. The facts represented by numeric and non-numeric symbols are called information\n");
    printf("  c. Information is relevant knowledge that results from the processing and useful form\n");
    printf("  d. A computer has mainly two types of memory: primary and secondary\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n45 Who was the first computer programmer in the history of computers?\n");
    printf("  a. John Von Neumann\n");
    printf("  b. Charles Babbage\n");
    printf("  c. Lady Ada\n");
    printf("  d. William Oughtred\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n46 Clock speed is measured in...\n");
    printf("  a. Bits per second\n");
    printf("  b. Baud\n");
    printf("  c. Bytes\n");
    printf("  d. Hertz\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n47 Abacus was the first\n");
    printf("  a. Mechanical computer\n");
    printf("  b. Electronic computer\n");
    printf("  c. Mechanical calculator\n");
    printf("  d. Electro-mechanical calculator\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n48 In Abacus, the value of each bead in heaven and earth was\n");
    printf("  a. 5 and 1\n");
    printf("  b. 5 and 10\n");
    printf("  c. 1 and 5\n");
    printf("  d. 1 and 10\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n49 Who is the father of the computer\n");
    printf("  a. John Von Neumann\n");
    printf("  b. Charles Babbage\n");
    printf("  c. John Napierd\n");
    printf("  d. Joseph M. Jacquard\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n50 Who developed Stepped Reckoner?\n");
    printf("  a. Leibniz\n");
    printf("  b. Charles Babbage\n");
    printf("  c. John Napierd\n");
    printf("  d. Joseph M. Jacquard\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n51 Which of the following is the first digital computer to use the \"stored program\" concept?\n");
    printf("  a. ENIAC\n");
    printf("  b. EDVAC\n");
    printf("  c. UNIVAC\n");
    printf("  d. EDSAC\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n52 UNIVAC is\n");
    printf("  a. Universal Automatic Computer\n");
    printf("  b. Universal Array Computer\n");
    printf("  c. Unique Automatic Computer\n");
    printf("  d. Unvalued Automatic Computer\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n53 What was the computer invented by John V. Atanasoff and Clifford Berry?\n");
    printf("  a. ABC\n");
    printf("  b. Mark I\n");
    printf("  c. UNIVAC\n");
    printf("  d. EDVAC\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n54 John Napier invented Logarithm in\n");
    printf("  a. 1671\n");
    printf("  b. 1612\n");
    printf("  c. 1614\n");
    printf("  d. 1822\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n55 The main electronic component used in second-generation computers was...\n");
    printf("  a. IC\n");
    printf("  b. Transistor\n");
    printf("  c. VLSI\n");
    printf("  d. Vacuum Tube\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n56 The current generation of computers\n");
    printf("  a. Second\n");
    printf("  b. Fifth\n");
    printf("  c. Fourth\n");
    printf("  d. Third\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n57 The fifth-generation digital computer will be\n");
    printf("  a. extremely low-cost\n");
    printf("  b. expensive\n");
    printf("  c. artificial intelligence\n");
    printf("  d. versatility\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n58 A kilobyte also referred to as KB, is equal to\n");
    printf("  a. 1000 bytes\n");
    printf("  b. 1024 bytes\n");
    printf("  c. 2048 bytes\n");
    printf("  d. 512 bytes\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n59 Mobile computing allows the transmission of data from one wireless-enabled device to another via\n");
    printf("  a. any device\n");
    printf("  b. a wired device\n");
    printf("  c. a wireless-enabled device\n");
    printf("  d. all of the above\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n60 Which of the following can be considered as the drawbacks of the Mobile and Wireless Devices?\n");
    printf("  a. smaller keypads\n");
    printf("  b. consumes power rapidly\n");
    printf("  c. requires a big power source\n");
    printf("  d. all of the above\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n61 Which of the following is the most powerful type of the computer\n");
    printf("  a. mainframe\n");
    printf("  b. superconductor\n");
    printf("  c. microcomputer\n");
    printf("  d. supercomputer\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n62 Supercomputers are mainly useful for\n");
    printf("  a. mathematical intensive scientific applications\n");
    printf("  b. data-retrieval operations\n");
    printf("  c. input-output intensive processing\n");
    printf("  d. all of the above\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n63 Firmware means...\n");
    printf("  a. software\n");
    printf("  b. hardware\n");
    printf("  c. software available on hardware\n");
    printf("  d. none\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n64 In a computer, 16 bits of the address bus are used to specify address in the RAM, the number of the addresses will be...\n");
    printf("  a. 256\n");
    printf("  b. 65536\n");
    printf("  c. 16536\n");
    printf("  d. 16000\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n65 Which is a part of the CPU?\n");
    printf("  a. Monitor\n");
    printf("  b. ALU\n");
    printf("  c. Modem\n");
    printf("  d. none of them\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n66 The CPU consists of\n");
    printf("  a. control unit, primary storage and secondary storage\n");
    printf("  b. input, output and processing\n");
    printf("  c. control unit, arithmetic logic unit and primary storage\n");
    printf("  d. input, processing and storage\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n67 An offline device is...\n");
    printf("  a. a device, which is not connected to CPU\n");
    printf("  b. a device which is not connected to CPU\n");
    printf("  c. a device which is in the breakdown stage\n");
    printf("  d. none of these\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n68 Which of the following is the fastest...\n");
    printf("  a. CPU\n");
    printf("  b. magnetic tapes and disks\n");
    printf("  c. video terminal\n");
    printf("  d. sensors, mechanical controllers\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n69 The register which contains the data to be written into or readout of the addressed location is known as...\n");
    printf("  a. index register\n");
    printf("  b. memory address register\n");
    printf("  c. memory data register\n");
    printf("  d. program counter\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n70 The register which keeps track of the execution of a program and which contains the memory address of the next instruction to be executed is known as...\n");
    printf("  a. index register\n");
    printf("  b. instruction registers\n");
    printf("  c. memory address register\n");
    printf("  d. program counter\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n71 Which of the following is used as storage locations both in the ALU and in the control section of a computer\n");
    printf("  a. accumulator\n");
    printf("  b. register\n");
    printf("  c. adder\n");
    printf("  d. decoder\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n72 Accumulator is a....\n");
    printf("  a. hardwired unit\n");
    printf("  b. sequential circuit\n");
    printf("  c. finite state machine\n");
    printf("  d. register\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n73 Arithmetic logic unit....\n");
    printf("  i. Perform arithmetic operations\n");
    printf("  ii. Store data\n");
    printf("  iii. perform comparison\n");
    printf("  iv. Communicate with input devices\n");
    printf("  of the above the correct one\n");
    printf("  a. i only\n");
    printf("  b. ii only\n");
    printf("  c. i and ii only\n");
    printf("  d. i and iii only\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n74 A collection of wires that connects several devices is called...\n");
    printf("  a. link\n");
    printf("  b. bus\n");
    printf("  c. cable\n");
    printf("  d. port\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n75 Memories in which any location can be reached in a fixed and short amount of time after specifying its address is called...\n");
    printf("  a. sequential access memory\n");
    printf("  b. random access memory\n");
    printf("  c. secondary memory\n");
    printf("  d. mass storage\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n76 Which of the following is a main secondary storage device?\n");
    printf("  a. DRAM\n");
    printf("  b. SRAM\n");
    printf("  c. Pen drive\n");
    printf("  d. Hard disk drive\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n77 Which of the following is not used as secondary storage device...\n");
    printf("  a. semiconductor memory\n");
    printf("  b. magnetic disk\n");
    printf("  c. magnetic tape\n");
    printf("  d. optical disk\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n78. Which of the following memory is volatile...\n");
    printf("  a. RAM\n");
    printf("  b. ROM\n");
    printf("  c. EPROM\n");
    printf("  d. magnetic tapes\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n79. The memory which is programmed at the time it is manufactured is...\n");
    printf("  a. ROM\n");
    printf("  b. RAM\n");
    printf("  c. PROM\n");
    printf("  d. EPROM\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n80. Which memory is non-volatile and may be written only once...\n");
    printf("  a. ROM\n");
    printf("  b. RAM\n");
    printf("  c. PROM\n");
    printf("  d. EPROM\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n81. The fastest type of memory is ...\n");
    printf("  a. tape\n");
    printf("  b. semi-conductor memory\n");
    printf("  c. disk\n");
    printf("  d. bubble memory\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n82. On-chip cache has ...\n");
    printf("  a. lower access time than RAM\n");
    printf("  b. larger capacity than off-chip cache\n");
    printf("  c. becomes absolute\n");
    printf("  d. becomes obsolete\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n83. Non-volatility is an important advantage of ...\n");
    printf("  a. CDs\n");
    printf("  b. magnetic tapes and disks\n");
    printf("  c. magnetic bubbles\n");
    printf("  d. both b and c\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n84. Which of the following statements is wrong...\n");
    printf("  a. magnetic core memory, RAMs and ROMs have constant access time\n");
    printf("  b. magnetic tape is non-volatile\n");
    printf("  c. semi-conductor memories are used as a mass memory medium\n");
    printf("  d. An EPROM can be programmed, erased and reprogrammed by the user with an EPROM programming instrument\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n85. Which of the following storage is volatile\n");
    printf("  a. semiconductor memory\n");
    printf("  b. floppy disk\n");
    printf("  c. CD-ROM\n");
    printf("  d. core memory\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n86. RAM chips...\n");
    printf("  a. allow the computer to store data temporarily\n");
    printf("  b. store data indefinitely unless you delete it\n");
    printf("  c. is secondary memory\n");
    printf("  d. all of the above\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n87. EEPROM is...\n");
    printf("  a. easily erasable\n");
    printf("  b. non-erasable\n");
    printf("  c. effectively erasable\n");
    printf("  d. electrically erasable\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n88. In magnetic disks data is organized on the platter in a concentric set of rings called...\n");
    printf("  a. sector\n");
    printf("  b. track\n");
    printf("  c. head\n");
    printf("  d. block\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n89. In comparison to the internal (main) memory, tape or disk memory is...\n");
    printf("  a. slower and more expensive\n");
    printf("  b. slower and less expensive\n");
    printf("  c. faster and more expensive\n");
    printf("  d. faster and less expensive\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n90. A microcomputer consists of at least an input unit, an output unit, a microprocessor unit and a...\n");
    printf("  a. stabilizer\n");
    printf("  b. memory unit\n");
    printf("  c. printer\n");
    printf("  d. network\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n91. Magnetic tape can serve as....\n");
    printf("  a. input media\n");
    printf("  b. output media\n");
    printf("  c. secondary storage media\n");
    printf("  d. all of the above\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n92. Inputs to your computer is accomplished using the...\n");
    printf("  a. screen\n");
    printf("  b. keyboard\n");
    printf("  c. printer\n");
    printf("  d. plotter\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n93. Which of the following device can be used to directly input printed text\n");
    printf("  a. OCR\n");
    printf("  b. mouse\n");
    printf("  c. MIC\n");
    printf("  d. Joystick\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n94. Bar codes stores information using ...\n");
    printf("  a. punched holes\n");
    printf("  b. dots\n");
    printf("  c. thick and thin lines\n");
    printf("  d. all of the above\n");
    printf("    .................................................................\n");
    printf("\tEnter your answer(a,b,c,d): ");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n95. In which storage device, recording is done by burning tiny pits on a circular disk\n");
    printf("  a. punched cards\n");
    printf("  b. floppy disk\n");
    printf("  c. CD\n");
    printf("  d. magnetic tape\n");
    printf("    .................................................................\n");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n96. What device is used for entering x-y coordinates\n");
    printf("  a. card reader\n");
    printf("  b. keyboard\n");
    printf("  c. joystick\n");
    printf("  d. all of the above\n");
    printf("    .................................................................\n");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n97. Which of the following is the output device?\n");
    printf("  a. hard disk\n");
    printf("  b. scanner\n");
    printf("  c. printer\n");
    printf("  d. RAM\n");
    printf("    .................................................................\n");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'c' || ans == 'C') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n98. The computer device primarily used to provide hardcopy is the...\n");
    printf("  a. CRT\n");
    printf("  b. line printer\n");
    printf("  c. computer console\n");
    printf("  d. card reader\n");
    printf("    .................................................................\n");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'b' || ans == 'B') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n99. Which of the following printers uses light beam and electrostatically sensitive black powder\n");
    printf("  a. dot matrix printer\n");
    printf("  b. daisy wheel printer\n");
    printf("  c. chain printer\n");
    printf("  d. laser printer\n");
    printf("    .................................................................\n");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'd' || ans == 'D') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }
    printf("\n100. Impact printers....\n");
    printf("  a. strike a ribbon against the paper to produce character images\n");
    printf("  b. include ink-jet and thermal devices\n");
    printf("  c. are more expensive than laser printers\n");
    printf("  d. use optical technology\n");
    printf("    .................................................................\n");
    scanf(" %c", &ans);
    if (ans != 'a' && ans != 'A' && ans != 'b' && ans != 'B' && ans != 'c' && ans != 'C' && ans != 'd' && ans != 'D') {
        printf("\n Error: The answer you provided is not in the options.\n\tTry again from the beginning!!\n\tYour options are: a, b, c, d \n");
        chapter1QuizQuestion();
    } else if (ans == 'a' || ans == 'A') {
        score++;
    } else {
        mistake++;
        printf("\tYour answer is wrong!!\n");
    }

finalResult();


}