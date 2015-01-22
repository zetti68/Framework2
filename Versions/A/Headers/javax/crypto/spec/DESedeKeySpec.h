//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/javax/crypto/spec/DESedeKeySpec.java
//

#ifndef _JavaxCryptoSpecDESedeKeySpec_H_
#define _JavaxCryptoSpecDESedeKeySpec_H_

@class IOSByteArray;

#import "JreEmulation.h"
#include "java/security/spec/KeySpec.h"

#define JavaxCryptoSpecDESedeKeySpec_DES_EDE_KEY_LEN 24

@interface JavaxCryptoSpecDESedeKeySpec : NSObject < JavaSecuritySpecKeySpec > {
 @public
  IOSByteArray *key_;
}

- (instancetype)initWithByteArray:(IOSByteArray *)key;

- (instancetype)initWithByteArray:(IOSByteArray *)key
                          withInt:(jint)offset;

- (IOSByteArray *)getKey;

+ (jboolean)isParityAdjustedWithByteArray:(IOSByteArray *)key
                                  withInt:(jint)offset;

- (void)copyAllFieldsTo:(JavaxCryptoSpecDESedeKeySpec *)other;

@end

__attribute__((always_inline)) inline void JavaxCryptoSpecDESedeKeySpec_init() {}

J2OBJC_FIELD_SETTER(JavaxCryptoSpecDESedeKeySpec, key_, IOSByteArray *)

J2OBJC_STATIC_FIELD_GETTER(JavaxCryptoSpecDESedeKeySpec, DES_EDE_KEY_LEN, jint)

#endif // _JavaxCryptoSpecDESedeKeySpec_H_