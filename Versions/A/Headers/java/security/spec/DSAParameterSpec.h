//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/spec/DSAParameterSpec.java
//

#ifndef _JavaSecuritySpecDSAParameterSpec_H_
#define _JavaSecuritySpecDSAParameterSpec_H_

@class JavaMathBigInteger;

#import "JreEmulation.h"
#include "java/security/interfaces/DSAParams.h"
#include "java/security/spec/AlgorithmParameterSpec.h"

@interface JavaSecuritySpecDSAParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec, JavaSecurityInterfacesDSAParams > {
 @public
  JavaMathBigInteger *p_;
  JavaMathBigInteger *q_;
  JavaMathBigInteger *g_;
}

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)p
                    withJavaMathBigInteger:(JavaMathBigInteger *)q
                    withJavaMathBigInteger:(JavaMathBigInteger *)g;

- (JavaMathBigInteger *)getG;

- (JavaMathBigInteger *)getP;

- (JavaMathBigInteger *)getQ;

- (void)copyAllFieldsTo:(JavaSecuritySpecDSAParameterSpec *)other;

@end

__attribute__((always_inline)) inline void JavaSecuritySpecDSAParameterSpec_init() {}

J2OBJC_FIELD_SETTER(JavaSecuritySpecDSAParameterSpec, p_, JavaMathBigInteger *)
J2OBJC_FIELD_SETTER(JavaSecuritySpecDSAParameterSpec, q_, JavaMathBigInteger *)
J2OBJC_FIELD_SETTER(JavaSecuritySpecDSAParameterSpec, g_, JavaMathBigInteger *)

#endif // _JavaSecuritySpecDSAParameterSpec_H_