//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/IdentityScope.java
//

#ifndef _JavaSecurityIdentityScope_H_
#define _JavaSecurityIdentityScope_H_

#include "J2ObjC_header.h"
#include "java/security/Identity.h"

@protocol JavaSecurityPrincipal;
@protocol JavaSecurityPublicKey;
@protocol JavaUtilEnumeration;

@interface JavaSecurityIdentityScope : JavaSecurityIdentity

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name;

- (instancetype)initWithNSString:(NSString *)name
   withJavaSecurityIdentityScope:(JavaSecurityIdentityScope *)scope;

- (void)addIdentityWithJavaSecurityIdentity:(JavaSecurityIdentity *)identity;

- (JavaSecurityIdentity *)getIdentityWithJavaSecurityPrincipal:(id<JavaSecurityPrincipal>)principal;

- (JavaSecurityIdentity *)getIdentityWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key;

- (JavaSecurityIdentity *)getIdentityWithNSString:(NSString *)name;

+ (JavaSecurityIdentityScope *)getSystemScope;

- (id<JavaUtilEnumeration>)identities;

- (void)removeIdentityWithJavaSecurityIdentity:(JavaSecurityIdentity *)identity;

- (jint)size;

- (NSString *)description;

#pragma mark Protected

- (instancetype)init;

+ (void)setSystemScopeWithJavaSecurityIdentityScope:(JavaSecurityIdentityScope *)scope;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityIdentityScope)

FOUNDATION_EXPORT void JavaSecurityIdentityScope_init(JavaSecurityIdentityScope *self);

FOUNDATION_EXPORT void JavaSecurityIdentityScope_initWithNSString_(JavaSecurityIdentityScope *self, NSString *name);

FOUNDATION_EXPORT void JavaSecurityIdentityScope_initWithNSString_withJavaSecurityIdentityScope_(JavaSecurityIdentityScope *self, NSString *name, JavaSecurityIdentityScope *scope);

FOUNDATION_EXPORT JavaSecurityIdentityScope *JavaSecurityIdentityScope_getSystemScope();

FOUNDATION_EXPORT void JavaSecurityIdentityScope_setSystemScopeWithJavaSecurityIdentityScope_(JavaSecurityIdentityScope *scope);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityIdentityScope)

#endif // _JavaSecurityIdentityScope_H_
