 #include<stdio.h>
int main(){

    int i=0;
    for(printf("Hello\n");i<3 && printf("");i++){
        printf("Neso\n");
    }
    return 0;

}

//explanation: The output will be:
// Hello
// because the for loop's initialization part prints "Hello" once, and the loop condition (i<3 && printf("")) evaluates to true for i=0, but since printf("") prints nothing, "Neso" is never printed. The loop increments i until it reaches 3, at which point the loop condition fails and the loop exits.