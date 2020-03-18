/*
Task :
To complete this challenge, you must save a line of input from stdin to a variable, print Hello, World. on a single line, 
and finally print the value of your variable on a second line.
*/
int main() {

    char input_string[105]; 
    gets(input_string);
    printf("Hello, World.\n");
    puts(input_string);
    return 0;
}
