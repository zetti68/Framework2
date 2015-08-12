//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/javax/crypto/spec/DHPrivateKeySpec.java
//

#ifndef _JavaxCryptoSpecDHPrivateKeySpec_H_
#define _JavaxCryptoSpecDHPrivateKeySpec_H_

#include "J2ObjC_header.h"
#include "java/security/spec/KeySpec.h"

@class JavaMathBigInteger;

@interface JavaxCryptoSpecDHPrivateKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)x
                    withJavaMathBigInteger:(JavaMathBigInteger *)p
                    withJavaMathBigInteger:(JavaMathBigInteger *)g;

- (JavaMathBigInteger *)getG;

- (JavaMathBigInteger *)getP;

- (JavaMathBigInteger *)getX;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSpecDHPrivateKeySpec)

FOUNDATION_EXPORT void JavaxCryptoSpecDHPrivateKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaxCryptoSpecDHPrivateKeySpec *self, JavaMathBigInteger *x, JavaMathBigInteger *p, JavaMathBigInteger *g);

FOUNDATION_EXPORT JavaxCryptoSpecDHPrivateKeySpec *new_JavaxCryptoSpecDHPrivateKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *x, JavaMathBigInteger *p, JavaMathBigInteger *g) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecDHPrivateKeySpec)

#endif // _JavaxCryptoSpecDHPrivateKeySpec_H_
