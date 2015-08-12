//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/cert/X509CRL.java
//

#ifndef _JavaSecurityCertX509CRL_H_
#define _JavaSecurityCertX509CRL_H_

#include "J2ObjC_header.h"
#include "java/security/cert/CRL.h"
#include "java/security/cert/X509Extension.h"

@class IOSByteArray;
@class JavaMathBigInteger;
@class JavaSecurityCertX509CRLEntry;
@class JavaSecurityCertX509Certificate;
@class JavaUtilDate;
@class JavaxSecurityAuthX500X500Principal;
@protocol JavaSecurityPrincipal;
@protocol JavaSecurityPublicKey;
@protocol JavaUtilSet;

@interface JavaSecurityCertX509CRL : JavaSecurityCertCRL < JavaSecurityCertX509Extension >

#pragma mark Public

- (jboolean)isEqual:(id)other;

- (IOSByteArray *)getEncoded;

- (id<JavaSecurityPrincipal>)getIssuerDN;

- (JavaxSecurityAuthX500X500Principal *)getIssuerX500Principal;

- (JavaUtilDate *)getNextUpdate;

- (JavaSecurityCertX509CRLEntry *)getRevokedCertificateWithJavaMathBigInteger:(JavaMathBigInteger *)serialNumber;

- (JavaSecurityCertX509CRLEntry *)getRevokedCertificateWithJavaSecurityCertX509Certificate:(JavaSecurityCertX509Certificate *)certificate;

- (id<JavaUtilSet>)getRevokedCertificates;

- (NSString *)getSigAlgName;

- (NSString *)getSigAlgOID;

- (IOSByteArray *)getSigAlgParams;

- (IOSByteArray *)getSignature;

- (IOSByteArray *)getTBSCertList;

- (JavaUtilDate *)getThisUpdate;

- (jint)getVersion;

- (NSUInteger)hash;

- (void)verifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key;

- (void)verifyWithJavaSecurityPublicKey:(id<JavaSecurityPublicKey>)key
                           withNSString:(NSString *)sigProvider;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertX509CRL)

FOUNDATION_EXPORT void JavaSecurityCertX509CRL_init(JavaSecurityCertX509CRL *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertX509CRL)

#endif // _JavaSecurityCertX509CRL_H_
