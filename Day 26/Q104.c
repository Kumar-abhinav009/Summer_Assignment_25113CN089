//Write a program to Create quiz application
#include <stdio.h>

int main() {
    char answer;
    int score = 0;

    printf("Welcome to the Quiz!\n");

    // Question 1
    printf("Question 1: What is the capital of France?\n");
    printf("a) London\nb) Berlin\nc) Paris\nd) Madrid\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);

    if (answer == 'c') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect.\n");
    }

    // Question 2
    printf("Question 2: What is 2 + 2?\n");
    printf("a) 3\nb) 4\nc) 5\nd) 6\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);

    if (answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect.\n");
    }

    // Question 3
    printf("Question 3: What is the largest planet in our solar system?\n");
    printf("a) Earth\nb) Jupiter\nc) Saturn\nd) Uranus\n");
    printf("Enter your answer (a/b/c/d): ");
    scanf(" %c", &answer);

    if (answer == 'b') {
        printf("Correct!\n");
        score++;
    } else {
        printf("Incorrect.\n");
    }

    // Display final score
    printf("\nYour final score is: %d/3\n", score);

    return 0;
}