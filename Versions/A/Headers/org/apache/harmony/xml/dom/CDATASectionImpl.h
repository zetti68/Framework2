//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/org/apache/harmony/xml/dom/CDATASectionImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomCDATASectionImpl_H_
#define _OrgApacheHarmonyXmlDomCDATASectionImpl_H_

@class OrgApacheHarmonyXmlDomDocumentImpl;

#import "JreEmulation.h"
#include "org/apache/harmony/xml/dom/TextImpl.h"
#include "org/w3c/dom/CDATASection.h"

@interface OrgApacheHarmonyXmlDomCDATASectionImpl : OrgApacheHarmonyXmlDomTextImpl < OrgW3cDomCDATASection > {
}

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)data;

- (NSString *)getNodeName;

- (jshort)getNodeType;

- (void)split;

- (jboolean)needsSplitting;

- (OrgApacheHarmonyXmlDomTextImpl *)replaceWithText;

@end

__attribute__((always_inline)) inline void OrgApacheHarmonyXmlDomCDATASectionImpl_init() {}

#endif // _OrgApacheHarmonyXmlDomCDATASectionImpl_H_