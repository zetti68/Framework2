//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/org/w3c/dom/DOMException.java
//

#ifndef _OrgW3cDomDOMException_H_
#define _OrgW3cDomDOMException_H_

#import "JreEmulation.h"
#include "java/lang/RuntimeException.h"

#define OrgW3cDomDOMException_DOMSTRING_SIZE_ERR 2
#define OrgW3cDomDOMException_HIERARCHY_REQUEST_ERR 3
#define OrgW3cDomDOMException_INDEX_SIZE_ERR 1
#define OrgW3cDomDOMException_INUSE_ATTRIBUTE_ERR 10
#define OrgW3cDomDOMException_INVALID_ACCESS_ERR 15
#define OrgW3cDomDOMException_INVALID_CHARACTER_ERR 5
#define OrgW3cDomDOMException_INVALID_MODIFICATION_ERR 13
#define OrgW3cDomDOMException_INVALID_STATE_ERR 11
#define OrgW3cDomDOMException_NAMESPACE_ERR 14
#define OrgW3cDomDOMException_NOT_FOUND_ERR 8
#define OrgW3cDomDOMException_NOT_SUPPORTED_ERR 9
#define OrgW3cDomDOMException_NO_DATA_ALLOWED_ERR 6
#define OrgW3cDomDOMException_NO_MODIFICATION_ALLOWED_ERR 7
#define OrgW3cDomDOMException_SYNTAX_ERR 12
#define OrgW3cDomDOMException_TYPE_MISMATCH_ERR 17
#define OrgW3cDomDOMException_VALIDATION_ERR 16
#define OrgW3cDomDOMException_WRONG_DOCUMENT_ERR 4

@interface OrgW3cDomDOMException : JavaLangRuntimeException {
 @public
  jshort code_;
}

- (instancetype)initWithShort:(jshort)code
                 withNSString:(NSString *)message;

- (void)copyAllFieldsTo:(OrgW3cDomDOMException *)other;

@end

__attribute__((always_inline)) inline void OrgW3cDomDOMException_init() {}

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, INDEX_SIZE_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, DOMSTRING_SIZE_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, HIERARCHY_REQUEST_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, WRONG_DOCUMENT_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, INVALID_CHARACTER_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, NO_DATA_ALLOWED_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, NO_MODIFICATION_ALLOWED_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, NOT_FOUND_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, NOT_SUPPORTED_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, INUSE_ATTRIBUTE_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, INVALID_STATE_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, SYNTAX_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, INVALID_MODIFICATION_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, NAMESPACE_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, INVALID_ACCESS_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, VALIDATION_ERR, jshort)

J2OBJC_STATIC_FIELD_GETTER(OrgW3cDomDOMException, TYPE_MISMATCH_ERR, jshort)

#endif // _OrgW3cDomDOMException_H_
