/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "requerimientos.h"



void
gestion_requerimientos_1()
{
	//char *host;
	char protocolo[3];
	char ipServidor[15];
	
	CLIENT *clnt;
	paqueteInformacion  *result_1;
	char *consultarrequerimientos_1_arg;

	int opcion=3;

	do{
           printf("*********CLIENTE DE LA RED***********\n");
           printf("|1-Conectarse con el servidor       |\n");
           printf("|2-Consultar caracteristicas        |\n");
           printf("|3-Salir                            |\n");
           printf("*************************************\n");
           printf("Elija la opcion\n");
           scanf("%d",&opcion);

           switch(opcion){
             case 1:
					clnt = clnt_create (ipServidor, gestion_requerimientos, gestion_requerimientos_version, protocolo);
					if (clnt == NULL) {
						printf("Existe un error de conexión.\n");
						clnt_pcreateerror (ipServidor);
					}else{
							result_1 = consultarrequerimientos_1((void*)&consultarrequerimientos_1_arg, clnt);
							if (result_1 == (paqueteInformacion *) NULL) {
									clnt_perror (clnt, "call failed");
							}     
							printf("------------------------------------------\n");
							printf("Fecha-hora: %s\n",result_1->fechaHora);         
							printf("Sistema operativo: %s\n",result_1->sistemaOperativo);
							printf("Arquitectuta: %s\n",result_1->arquitectura);
							printf("------------------------------------------\n");
					}														
             break;
             case 2:
			 		printf("Digite la dirección del servicio: ");
					scanf("%s",&ipServidor);
			 		printf("Seleccione el protocolo de comunicacion TCP o UDP: ");
					scanf("%s",&protocolo); 
             break;
             case 3:
               		exit(0);
             break;
             default: break;
           }
        }while(opcion !=3);




#ifndef	DEBUG
	
#endif	/* DEBUG */

	


#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main ()
{
	gestion_requerimientos_1 ();
}
