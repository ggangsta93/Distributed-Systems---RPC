/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "requerimientos.h"

bool_t
xdr_paqueteInformacion (XDR *xdrs, paqueteInformacion *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->fechaHora, LONGITUD,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->sistemaOperativo, LONGITUD,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->arquitectura, EXTRA_LONGITUD,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}
