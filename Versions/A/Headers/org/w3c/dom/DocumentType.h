//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/org/w3c/dom/DocumentType.java
//

#ifndef _OrgW3cDomDocumentType_H_
#define _OrgW3cDomDocumentType_H_

@protocol OrgW3cDomNamedNodeMap;

#import "JreEmulation.h"
#include "org/w3c/dom/Node.h"

@protocol OrgW3cDomDocumentType < OrgW3cDomNode, NSObject, JavaObject >
- (NSString *)getName;

- (id<OrgW3cDomNamedNodeMap>)getEntities;

- (id<OrgW3cDomNamedNodeMap>)getNotations;

- (NSString *)getPublicId;

- (NSString *)getSystemId;

- (NSString *)getInternalSubset;

@end

__attribute__((always_inline)) inline void OrgW3cDomDocumentType_init() {}

#endif // _OrgW3cDomDocumentType_H_