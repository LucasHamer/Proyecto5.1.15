#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,disp,c1=0,c2=0,c3=0,c4=0,centro=0;
    float x,y;

    for(i=1;i<=5;i++)
    {
        printf("Participante numero: %d\n\n",i);

        for(disp=1;disp<=3;disp++)
        {
            printf("Ingrese cordenada X: ");
            scanf("%f",&x);
            fflush(stdin);

            printf("Ingrese cordenada Y: ");
            scanf("%f",&y);
            fflush(stdin);
            printf("\n");

            if(x>0&&y>0)
            {
                c1++;
            }
            if(x<0&&y>0)
            {
                c2++;
            }
            if(x<0&&y<0)
            {
                c3++;
            }
            if(x>0&&y<0)
            {
                c4++;
            }
            if(x==0&&y==0)
            {
                centro++;
            }
            if(x==0&&y!=0||x!=0&&y==0)
            {
                printf("Error tiro en el eje\n");
            }
        }
        printf("El participante %d hizo: \n",i);
        printf("Disparos en el primer cuadrante: %d\n",c1);
        printf("Disparos en el segundo cuadrante: %d\n",c2);
        printf("Disparos en el tercer cuadrante: %d\n",c3);
        printf("Disparos en el cuarto cuadrante: %d\n",c4);
        c1=0;
        c2=0;
        c3=0;
        c4=0;
    }
    printf("Disparos en el centro: %d\n",centro);

    return 0;
}
