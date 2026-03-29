//biblioteca
#include <stdio.h>

int main()
{
//variaveis
    float areaCirculo, raio,areaQuadrado, ladoQ, areaTrapezio, alturaT, bMenor, bMaior,areaLosango, dMenor, dMaior,areaParalelo, alturaP, baseP,areaTriangulo, alturaTri, baseTri,areaRetangulo, alturaR, baseR;
    int decisao;
    
//decisão
    
    printf("\n");

    printf("  _______        /\\            ______        /\\          ______        ______        ____   \n |   1   |      /  \\          /  3  /       /  \\        /      \\      |      |     /      \\ \n |_______|     / 2  \\        /_____/       < 4  >      /   5    \\     |  6   |    |   7    |\n              /______\\                      \\  /      /__________\\    |______|     \\ ____ / \n                                             \\/                                                \n");
    

    printf("\nDigite o numero da area a ser calculada (em metros):\n1-Retangulo\n2-Triangulo\n3-Paralelograma\n4-Losango\n5-Trapezio\n6-Quadrado\n7-Circulo\n\n");
    scanf("%d",&decisao);
    
    while ( decisao < 1 || decisao > 7 )
    {
        printf("\n\033[31m1 a 7 seu bobao\033[0m\n\n");
        scanf("%d",&decisao);
    }
    
//processos e saidas
    
    if(decisao == 1) //retangulo 
    {
        printf("\nQual a altura?\n");
        scanf("%f",&alturaR);
        printf("\nQual o valor da base?\n");
        scanf("%f",&baseR);
        areaRetangulo = alturaR * baseR;
        printf("\nA area desse retangulo eh \033[0;32m%.2f m2\033[0m",areaRetangulo);  
    }

    if(decisao == 2) //triangulo 
    {
        printf("\nQual a altura?\n");
        scanf("%f",&alturaTri);
        printf("\nQual o valor da base?\n");
        scanf("%f",&baseTri);
        areaTriangulo = (alturaTri * baseTri)/2;
        printf("\nA area desse triangulo eh \033[0;32m%.2f m2\033[0m",areaTriangulo);    
    }
    
    if(decisao == 3) //paralelograma 
    {
        printf("\nQual a altura?\n");
        scanf("%f",&alturaP);
        printf("\nQual o valor da base?\n");
        scanf("%f",&baseP);
        areaParalelo = alturaP * baseP;
        printf("\nA area desse paralelograma eh \033[0;32m%.2f m2\033[0m",areaParalelo);     
    }
    
    if(decisao == 4) //losango
    {
        printf("\nQual o valor da diagonal maior?\n");
        scanf("%f",&dMaior);
        printf("\nQual o valor da diagonal menor?\n");
        scanf("%f",&dMenor);
        areaLosango = (dMaior * dMenor)/2;
        printf("\nA area desse Losango eh \033[0;32m%.2f m2\033[0m",areaLosango);    
    }  
    
    if(decisao == 5) //trapezio
    {
        printf("\nQual o valor da base maior?\n");
        scanf("%f",&bMaior);
        printf("\nQual o valor da base menor?\n");
        scanf("%f",&bMenor);
        printf("\nQual a altura?\n");
        scanf("%f",&alturaT);
        areaTrapezio = ((bMaior+bMenor) * alturaT)/2;
        printf("\nA area desse trapezio eh \033[0;32m%.2f m2\033[0m",areaTrapezio);   
    }
    
    if(decisao == 6) //quadrado
    {
        printf("\nqual o valor do lado?\n");
        scanf("%f",&ladoQ);
        areaQuadrado = ladoQ * ladoQ;
        printf("\nA area desse quadrado eh \033[0;32m%.2f m2\033[0m",areaQuadrado);    
    }
    
    if(decisao == 7) //circulo
    {
        printf("\nquanto eh o seu raio ae?\n");
        scanf("%f",&raio);
        areaCirculo = ((raio * raio)* 3.14);
        printf("\nA area dessa bola eh \033[0;32m%.2f m2\033[0m",areaCirculo);   
    }
    
    
    return 0;
}
