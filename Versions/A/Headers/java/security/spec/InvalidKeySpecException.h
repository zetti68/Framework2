//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/spec/InvalidKeySpecException.java
//

#ifndef _JavaSecuritySpecInvalidKeySpecException_H_
#define _JavaSecuritySpecInvalidKeySpecException_H_

@class JavaLangThrowable;

#import "JreEmulation.h"
#include "java/security/GeneralSecurityException.h"

#define JavaSecuritySpecInvalidKeySpecException_serialVersionUID 3546139293998810778LL

@interface JavaSecuritySpecInvalidKeySpecException : JavaSecurityGeneralSecurityException {
}

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

__attribute__((always_inline)) inline void JavaSecuritySpecInvalidKeySpecException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySpecInvalidKeySpecException, serialVersionUID, jlong)

#endif // _JavaSecuritySpecInvalidKeySpecException_H_