//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/java/security/DigestOutputStream.java
//

#ifndef _JavaSecurityDigestOutputStream_H_
#define _JavaSecurityDigestOutputStream_H_

#include "J2ObjC_header.h"
#include "java/io/FilterOutputStream.h"

@class IOSByteArray;
@class JavaIoOutputStream;
@class JavaSecurityMessageDigest;

@interface JavaSecurityDigestOutputStream : JavaIoFilterOutputStream {
 @public
  JavaSecurityMessageDigest *digest_;
}

#pragma mark Public

- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)stream
             withJavaSecurityMessageDigest:(JavaSecurityMessageDigest *)digest;

- (JavaSecurityMessageDigest *)getMessageDigest;

- (void)onWithBoolean:(jboolean)on;

- (void)setMessageDigestWithJavaSecurityMessageDigest:(JavaSecurityMessageDigest *)digest;

- (NSString *)description;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithInt:(jint)b;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityDigestOutputStream)

J2OBJC_FIELD_SETTER(JavaSecurityDigestOutputStream, digest_, JavaSecurityMessageDigest *)

FOUNDATION_EXPORT void JavaSecurityDigestOutputStream_initWithJavaIoOutputStream_withJavaSecurityMessageDigest_(JavaSecurityDigestOutputStream *self, JavaIoOutputStream *stream, JavaSecurityMessageDigest *digest);

FOUNDATION_EXPORT JavaSecurityDigestOutputStream *new_JavaSecurityDigestOutputStream_initWithJavaIoOutputStream_withJavaSecurityMessageDigest_(JavaIoOutputStream *stream, JavaSecurityMessageDigest *digest) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityDigestOutputStream)

#endif // _JavaSecurityDigestOutputStream_H_
