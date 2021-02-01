/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _REQUERIMIENTOS_H_RPCGEN
#define _REQUERIMIENTOS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define LONGITUD 30
#define EXTRA_LONGITUD 60

struct paqueteInformacion {
	char fechaHora[LONGITUD];
	char sistemaOperativo[LONGITUD];
	char arquitectura[EXTRA_LONGITUD];
};
typedef struct paqueteInformacion paqueteInformacion;

#define gestion_requerimientos 0x20000001
#define gestion_requerimientos_version 1

#if defined(__STDC__) || defined(__cplusplus)
#define consultarRequerimientos 1
extern  paqueteInformacion * consultarrequerimientos_1(void *, CLIENT *);
extern  paqueteInformacion * consultarrequerimientos_1_svc(void *, struct svc_req *);
extern int gestion_requerimientos_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define consultarRequerimientos 1
extern  paqueteInformacion * consultarrequerimientos_1();
extern  paqueteInformacion * consultarrequerimientos_1_svc();
extern int gestion_requerimientos_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_paqueteInformacion (XDR *, paqueteInformacion*);

#else /* K&R C */
extern bool_t xdr_paqueteInformacion ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_REQUERIMIENTOS_H_RPCGEN */