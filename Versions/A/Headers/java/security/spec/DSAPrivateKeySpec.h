//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/spec/DSAPrivateKeySpec.java
//

#ifndef _JavaSecuritySpecDSAPrivateKeySpec_H_
#define _JavaSecuritySpecDSAPrivateKeySpec_H_

#include "J2ObjC_header.h"
#include "java/security/spec/KeySpec.h"

@class JavaMathBigInteger;

@interface JavaSecuritySpecDSAPrivateKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)x
                    withJavaMathBigInteger:(JavaMathBigInteger *)p
                    withJavaMathBigInteger:(JavaMathBigInteger *)q
                    withJavaMathBigInteger:(JavaMathBigInteger *)g;

- (JavaMathBigInteger *)getG;

- (JavaMathBigInteger *)getP;

- (JavaMathBigInteger *)getQ;

- (JavaMathBigInteger *)getX;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecDSAPrivateKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecDSAPrivateKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaSecuritySpecDSAPrivateKeySpec *self, JavaMathBigInteger *x, JavaMathBigInteger *p, JavaMathBigInteger *q, JavaMathBigInteger *g);

FOUNDATION_EXPORT JavaSecuritySpecDSAPrivateKeySpec *new_JavaSecuritySpecDSAPrivateKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *x, JavaMathBigInteger *p, JavaMathBigInteger *q, JavaMathBigInteger *g) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecDSAPrivateKeySpec)

#endif // _JavaSecuritySpecDSAPrivateKeySpec_H_
