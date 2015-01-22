//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/spec/ECFieldFp.java
//

#ifndef _JavaSecuritySpecECFieldFp_H_
#define _JavaSecuritySpecECFieldFp_H_

@class JavaMathBigInteger;

#import "JreEmulation.h"
#include "java/security/spec/ECField.h"

@interface JavaSecuritySpecECFieldFp : NSObject < JavaSecuritySpecECField > {
 @public
  JavaMathBigInteger *p_;
}

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)p;

- (jint)getFieldSize;

- (JavaMathBigInteger *)getP;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (void)copyAllFieldsTo:(JavaSecuritySpecECFieldFp *)other;

@end

__attribute__((always_inline)) inline void JavaSecuritySpecECFieldFp_init() {}

J2OBJC_FIELD_SETTER(JavaSecuritySpecECFieldFp, p_, JavaMathBigInteger *)

#endif // _JavaSecuritySpecECFieldFp_H_