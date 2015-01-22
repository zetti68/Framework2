//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/org/apache/harmony/xml/parsers/DocumentBuilderImpl.java
//

#ifndef _OrgApacheHarmonyXmlParsersDocumentBuilderImpl_H_
#define _OrgApacheHarmonyXmlParsersDocumentBuilderImpl_H_

@class OrgApacheHarmonyXmlDomDOMImplementationImpl;
@class OrgApacheHarmonyXmlDomDocumentImpl;
@class OrgKxml2IoKXmlParser;
@class OrgXmlSaxInputSource;
@protocol OrgW3cDomDOMImplementation;
@protocol OrgW3cDomDocument;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;

#import "JreEmulation.h"
#include "javax/xml/parsers/DocumentBuilder.h"

@interface OrgApacheHarmonyXmlParsersDocumentBuilderImpl : JavaxXmlParsersDocumentBuilder {
 @public
  jboolean coalescing_;
  id<OrgXmlSaxEntityResolver> entityResolver_;
  id<OrgXmlSaxErrorHandler> errorHandler_;
  jboolean ignoreComments_;
  jboolean ignoreElementContentWhitespace_;
  jboolean namespaceAware_;
}

- (void)reset;

- (id<OrgW3cDomDOMImplementation>)getDOMImplementation;

- (jboolean)isNamespaceAware;

- (jboolean)isValidating;

- (id<OrgW3cDomDocument>)newDocument OBJC_METHOD_FAMILY_NONE;

- (id<OrgW3cDomDocument>)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source;

- (void)parseWithOrgKxml2IoKXmlParser:(OrgKxml2IoKXmlParser *)parser
withOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                    withOrgW3cDomNode:(id<OrgW3cDomNode>)node
                              withInt:(jint)endToken;

- (void)appendTextWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                       withOrgW3cDomNode:(id<OrgW3cDomNode>)parent
                                                 withInt:(jint)token
                                            withNSString:(NSString *)text;

- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id<OrgXmlSaxEntityResolver>)resolver;

- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)handler;

- (void)setIgnoreCommentsWithBoolean:(jboolean)value;

- (void)setCoalescingWithBoolean:(jboolean)value;

- (void)setIgnoreElementContentWhitespaceWithBoolean:(jboolean)value;

- (void)setNamespaceAwareWithBoolean:(jboolean)value;

- (NSString *)resolvePredefinedOrCharacterEntityWithNSString:(NSString *)entityName;

- (NSString *)resolveCharacterReferenceWithNSString:(NSString *)value
                                            withInt:(jint)base;

- (instancetype)init;

- (void)copyAllFieldsTo:(OrgApacheHarmonyXmlParsersDocumentBuilderImpl *)other;

@end

FOUNDATION_EXPORT BOOL OrgApacheHarmonyXmlParsersDocumentBuilderImpl_initialized;
J2OBJC_STATIC_INIT(OrgApacheHarmonyXmlParsersDocumentBuilderImpl)

J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlParsersDocumentBuilderImpl, entityResolver_, id<OrgXmlSaxEntityResolver>)
J2OBJC_FIELD_SETTER(OrgApacheHarmonyXmlParsersDocumentBuilderImpl, errorHandler_, id<OrgXmlSaxErrorHandler>)

FOUNDATION_EXPORT OrgApacheHarmonyXmlDomDOMImplementationImpl *OrgApacheHarmonyXmlParsersDocumentBuilderImpl_dom_;
J2OBJC_STATIC_FIELD_GETTER(OrgApacheHarmonyXmlParsersDocumentBuilderImpl, dom_, OrgApacheHarmonyXmlDomDOMImplementationImpl *)
J2OBJC_STATIC_FIELD_SETTER(OrgApacheHarmonyXmlParsersDocumentBuilderImpl, dom_, OrgApacheHarmonyXmlDomDOMImplementationImpl *)

#endif // _OrgApacheHarmonyXmlParsersDocumentBuilderImpl_H_
