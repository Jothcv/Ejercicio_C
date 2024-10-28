#include <stdio.h>
int main(){
    {   
        int d=4;
        float a,b,c=4.58;
        b=c*d;
        printf("%.2f \n",b);

        a=(int)c*d;//este multiplica c con d pero al no estar entre parentesis lo vuelve entero
        printf("%.2f \n",a);
        a=(int)(c*d);
        printf("%.2f  \n",a);
    
        return 0;
    }
}
