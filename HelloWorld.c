#include <stdio.h>


union un
{
    int a;
    char b;
};

int main(){
    
    union un myun;

    myun.a = 0x12345678;
    if(myun.b == 0x78){
        printf("小端存储");

    }
    else
    {
        printf("大端存储");
    }
}
