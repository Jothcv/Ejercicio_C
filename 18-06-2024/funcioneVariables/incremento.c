#include <stdio.h>
int main(){
    {   
        
        int x,y;
        y=0;
        x=5;
        printf("%d \n",x);
        printf("%d \n",y);
        //preincrementio
        y=++x;
        printf("%d \n",x);
        printf("%d \n",y);
        //postincremento
        y=x++;
        printf("%d \n",x);
        printf("%d \n",y);
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");


        //predecremento
        y=--x;
        printf("%d \n",x);
        printf("%d \n",y);
        //postdecrementio
        y=x--;
        printf("%d \n",x);
        printf("%d \n",y);


        return 0;
    }
}