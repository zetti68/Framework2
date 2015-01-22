//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/org/apache/harmony/xml/dom/NodeImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomNodeImpl_H_
#define _OrgApacheHarmonyXmlDomNodeImpl_H_

@class JavaLangStringBuilder;
@class OrgApacheHarmonyXmlDomDocumentImpl;
@protocol JavaUtilList;
@protocol OrgW3cDomDocument;
@protocol OrgW3cDomNamedNodeMap;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomUserDataHandler;

#import "JreEmulation.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/TypeInfo.h"

@interface OrgApacheHarmonyXmlDomNodeImpl : NSObject < OrgW3cDomNode > {
 @public
  OrgApacheHarmonyXmlDomDocumentImpl *document_;
}

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document;

- (id<OrgW3cDomNode>)appendChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild;

- (id<OrgW3cDomNode>)cloneNodeWithBoolean:(jboolean)deep;

- (id<OrgW3cDomNamedNodeMap>)getAttributes;

- (id<OrgW3cDomNodeList>)getChildNodes;

- (id<OrgW3cDomNode>)getFirstChild;

- (id<OrgW3cDomNode>)getLastChild;

- (NSString *)getLocalName;

- (NSString *)getNamespaceURI;

- (id<OrgW3cDomNode>)getNextSibling;

- (NSString *)getNodeName;

- (jshort)getNodeType;

- (NSString *)getNodeValue;

- (id<OrgW3cDomDocument>)getOwnerDocument;

- (id<OrgW3cDomNode>)getParentNode;

- (NSString *)getPrefix;

- (id<OrgW3cDomNode>)getPreviousSibling;

- (jboolean)hasAttributes;

- (jboolean)hasChildNodes;

- (id<OrgW3cDomNode>)insertBeforeWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)refChild;

- (jboolean)isSupportedWithNSString:(NSString *)feature
                       withNSString:(NSString *)version_;

- (void)normalize;

- (id<OrgW3cDomNode>)removeChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)oldChild;

- (id<OrgW3cDomNode>)replaceChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)oldChild;

- (void)setNodeValueWithNSString:(NSString *)nodeValue;

- (void)setPrefixWithNSString:(NSString *)prefix;

+ (NSString *)validatePrefixWithNSString:(NSString *)prefix
                             withBoolean:(jboolean)namespaceAware
                            withNSString:(NSString *)namespaceURI;

+ (void)setNameNSWithOrgApacheHarmonyXmlDomNodeImpl:(OrgApacheHarmonyXmlDomNodeImpl *)node
                                       withNSString:(NSString *)namespaceURI
                                       withNSString:(NSString *)qualifiedName;

+ (void)setNameWithOrgApacheHarmonyXmlDomNodeImpl:(OrgApacheHarmonyXmlDomNodeImpl *)node
                                     withNSString:(NSString *)name;

- (NSString *)getBaseURI;

- (NSString *)getParentBaseUri;

- (NSString *)sanitizeUriWithNSString:(NSString *)uri;

- (jshort)compareDocumentPositionWithOrgW3cDomNode:(id<OrgW3cDomNode>)other;

- (NSString *)getTextContent;

- (void)getTextContentWithJavaLangStringBuilder:(JavaLangStringBuilder *)buf;

- (void)setTextContentWithNSString:(NSString *)textContent;

- (jboolean)isSameNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)other;

- (OrgApacheHarmonyXmlDomNodeImpl *)getNamespacingElement;

- (OrgApacheHarmonyXmlDomNodeImpl *)getContainingElement;

- (NSString *)lookupPrefixWithNSString:(NSString *)namespaceURI;

- (jboolean)isPrefixMappedToUriWithNSString:(NSString *)prefix
                               withNSString:(NSString *)uri;

- (jboolean)isDefaultNamespaceWithNSString:(NSString *)namespaceURI;

- (NSString *)lookupNamespaceURIWithNSString:(NSString *)prefix;

+ (id<JavaUtilList>)createEqualityKeyWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

- (jboolean)isEqualNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)arg;

- (jboolean)namedNodeMapsEqualWithOrgW3cDomNamedNodeMap:(id<OrgW3cDomNamedNodeMap>)a
                              withOrgW3cDomNamedNodeMap:(id<OrgW3cDomNamedNodeMap>)b;

- (id)getFeatureWithNSString:(NSString *)feature
                withNSString:(NSString *)version_;

- (id)setUserDataWithNSString:(NSString *)key
                       withId:(id)data
 withOrgW3cDomUserDataHandler:(id<OrgW3cDomUserDataHandler>)handler;

- (id)getUserDataWithNSString:(NSString *)key;

- (void)copyAllFieldsTo:(OrgApacheHarmonyXmlDomNodeImpl *)other;

@end

FOUNDATION_EXPORT BOOL OrgApacheHarmonyXmlDomNodeImpl_initialized;
J2OBJC_STATIC_INIT(OrgApacheHarmonyXmlDomNodeImpl)

J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomNodeImpl, document_, OrgApacheHarmonyXmlDomDocumentImpl *)

FOUNDATION_EXPORT id<OrgW3cDomNodeList> OrgApacheHarmonyXmlDomNodeImpl_EMPTY_LIST_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonyXmlDomNodeImpl, EMPTY_LIST_, id<OrgW3cDomNodeList>)

FOUNDATION_EXPORT id<OrgW3cDomTypeInfo> OrgApacheHarmonyXmlDomNodeImpl_NULL_TYPE_INFO_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonyXmlDomNodeImpl, NULL_TYPE_INFO_, id<OrgW3cDomTypeInfo>)

@interface OrgApacheHarmonyXmlDomNodeImpl_UserData : NSObject {
 @public
  id value_;
  id<OrgW3cDomUserDataHandler> handler_;
}

- (instancetype)initWithId:(id)value
withOrgW3cDomUserDataHandler:(id<OrgW3cDomUserDataHandler>)handler;

- (void)copyAllFieldsTo:(OrgApacheHarmonyXmlDomNodeImpl_UserData *)other;

@end

__attribute__((always_inline)) inline void OrgApacheHarmonyXmlDomNodeImpl_UserData_init() {}

J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomNodeImpl_UserData, value_, id)
J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlDomNodeImpl_UserData, handler_, id<OrgW3cDomUserDataHandler>)

@interface OrgApacheHarmonyXmlDomNodeImpl_$1 : NSObject < OrgW3cDomTypeInfo > {
}

- (NSString *)getTypeName;

- (NSString *)getTypeNamespace;

- (jboolean)isDerivedFromWithNSString:(NSString *)typeNamespaceArg
                         withNSString:(NSString *)typeNameArg
                              withInt:(jint)derivationMethod;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgApacheHarmonyXmlDomNodeImpl_$1_init() {}

#endif // _OrgApacheHarmonyXmlDomNodeImpl_H_