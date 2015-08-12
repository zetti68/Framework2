//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/org/w3c/dom/Element.java
//

#ifndef _OrgW3cDomElement_H_
#define _OrgW3cDomElement_H_

#include "J2ObjC_header.h"
#include "org/w3c/dom/Node.h"

@protocol OrgW3cDomAttr;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomTypeInfo;

@protocol OrgW3cDomElement < OrgW3cDomNode, NSObject, JavaObject >

- (NSString *)getTagName;

- (NSString *)getAttributeWithNSString:(NSString *)name;

- (void)setAttributeWithNSString:(NSString *)name
                    withNSString:(NSString *)value;

- (void)removeAttributeWithNSString:(NSString *)name;

- (id<OrgW3cDomAttr>)getAttributeNodeWithNSString:(NSString *)name;

- (id<OrgW3cDomAttr>)setAttributeNodeWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)newAttr;

- (id<OrgW3cDomAttr>)removeAttributeNodeWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)oldAttr;

- (id<OrgW3cDomNodeList>)getElementsByTagNameWithNSString:(NSString *)name;

- (NSString *)getAttributeNSWithNSString:(NSString *)namespaceURI
                            withNSString:(NSString *)localName;

- (void)setAttributeNSWithNSString:(NSString *)namespaceURI
                      withNSString:(NSString *)qualifiedName
                      withNSString:(NSString *)value;

- (void)removeAttributeNSWithNSString:(NSString *)namespaceURI
                         withNSString:(NSString *)localName;

- (id<OrgW3cDomAttr>)getAttributeNodeNSWithNSString:(NSString *)namespaceURI
                                       withNSString:(NSString *)localName;

- (id<OrgW3cDomAttr>)setAttributeNodeNSWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)newAttr;

- (id<OrgW3cDomNodeList>)getElementsByTagNameNSWithNSString:(NSString *)namespaceURI
                                               withNSString:(NSString *)localName;

- (jboolean)hasAttributeWithNSString:(NSString *)name;

- (jboolean)hasAttributeNSWithNSString:(NSString *)namespaceURI
                          withNSString:(NSString *)localName;

- (id<OrgW3cDomTypeInfo>)getSchemaTypeInfo;

- (void)setIdAttributeWithNSString:(NSString *)name
                       withBoolean:(jboolean)isId;

- (void)setIdAttributeNSWithNSString:(NSString *)namespaceURI
                        withNSString:(NSString *)localName
                         withBoolean:(jboolean)isId;

- (void)setIdAttributeNodeWithOrgW3cDomAttr:(id<OrgW3cDomAttr>)idAttr
                                withBoolean:(jboolean)isId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomElement)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomElement)

#endif // _OrgW3cDomElement_H_
