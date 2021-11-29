/*
*  UCF COP3330 Fall 2021 Assignment 5 Solution
*  Copyright 2021 Gabriel Mousa
*/
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void parser(double num1, double num2, char operation[1]);

int main() {

    double num1, num2;
    char operation[1];

    //Get the values
    cin >> operation >> num1 >> num2;

    //Parse the operation and do the operation
    parser(num1, num2, operation);

} 

void parser(double num1, double num2, char operation[1]){

    //Parsing the operation entry and outputting based on the operation
    
    if(strncmp(operation, "+", 1) == 0){
        cout << num1 + num2;
    } else if(strncmp(operation, "-", 1) == 0){
        cout << num1 - num2;
    } else if(strncmp(operation, "*", 1) == 0){
        cout << num1 * num2;
    } else if(strncmp(operation, "/", 1) == 0){
        cout << num1 / num2;
    }
}