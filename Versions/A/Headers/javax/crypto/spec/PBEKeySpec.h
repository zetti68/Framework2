//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/javax/crypto/spec/PBEKeySpec.java
//

#ifndef _JavaxCryptoSpecPBEKeySpec_H_
#define _JavaxCryptoSpecPBEKeySpec_H_

@class IOSByteArray;
@class IOSCharArray;

#import "JreEmulation.h"
#include "java/security/spec/KeySpec.h"

@interface JavaxCryptoSpecPBEKeySpec : NSObject < JavaSecuritySpecKeySpec > {
 @public
  IOSCharArray *password_;
  IOSByteArray *salt_;
  jint iterationCount_;
  jint keyLength_;
}

- (instancetype)initWithCharArray:(IOSCharArray *)password;

- (instancetype)initWithCharArray:(IOSCharArray *)password
                    withByteArray:(IOSByteArray *)salt
                          withInt:(jint)iterationCount
                          withInt:(jint)keyLength;

- (instancetype)initWithCharArray:(IOSCharArray *)password
                    withByteArray:(IOSByteArray *)salt
                          withInt:(jint)iterationCount;

- (void)clearPassword;

- (IOSCharArray *)getPassword;

- (IOSByteArray *)getSalt;

- (jint)getIterationCount;

- (jint)getKeyLength;

- (void)copyAllFieldsTo:(JavaxCryptoSpecPBEKeySpec *)other;

@end

__attribute__((always_inline)) inline void JavaxCryptoSpecPBEKeySpec_init() {}

J2OBJC_FIELD_SETTER(JavaxCryptoSpecPBEKeySpec, password_, IOSCharArray *)
J2OBJC_FIELD_SETTER(JavaxCryptoSpecPBEKeySpec, salt_, IOSByteArray *)

#endif // _JavaxCryptoSpecPBEKeySpec_H_
