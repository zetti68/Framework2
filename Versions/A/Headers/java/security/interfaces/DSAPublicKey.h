//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/interfaces/DSAPublicKey.java
//

#ifndef _JavaSecurityInterfacesDSAPublicKey_H_
#define _JavaSecurityInterfacesDSAPublicKey_H_

#include "J2ObjC_header.h"
#include "java/security/PublicKey.h"
#include "java/security/interfaces/DSAKey.h"

@class JavaMathBigInteger;

#define JavaSecurityInterfacesDSAPublicKey_serialVersionUID 1234526332779022332LL

@protocol JavaSecurityInterfacesDSAPublicKey < JavaSecurityInterfacesDSAKey, JavaSecurityPublicKey, NSObject, JavaObject >

- (JavaMathBigInteger *)getY;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesDSAPublicKey)

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityInterfacesDSAPublicKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesDSAPublicKey)

#endif // _JavaSecurityInterfacesDSAPublicKey_H_
