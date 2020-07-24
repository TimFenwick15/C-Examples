#ifndef EXTERN_H
#define EXTERN_H

#ifdef DECLARE
#define EXTERN
#define _INIT(x) = x
#else
#define EXTERN extern
#define _INIT(x)
#endif

EXTERN int global _INIT(0);

#endif

