/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "requerimientos.h"

#include <string.h>
#include <stdio.h>
#include <time.h>
#include <sys/utsname.h>

/*static paqueteInformacion pqInfo;*/

paqueteInformacion * consultarrequerimientos_1_svc(void *argp, struct svc_req *rqstp)
{
	static paqueteInformacion  result;

	/*Obteniendo fecha y hora*/
	time_t t = time(NULL);
 	struct tm tm = *localtime(&t);
	snprintf(result.fechaHora, sizeof(result.fechaHora), "%d-%02d-%02d %02d:%02d:%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
	/*Obteniendo estructura de utsname*/
	
	/*Version con estructura puntero*/
	struct utsname *puntero;
	puntero=malloc(sizeof(struct utsname));
	int estado = uname(puntero);
	strcpy(result.sistemaOperativo, puntero->sysname);
	strcpy(result.arquitectura, puntero->machine);
	free(puntero);
	printf("\nInformación enviada.\n");

	/*Version con estructura*/
	/*struct utsname buf; 
	int estado = estado = uname(&buf);
	strcpy(result.sistemaOperativo, buf.sysname);
	strcpy(result.arquitectura, buf.machine);
	*/
return &result;
}
