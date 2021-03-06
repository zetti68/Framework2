//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/org/w3c/dom/Document.java
//

#ifndef _OrgW3cDomDocument_H_
#define _OrgW3cDomDocument_H_

#include "J2ObjC_header.h"
#include "org/w3c/dom/Node.h"

@protocol OrgW3cDomAttr;
@protocol OrgW3cDomCDATASection;
@protocol OrgW3cDomComment;
@protocol OrgW3cDomDOMConfiguration;
@protocol OrgW3cDomDOMImplementation;
@protocol OrgW3cDomDocumentFragment;
@protocol OrgW3cDomDocumentType;
@protocol OrgW3cDomElement;
@protocol OrgW3cDomEntityReference;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomProcessingInstruction;
@protocol OrgW3cDomText;

@protocol OrgW3cDomDocument < OrgW3cDomNode, NSObject, JavaObject >

- (id<OrgW3cDomDocumentType>)getDoctype;

- (id<OrgW3cDomDOMImplementation>)getImplementation;

- (id<OrgW3cDomElement>)getDocumentElement;

- (id<OrgW3cDomElement>)createElementWithNSString:(NSString *)tagName;

- (id<OrgW3cDomDocumentFragment>)createDocumentFragment;

- (id<OrgW3cDomText>)createTextNodeWithNSString:(NSString *)data;

- (id<OrgW3cDomComment>)createCommentWithNSString:(NSString *)data;

- (id<OrgW3cDomCDATASection>)createCDATASectionWithNSString:(NSString *)data;

- (id<OrgW3cDomProcessingInstruction>)createProcessingInstructionWithNSString:(NSString *)target
                                                                 withNSString:(NSString *)data;

- (id<OrgW3cDomAttr>)createAttributeWithNSString:(NSString *)name;

- (id<OrgW3cDomEntityReference>)createEntityReferenceWithNSString:(NSString *)name;

- (id<OrgW3cDomNodeList>)getElementsByTagNameWithNSString:(NSString *)tagname;

- (id<OrgW3cDomNode>)importNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)importedNode
                                     withBoolean:(jboolean)deep;

- (id<OrgW3cDomElement>)createElementNSWithNSString:(NSString *)namespaceURI
                                       withNSString:(NSString *)qualifiedName;

- (id<OrgW3cDomAttr>)createAttributeNSWithNSString:(NSString *)namespaceURI
                                      withNSString:(NSString *)qualifiedName;

- (id<OrgW3cDomNodeList>)getElementsByTagNameNSWithNSString:(NSString *)namespaceURI
                                               withNSString:(NSString *)localName;

- (id<OrgW3cDomElement>)getElementByIdWithNSString:(NSString *)elementId;

- (NSString *)getInputEncoding;

- (NSString *)getXmlEncoding;

- (jboolean)getXmlStandalone;

- (void)setXmlStandaloneWithBoolean:(jboolean)xmlStandalone;

- (NSString *)getXmlVersion;

- (void)setXmlVersionWithNSString:(NSString *)xmlVersion;

- (jboolean)getStrictErrorChecking;

- (void)setStrictErrorCheckingWithBoolean:(jboolean)strictErrorChecking;

- (NSString *)getDocumentURI;

- (void)setDocumentURIWithNSString:(NSString *)documentURI;

- (id<OrgW3cDomNode>)adoptNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)source;

- (id<OrgW3cDomDOMConfiguration>)getDomConfig;

- (void)normalizeDocument;

- (id<OrgW3cDomNode>)renameNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)n
                                    withNSString:(NSString *)namespaceURI
                                    withNSString:(NSString *)qualifiedName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomDocument)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomDocument)

#endif // _OrgW3cDomDocument_H_
