//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/spec/InvalidParameterSpecException.java
//

#ifndef _JavaSecuritySpecInvalidParameterSpecException_H_
#define _JavaSecuritySpecInvalidParameterSpecException_H_

#import "JreEmulation.h"
#include "java/security/GeneralSecurityException.h"

#define JavaSecuritySpecInvalidParameterSpecException_serialVersionUID -970468769593399342LL

@interface JavaSecuritySpecInvalidParameterSpecException : JavaSecurityGeneralSecurityException {
}

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaSecuritySpecInvalidParameterSpecException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySpecInvalidParameterSpecException, serialVersionUID, jlong)

#endif // _JavaSecuritySpecInvalidParameterSpecException_H_