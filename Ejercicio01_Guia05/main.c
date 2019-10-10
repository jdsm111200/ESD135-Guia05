#include <stdio.h>
char conversor(int n, int b);
int main()
{
    int n=0,b=0;
    printf("Ingrese el numero a convertir:");
    scanf("%d",&n);
    printf("Ingrese la base(2-16): ");
    scanf("%d",&b);
    conversor(n,b);
    return 0;
}
char conversor(int n, int b){
    int sist=0;
    if(!n)
        return 'v';
    else {
        sist=n%b;
        n=n/b;
        conversor(n,b);
    }
    switch(sist){
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d",sist);
    }
}

