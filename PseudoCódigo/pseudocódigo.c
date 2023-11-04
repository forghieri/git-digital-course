#include <stdio.h>
#include <stdlib.h>

  int opcaomenu,valor,saldo = 1500;

void consultarSaldo(){

     printf("\nSeu saldo eh de: %d\n", saldo);
      system("pause");
     
}
void deposito(){
        printf("\t\t\n DEPOSITO");
        printf("\n digite o valor a depositar: ");
        scanf("%d", & valor);
        saldo = saldo + valor;
        printf("\nSeu saldo eh de %d\n", saldo);  
         system("pause");
       
}
void saque (){
        printf("SAQUE\n");
        printf("Digite o valor que deseja sacar: ");
        scanf("%d",& valor);
            if (valor >= saldo)
            {
            printf("\nQuaintia invalida");
            }
             else{
            saldo = saldo - valor;
            printf("\nSeu saldo eh de %d\n",saldo);
            
            }
             system("pause");
}
void finalizar(){

    printf ("Fim do programa");
    printf("\nFinalizando.....");
}
void menu (){

      while (opcaomenu != 4)
      {
        
        system("cls");
        printf("Bem vindo ao seu banco\n\n");
        printf("oque deseja hoje?");

         printf("\n\n1 - Mostrar saldo");
        printf("\n2 - Efetuar deposito");
        printf("\n3 - Efetuar saque");
        printf("\n4 - Finalizar\n\n");
        scanf("%d",& opcaomenu);

        switch (opcaomenu)
        {
        case 1:
            consultarSaldo();
            break;
        case 2:

        deposito();
        break;
        case 3: 

        saque();
        break;

        case 4:

        finalizar(); 
        
        break;
        default:
        printf("\n\nComando invalido, tecle ENTER para tentar novamente");
        system("pause");
        system ("cls");
            break;
          
        }
      }


}

int main (){
      
      
        menu();
        system("pause");
        return 0;
}