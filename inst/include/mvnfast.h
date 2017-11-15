#ifndef __MVNFAST_H__
#define ___MVNFAST_H__
#include <R.h>
#include <Rinternals.h>
#include <Rdefines.h>
#include <Rconfig.h>
#include <R_ext/Rdynload.h>
#if defined(__cplusplus)
extern "C" {
#endif

  SEXP dmixtCpp(SEXP X_, SEXP mu_, SEXP sigma_, SEXP df_, SEXP w_, SEXP log_, SEXP ncores_, SEXP isChol_, SEXP A_){
    static SEXP (*fun)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP)=NULL;
    if (fun == NULL) fun = (SEXP(*)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP)) R_GetCCallable("mvnfast","dmixtCpp");
    return fun(X_, mu_, sigma_, df_, w_, log_, ncores_, isChol_, A_);
  }


  SEXP dmvtCpp(SEXP X_, SEXP mu_, SEXP sigma_, SEXP df_, SEXP log_, SEXP ncores_, SEXP isChol_){
    static SEXP (*fun)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP)=NULL;
    if (fun == NULL) fun = (SEXP(*)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP)) R_GetCCallable("mvnfast","dmvtCpp");
    return fun(X_, mu_, sigma_, df_, log_, ncores_, isChol_);
  }

  SEXP mahaCpp(SEXP X, SEXP mu, SEXP sigma, SEXP ncores, SEXP isChol){
    static SEXP (*fun)(SEXP, SEXP, SEXP, SEXP, SEXP)=NULL;
    if (fun == NULL) fun = (SEXP(*)(SEXP, SEXP, SEXP, SEXP, SEXP)) R_GetCCallable("mvnfast","mahaCpp");
    return fun(X, mu, sigma, ncores, isChol);
  }

  SEXP msCpp(SEXP init_, SEXP X_, SEXP cholDec_, SEXP ncores_, SEXP tol_, SEXP store_){
    static SEXP (*fun)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP)=NULL;
    if (fun == NULL) fun = (SEXP(*)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP)) R_GetCCallable("mvnfast","msCpp");
    return fun(init_, X_, cholDec_, ncores_, tol_, store_);
  }

  SEXP rmixnCpp(SEXP n_, SEXP mu_, SEXP sigma_, SEXP indV_, SEXP ncores_, SEXP isChol_,  SEXP retInd_, SEXP A_){
    static SEXP (*fun)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP,  SEXP, SEXP)=NULL;
    if (fun == NULL) fun = (SEXP(*)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP,  SEXP, SEXP)) R_GetCCallable("mvnfast","rmixnCpp");
    return fun(n_, mu_, sigma_, indV_, ncores_, isChol_,  retInd_, A_);
  }

  SEXP rmixtCpp(SEXP n_, SEXP mu_, SEXP sigma_, SEXP df_, SEXP indV_, SEXP ncores_, SEXP isChol_,  SEXP retInd_, SEXP A_){
    static SEXP (*fun)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP)=NULL;
    if (fun == NULL) fun = (SEXP(*)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP)) R_GetCCallable("mvnfast","rmixtCpp");
    return fun(n_, mu_, sigma_, df_, indV_, ncores_, isChol_,  retInd_, A_);
  }

  SEXP rmvnCpp(SEXP n_, SEXP mu_, SEXP sigma_, SEXP ncores_, SEXP isChol_, SEXP A_){
    static SEXP (*fun)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP)=NULL;
    if (fun == NULL) fun = (SEXP(*)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP)) R_GetCCallable("mvnfast","rmvnCpp");
    return fun(n_, mu_, sigma_, ncores_, isChol_, A_);
  }

  SEXP rmvtCpp(SEXP n_, SEXP mu_, SEXP sigma_, SEXP df_, SEXP ncores_, SEXP isChol_, SEXP A_){
    static SEXP (*fun)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP)=NULL;
    if (fun == NULL) fun = (SEXP(*)(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP)) R_GetCCallable("mvnfast","rmvnCpp");
    return fun(n_, mu_, sigma_, df_, ncores_, isChol_, A_);
  }

#if defined(__cplusplus)
}
#endif
#endif
