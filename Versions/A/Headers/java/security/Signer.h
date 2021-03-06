//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/Signer.java
//

#ifndef _JavaSecuritySigner_H_
#define _JavaSecuritySigner_H_

#include "J2ObjC_header.h"
#include "java/security/Identity.h"

@class JavaSecurityIdentityScope;
@class JavaSecurityKeyPair;
@protocol JavaSecurityPrivateKey;

@interface JavaSecuritySigner : JavaSecurityIdentity

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name;

- (instancetype)initWithNSString:(NSString *)name
   withJavaSecurityIdentityScope:(JavaSecurityIdentityScope *)scope;

- (id<JavaSecurityPrivateKey>)getPrivateKey;

- (void)setKeyPairWithJavaSecurityKeyPair:(JavaSecurityKeyPair *)pair;

- (NSString *)description;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySigner)

FOUNDATION_EXPORT void JavaSecuritySigner_init(JavaSecuritySigner *self);

FOUNDATION_EXPORT void JavaSecuritySigner_initWithNSString_(JavaSecuritySigner *self, NSString *name);

FOUNDATION_EXPORT void JavaSecuritySigner_initWithNSString_withJavaSecurityIdentityScope_(JavaSecuritySigner *self, NSString *name, JavaSecurityIdentityScope *scope);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySigner)

#endif // _JavaSecuritySigner_H_
