//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/spec/MGF1ParameterSpec.java
//

#ifndef _JavaSecuritySpecMGF1ParameterSpec_H_
#define _JavaSecuritySpecMGF1ParameterSpec_H_

#import "JreEmulation.h"
#include "java/security/spec/AlgorithmParameterSpec.h"

@interface JavaSecuritySpecMGF1ParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec > {
 @public
  NSString *mdName_;
}

- (instancetype)initWithNSString:(NSString *)mdName;

- (NSString *)getDigestAlgorithm;

- (void)copyAllFieldsTo:(JavaSecuritySpecMGF1ParameterSpec *)other;

@end

FOUNDATION_EXPORT BOOL JavaSecuritySpecMGF1ParameterSpec_initialized;
J2OBJC_STATIC_INIT(JavaSecuritySpecMGF1ParameterSpec)

J2OBJC_FIELD_SETTER(JavaSecuritySpecMGF1ParameterSpec, mdName_, NSString *)

FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA1_;
J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySpecMGF1ParameterSpec, SHA1_, JavaSecuritySpecMGF1ParameterSpec *)

FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA256_;
J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySpecMGF1ParameterSpec, SHA256_, JavaSecuritySpecMGF1ParameterSpec *)

FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA384_;
J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySpecMGF1ParameterSpec, SHA384_, JavaSecuritySpecMGF1ParameterSpec *)

FOUNDATION_EXPORT JavaSecuritySpecMGF1ParameterSpec *JavaSecuritySpecMGF1ParameterSpec_SHA512_;
J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySpecMGF1ParameterSpec, SHA512_, JavaSecuritySpecMGF1ParameterSpec *)

#endif // _JavaSecuritySpecMGF1ParameterSpec_H_