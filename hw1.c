#include "stdio.h"
#include "locale.h"
#include "string.h"



int fun1(int num)
{
    if (num==0)
        return 1;
    else
    {
        printf("%d ", num % 10);
        return fun1(num/10);
    }
}

void fun2(int num)
{
    if (num!=0)
    {
        fun2(num/10);
        printf("%d ", num%10);
    }
}

int fun3(char word[],int i)
{
    if (i<strlen(word)/2)
    {
        if (word[i]==word[strlen(word)-i-1])
            return fun3(word,i+1);
        else
            return 0;
    }
    else
        return 1;
}

int fun4(int num,int num1)
{
    if (num==0)
    {
        printf("%d",num1);
        return num1;
    }
    else
    {
        num1 =num1*10+num%10;
        return fun4(num/10,num1);
    }
    
}

int fun5(int mass[],int i,int num1,int i1)
{
    if (i>i1)
    {
        if (num1<mass[i1])
        {
            num1=mass[i1];
            return fun5(mass,i,num1,i1+1);
        }
        else
            return fun5(mass,i,num1,i1+1);
    }
    
}

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int num;
    printf("Задание 1\n");
    num=1234;
    //scanf(" %d", &num);
    fun1(num);
    
    printf("\nЗадание 2\n");
    num=1234;
    //scanf(" %d", &num);
    fun2(num);
    
    printf("\nЗадание 3\n");
    char word[]="asdfdsa";
    //scanf("%s",word);
    int a=fun3(word,0);
    if(a==0) {printf("NO");}
    else {printf("YES");};
        
    printf("\nЗадание 4\n");
    num=1234;
    //scanf(" %d", &num);
    fun4(num,0);
    
    printf("\nЗадание 5\n");
    int i=7;
    int mass[7]={-1,2,3,10,-5,-20,50};
    
    

    
    return 0;
}
