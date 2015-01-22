//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/DigestOutputStream.java
//

#ifndef _JavaSecurityDigestOutputStream_H_
#define _JavaSecurityDigestOutputStream_H_

@class IOSByteArray;
@class JavaIoOutputStream;
@class JavaSecurityMessageDigest;

#import "JreEmulation.h"
#include "java/io/FilterOutputStream.h"

@interface JavaSecurityDigestOutputStream : JavaIoFilterOutputStream {
 @public
  JavaSecurityMessageDigest *digest_;
  jboolean isOn_;
}

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)stream
             withJavaSecurityMessageDigest:(JavaSecurityMessageDigest *)digest;

- (JavaSecurityMessageDigest *)getMessageDigest;

- (void)setMessageDigestWithJavaSecurityMessageDigest:(JavaSecurityMessageDigest *)digest;

- (void)writeWithInt:(jint)b;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)onWithBoolean:(jboolean)on;

- (NSString *)description;

- (void)copyAllFieldsTo:(JavaSecurityDigestOutputStream *)other;

@end

__attribute__((always_inline)) inline void JavaSecurityDigestOutputStream_init() {}

J2OBJC_FIELD_SETTER(JavaSecurityDigestOutputStream, digest_, JavaSecurityMessageDigest *)

#endif // _JavaSecurityDigestOutputStream_H_