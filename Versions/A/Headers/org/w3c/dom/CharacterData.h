//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/org/w3c/dom/CharacterData.java
//

#ifndef _OrgW3cDomCharacterData_H_
#define _OrgW3cDomCharacterData_H_

#import "JreEmulation.h"
#include "org/w3c/dom/Node.h"

@protocol OrgW3cDomCharacterData < OrgW3cDomNode, NSObject, JavaObject >
- (NSString *)getData;

- (void)setDataWithNSString:(NSString *)data;

- (jint)getLength;

- (NSString *)substringDataWithInt:(jint)offset
                           withInt:(jint)count;

- (void)appendDataWithNSString:(NSString *)arg;

- (void)insertDataWithInt:(jint)offset
             withNSString:(NSString *)arg;

- (void)deleteDataWithInt:(jint)offset
                  withInt:(jint)count;

- (void)replaceDataWithInt:(jint)offset
                   withInt:(jint)count
              withNSString:(NSString *)arg;

@end

__attribute__((always_inline)) inline void OrgW3cDomCharacterData_init() {}

#endif // _OrgW3cDomCharacterData_H_
