#include <unistd.h>
#include <stdio.h>

int main(){
    while(1){
        int a= 20;
        int pid= fork();
        if(pid== 0){
            printf("soy el proceso hijo a=%d \n",a);
        }
        printf("soy el proceso hijo a=%d \n",a);
        printf("Mi hijo es pid=%d \n",pid);

    }
    return 0;
}