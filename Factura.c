#include <stdio.h>
#include <math.h>

int main (int argc, char *aregv){
    float mes1, mes2, mes3;
    float klh=0.10;
    float mdf1,mdf2,mdf3;
    float vf,vt;
    float vi;
    float vf1,vf2,vf3;
    float f1,f2,f3;
    float desc10,desc5;
    float descuentototal;
    
    printf("Ingrese el consumo en dolares del valor inicial: \n");
    scanf("%f",&vi);
    printf("Ingrese el consumo de los kilovatios del primer mes: \n");
    scanf("%f",&mes1);
    printf("Ingrese el consumo de los kilovatios del segundo mes: \n");
    scanf("%f",&mes2);
    printf("Ingrese el consumo de los kilovatios del tercer mes: \n");
    scanf("%f",&mes3);

    //Proceso de Kw*Costo igual a precio en dolares;
    f1=mes1*klh;
    f2=mes2*klh;
    f3=mes3*klh;
    //Residuo de cada mes;
    vf1= fabs(f1-vi);
    vf2= fabs(f2-f1);
    vf3= fabs(f3-f2);
    //Suma de cada valor ;
    vt= vf1+vf2+vf3+vi;

    if (vt<20)
    {
        desc10 = vt*0.10;
        descuentototal= vt-desc10;
    }else if(vt>=20 && vt<= 30){
        desc5 = vt*0.05;
        descuentototal= vt-desc5;
    }

    printf("El valor final a pagar es: %f\n",vt);
    printf("Con descuento: %f\n",descuentototal);
    printf("Valor a pagar de la factura del primer mes: %f\n",vf1);
    printf("Valor a pagar de la factura del segundo mes: %f\n",vf2);
    printf("Valor a pagar de la factura del tercer mes: %f\n",vf3);
    
}