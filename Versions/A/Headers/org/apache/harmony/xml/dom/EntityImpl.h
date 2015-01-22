//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/org/apache/harmony/xml/dom/EntityImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomEntityImpl_H_
#define _OrgApacheHarmonyXmlDomEntityImpl_H_

@class OrgApacheHarmonyXmlDomDocumentImpl;

#import "JreEmulation.h"
#include "org/apache/harmony/xml/dom/NodeImpl.h"
#include "org/w3c/dom/Entity.h"

@interface OrgApacheHarmonyXmlDomEntityImpl : OrgApacheHarmonyXmlDomNodeImpl < OrgW3cDomEntity > {
 @public
  NSString *notationName_;
  NSString *publicID_;
  NSString *systemID_;
}

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)notationName
                                              withNSString:(NSString *)publicID
                                              withNSString:(NSString *)systemID;

- (NSString *)getNodeName;

- (jshort)getNodeType;

- (NSString *)getNotationName;

- (NSString *)getPublicId;

- (NSString *)getSystemId;

- (NSString *)getInputEncoding;

- (NSString *)getXmlEncoding;

- (NSString *)getXmlVersion;

- (void)copyAllFieldsTo:(OrgApacheHarmonyXmlDomEntityImpl *)other;

@end

__attribute__((always_inline)) inline void OrgApacheHarmonyXmlDomEntityImpl_init() {}

J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomEntityImpl, notationName_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomEntityImpl, publicID_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomEntityImpl, systemID_, NSString *)

#endif // _OrgApacheHarmonyXmlDomEntityImpl_H_