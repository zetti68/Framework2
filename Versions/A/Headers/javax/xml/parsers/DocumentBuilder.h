//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/javax/xml/parsers/DocumentBuilder.java
//

#ifndef _JavaxXmlParsersDocumentBuilder_H_
#define _JavaxXmlParsersDocumentBuilder_H_

@class JavaIoFile;
@class JavaIoInputStream;
@class JavaxXmlValidationSchema;
@class OrgXmlSaxInputSource;
@protocol OrgW3cDomDOMImplementation;
@protocol OrgW3cDomDocument;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;

#import "JreEmulation.h"

#define JavaxXmlParsersDocumentBuilder_DEBUG NO

@interface JavaxXmlParsersDocumentBuilder : NSObject {
}

- (instancetype)init;

- (void)reset;

- (id<OrgW3cDomDocument>)parseWithJavaIoInputStream:(JavaIoInputStream *)is;

- (id<OrgW3cDomDocument>)parseWithJavaIoInputStream:(JavaIoInputStream *)is
                                       withNSString:(NSString *)systemId;

- (id<OrgW3cDomDocument>)parseWithNSString:(NSString *)uri;

- (id<OrgW3cDomDocument>)parseWithJavaIoFile:(JavaIoFile *)f;

- (id<OrgW3cDomDocument>)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)is;

- (jboolean)isNamespaceAware;

- (jboolean)isValidating;

- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id<OrgXmlSaxEntityResolver>)er;

- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)eh;

- (id<OrgW3cDomDocument>)newDocument OBJC_METHOD_FAMILY_NONE;

- (id<OrgW3cDomDOMImplementation>)getDOMImplementation;

- (JavaxXmlValidationSchema *)getSchema;

- (jboolean)isXIncludeAware;

@end

__attribute__((always_inline)) inline void JavaxXmlParsersDocumentBuilder_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaxXmlParsersDocumentBuilder, DEBUG, jboolean)

#endif // _JavaxXmlParsersDocumentBuilder_H_
