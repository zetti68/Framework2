//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/javax/crypto/spec/OAEPParameterSpec.java
//

#ifndef _JavaxCryptoSpecOAEPParameterSpec_H_
#define _JavaxCryptoSpecOAEPParameterSpec_H_

#include "J2ObjC_header.h"
#include "java/security/spec/AlgorithmParameterSpec.h"

@class JavaxCryptoSpecPSource;

@interface JavaxCryptoSpecOAEPParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)mdName
                    withNSString:(NSString *)mgfName
withJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)mgfSpec
      withJavaxCryptoSpecPSource:(JavaxCryptoSpecPSource *)pSrc;

- (NSString *)getDigestAlgorithm;

- (NSString *)getMGFAlgorithm;

- (id<JavaSecuritySpecAlgorithmParameterSpec>)getMGFParameters;

- (JavaxCryptoSpecPSource *)getPSource;

@end

J2OBJC_STATIC_INIT(JavaxCryptoSpecOAEPParameterSpec)

FOUNDATION_EXPORT JavaxCryptoSpecOAEPParameterSpec *JavaxCryptoSpecOAEPParameterSpec_DEFAULT_;
J2OBJC_STATIC_FIELD_GETTER(JavaxCryptoSpecOAEPParameterSpec, DEFAULT_, JavaxCryptoSpecOAEPParameterSpec *)

FOUNDATION_EXPORT void JavaxCryptoSpecOAEPParameterSpec_initWithNSString_withNSString_withJavaSecuritySpecAlgorithmParameterSpec_withJavaxCryptoSpecPSource_(JavaxCryptoSpecOAEPParameterSpec *self, NSString *mdName, NSString *mgfName, id<JavaSecuritySpecAlgorithmParameterSpec> mgfSpec, JavaxCryptoSpecPSource *pSrc);

FOUNDATION_EXPORT JavaxCryptoSpecOAEPParameterSpec *new_JavaxCryptoSpecOAEPParameterSpec_initWithNSString_withNSString_withJavaSecuritySpecAlgorithmParameterSpec_withJavaxCryptoSpecPSource_(NSString *mdName, NSString *mgfName, id<JavaSecuritySpecAlgorithmParameterSpec> mgfSpec, JavaxCryptoSpecPSource *pSrc) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecOAEPParameterSpec)

#endif // _JavaxCryptoSpecOAEPParameterSpec_H_
