//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/org/w3c/dom/Text.java
//

#ifndef _OrgW3cDomText_H_
#define _OrgW3cDomText_H_

#import "JreEmulation.h"
#include "org/w3c/dom/CharacterData.h"

@protocol OrgW3cDomText < OrgW3cDomCharacterData, NSObject, JavaObject >
- (id<OrgW3cDomText>)splitTextWithInt:(jint)offset;

- (jboolean)isElementContentWhitespace;

- (NSString *)getWholeText;

- (id<OrgW3cDomText>)replaceWholeTextWithNSString:(NSString *)content;

@end

__attribute__((always_inline)) inline void OrgW3cDomText_init() {}

#endif // _OrgW3cDomText_H_
