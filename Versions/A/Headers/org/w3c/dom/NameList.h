//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/org/w3c/dom/NameList.java
//

#ifndef _OrgW3cDomNameList_H_
#define _OrgW3cDomNameList_H_

#import "JreEmulation.h"

@protocol OrgW3cDomNameList < NSObject, JavaObject >

- (NSString *)getNameWithInt:(jint)index;

- (NSString *)getNamespaceURIWithInt:(jint)index;

- (jint)getLength;

- (jboolean)containsWithNSString:(NSString *)str;

- (jboolean)containsNSWithNSString:(NSString *)namespaceURI
                      withNSString:(NSString *)name;

@end

__attribute__((always_inline)) inline void OrgW3cDomNameList_init() {}

#endif // _OrgW3cDomNameList_H_
