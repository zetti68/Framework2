//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/interfaces/ECPublicKey.java
//

#ifndef _JavaSecurityInterfacesECPublicKey_H_
#define _JavaSecurityInterfacesECPublicKey_H_

@class JavaSecuritySpecECPoint;

#import "JreEmulation.h"
#include "java/security/PublicKey.h"
#include "java/security/interfaces/ECKey.h"

#define JavaSecurityInterfacesECPublicKey_serialVersionUID -3314988629879632826LL

@protocol JavaSecurityInterfacesECPublicKey < JavaSecurityPublicKey, JavaSecurityInterfacesECKey, NSObject, JavaObject >
- (JavaSecuritySpecECPoint *)getW;

@end

__attribute__((always_inline)) inline void JavaSecurityInterfacesECPublicKey_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityInterfacesECPublicKey, serialVersionUID, jlong)

#endif // _JavaSecurityInterfacesECPublicKey_H_
