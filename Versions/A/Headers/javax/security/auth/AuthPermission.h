//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/javax/security/auth/AuthPermission.java
//

#ifndef _JavaxSecurityAuthAuthPermission_H_
#define _JavaxSecurityAuthAuthPermission_H_

@class JavaSecurityPermission;

#import "JreEmulation.h"
#include "java/security/BasicPermission.h"

@interface JavaxSecurityAuthAuthPermission : JavaSecurityBasicPermission {
}

- (instancetype)initWithNSString:(NSString *)name;

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)actions;

- (NSString *)getActions;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

@end

__attribute__((always_inline)) inline void JavaxSecurityAuthAuthPermission_init() {}

#endif // _JavaxSecurityAuthAuthPermission_H_