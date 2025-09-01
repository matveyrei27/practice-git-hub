#include <stdio.h> //input output
#include <stdlib.h>
#include <math.h>
#include <stdbool.h> //bool initialization
#include <conio.h> //getch(), etc
#include "HelloWorldbutC.h" //notice header file buatan kita pake "..."

int main()
{


#if 0
    int finalScore();
    {
        int assignment = getScore("Assignment");
        int mid_exam = getScore("Mid Exam");
        int final_exam = getScore("Final Exam");
        double final_score = 0.2 * assignment + 0.3 * mid_exam + 0.5 * final_exam;

        printf("Your final score is %f.\n", final_score);
    }

    int move()
    {
        bool x = true;
        while (x)
        {
            char movement;
            movement = getch();

            switch (movement)
            {
            case 'w':
                printf("Forward\n");
                break;
            case 'a':
                printf("Left\n");
                break;
            case 's':
                printf("Backward\n");
                break;
            case 'd':
                printf("Right\n");
                break;
            case 'f':
                x = false;
                break;
            }
        }
    }

    int Calculator();
    {
        printf("Enter a number: ");
        int num1;
        scanf("%d",&num1);

        printf("Enter an operator: ");
        char op;
        scanf(" %c",&op);

        printf("Enter the second number: ");
        int num2;
        scanf("%d", &num2);

        int result;
        switch(op)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        }

        printf("The result is %d.\n", result);
    }
#endif // 0

    return 0;

}
