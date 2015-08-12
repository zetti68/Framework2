//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/javax/crypto/spec/DESKeySpec.java
//

#ifndef _JavaxCryptoSpecDESKeySpec_H_
#define _JavaxCryptoSpecDESKeySpec_H_

#include "J2ObjC_header.h"
#include "java/security/spec/KeySpec.h"

@class IOSByteArray;

#define JavaxCryptoSpecDESKeySpec_DES_KEY_LEN 8

@interface JavaxCryptoSpecDESKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

- (instancetype)initWithByteArray:(IOSByteArray *)key;

- (instancetype)initWithByteArray:(IOSByteArray *)key
                          withInt:(jint)offset;

- (IOSByteArray *)getKey;

+ (jboolean)isParityAdjustedWithByteArray:(IOSByteArray *)key
                                  withInt:(jint)offset;

+ (jboolean)isWeakWithByteArray:(IOSByteArray *)key
                        withInt:(jint)offset;

@end

J2OBJC_STATIC_INIT(JavaxCryptoSpecDESKeySpec)

J2OBJC_STATIC_FIELD_GETTER(JavaxCryptoSpecDESKeySpec, DES_KEY_LEN, jint)

FOUNDATION_EXPORT void JavaxCryptoSpecDESKeySpec_initWithByteArray_(JavaxCryptoSpecDESKeySpec *self, IOSByteArray *key);

FOUNDATION_EXPORT JavaxCryptoSpecDESKeySpec *new_JavaxCryptoSpecDESKeySpec_initWithByteArray_(IOSByteArray *key) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxCryptoSpecDESKeySpec_initWithByteArray_withInt_(JavaxCryptoSpecDESKeySpec *self, IOSByteArray *key, jint offset);

FOUNDATION_EXPORT JavaxCryptoSpecDESKeySpec *new_JavaxCryptoSpecDESKeySpec_initWithByteArray_withInt_(IOSByteArray *key, jint offset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT jboolean JavaxCryptoSpecDESKeySpec_isParityAdjustedWithByteArray_withInt_(IOSByteArray *key, jint offset);

FOUNDATION_EXPORT jboolean JavaxCryptoSpecDESKeySpec_isWeakWithByteArray_withInt_(IOSByteArray *key, jint offset);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecDESKeySpec)

#endif // _JavaxCryptoSpecDESKeySpec_H_
