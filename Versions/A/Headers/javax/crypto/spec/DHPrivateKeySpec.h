//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/javax/crypto/spec/DHPrivateKeySpec.java
//

#ifndef _JavaxCryptoSpecDHPrivateKeySpec_H_
#define _JavaxCryptoSpecDHPrivateKeySpec_H_

@class JavaMathBigInteger;

#import "JreEmulation.h"
#include "java/security/spec/KeySpec.h"

@interface JavaxCryptoSpecDHPrivateKeySpec : NSObject < JavaSecuritySpecKeySpec > {
 @public
  JavaMathBigInteger *x_;
  JavaMathBigInteger *p_;
  JavaMathBigInteger *g_;
}

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)x
                    withJavaMathBigInteger:(JavaMathBigInteger *)p
                    withJavaMathBigInteger:(JavaMathBigInteger *)g;

- (JavaMathBigInteger *)getX;

- (JavaMathBigInteger *)getP;

- (JavaMathBigInteger *)getG;

- (void)copyAllFieldsTo:(JavaxCryptoSpecDHPrivateKeySpec *)other;

@end

__attribute__((always_inline)) inline void JavaxCryptoSpecDHPrivateKeySpec_init() {}

J2OBJC_FIELD_SETTER(JavaxCryptoSpecDHPrivateKeySpec, x_, JavaMathBigInteger *)
J2OBJC_FIELD_SETTER(JavaxCryptoSpecDHPrivateKeySpec, p_, JavaMathBigInteger *)
J2OBJC_FIELD_SETTER(JavaxCryptoSpecDHPrivateKeySpec, g_, JavaMathBigInteger *)

#endif // _JavaxCryptoSpecDHPrivateKeySpec_H_