//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/org/apache/harmony/xml/dom/TextImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomTextImpl_H_
#define _OrgApacheHarmonyXmlDomTextImpl_H_

@class OrgApacheHarmonyXmlDomDocumentImpl;

#import "JreEmulation.h"
#include "org/apache/harmony/xml/dom/CharacterDataImpl.h"
#include "org/w3c/dom/Text.h"

@interface OrgApacheHarmonyXmlDomTextImpl : OrgApacheHarmonyXmlDomCharacterDataImpl < OrgW3cDomText > {
}

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)data;

- (NSString *)getNodeName;

- (jshort)getNodeType;

- (id<OrgW3cDomText>)splitTextWithInt:(jint)offset;

- (jboolean)isElementContentWhitespace;

- (NSString *)getWholeText;

- (id<OrgW3cDomText>)replaceWholeTextWithNSString:(NSString *)content;

- (OrgApacheHarmonyXmlDomTextImpl *)firstTextNodeInCurrentRun;

- (OrgApacheHarmonyXmlDomTextImpl *)nextTextNode;

- (OrgApacheHarmonyXmlDomTextImpl *)minimize;

@end

__attribute__((always_inline)) inline void OrgApacheHarmonyXmlDomTextImpl_init() {}

#endif // _OrgApacheHarmonyXmlDomTextImpl_H_
