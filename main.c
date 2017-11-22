//
//  main.c
//  Functions
//
//  Created by Eun Jae Lee on 22/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  1. System define function / Pre defined function / Built in functions / Library functions
//  eg. printf(), scanf(), getch(), clrscr()

//  2. User defined functions
//   - function declaration: function return type, function name, arguments, terminationg semicolon
//          syntax:   return_type function_name(arguments);

//   - function definition
//   - function calling  function_name(argument list);
//

#include <stdio.h>

void sum(int,int); // declare function

int main(int argc, const char * argv[]) {

    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a,&b);
    
    sum(a,b); // call function
    getchar();
}

void sum (int x, int y) {
    int sum;
    sum = x+y;
    printf("Sum is %d \n", sum);
}
