//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/javax/security/auth/Subject.java
//

#ifndef _JavaxSecurityAuthSubject_H_
#define _JavaxSecurityAuthSubject_H_

#include "J2ObjC_header.h"
#include "java/io/Serializable.h"

@class IOSClass;
@class JavaSecurityAccessControlContext;
@protocol JavaSecurityPrivilegedAction;
@protocol JavaSecurityPrivilegedExceptionAction;
@protocol JavaUtilSet;

@interface JavaxSecurityAuthSubject : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithBoolean:(jboolean)readOnly
                withJavaUtilSet:(id<JavaUtilSet>)subjPrincipals
                withJavaUtilSet:(id<JavaUtilSet>)pubCredentials
                withJavaUtilSet:(id<JavaUtilSet>)privCredentials;

+ (id)doAsWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)subject
      withJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action;

+ (id)doAsWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)subject
withJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action;

+ (id)doAsPrivilegedWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)subject
                withJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action
            withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

+ (id)doAsPrivilegedWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)subject
       withJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action
            withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

- (jboolean)isEqual:(id)obj;

- (id<JavaUtilSet>)getPrincipals;

- (id<JavaUtilSet>)getPrincipalsWithIOSClass:(IOSClass *)c;

- (id<JavaUtilSet>)getPrivateCredentials;

- (id<JavaUtilSet>)getPrivateCredentialsWithIOSClass:(IOSClass *)c;

- (id<JavaUtilSet>)getPublicCredentials;

- (id<JavaUtilSet>)getPublicCredentialsWithIOSClass:(IOSClass *)c;

+ (JavaxSecurityAuthSubject *)getSubjectWithJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

- (NSUInteger)hash;

- (jboolean)isReadOnly;

- (void)setReadOnly;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(JavaxSecurityAuthSubject)

FOUNDATION_EXPORT void JavaxSecurityAuthSubject_init(JavaxSecurityAuthSubject *self);

FOUNDATION_EXPORT JavaxSecurityAuthSubject *new_JavaxSecurityAuthSubject_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxSecurityAuthSubject_initWithBoolean_withJavaUtilSet_withJavaUtilSet_withJavaUtilSet_(JavaxSecurityAuthSubject *self, jboolean readOnly, id<JavaUtilSet> subjPrincipals, id<JavaUtilSet> pubCredentials, id<JavaUtilSet> privCredentials);

FOUNDATION_EXPORT JavaxSecurityAuthSubject *new_JavaxSecurityAuthSubject_initWithBoolean_withJavaUtilSet_withJavaUtilSet_withJavaUtilSet_(jboolean readOnly, id<JavaUtilSet> subjPrincipals, id<JavaUtilSet> pubCredentials, id<JavaUtilSet> privCredentials) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT id JavaxSecurityAuthSubject_doAsWithJavaxSecurityAuthSubject_withJavaSecurityPrivilegedAction_(JavaxSecurityAuthSubject *subject, id<JavaSecurityPrivilegedAction> action);

FOUNDATION_EXPORT id JavaxSecurityAuthSubject_doAsPrivilegedWithJavaxSecurityAuthSubject_withJavaSecurityPrivilegedAction_withJavaSecurityAccessControlContext_(JavaxSecurityAuthSubject *subject, id<JavaSecurityPrivilegedAction> action, JavaSecurityAccessControlContext *context);

FOUNDATION_EXPORT id JavaxSecurityAuthSubject_doAsWithJavaxSecurityAuthSubject_withJavaSecurityPrivilegedExceptionAction_(JavaxSecurityAuthSubject *subject, id<JavaSecurityPrivilegedExceptionAction> action);

FOUNDATION_EXPORT id JavaxSecurityAuthSubject_doAsPrivilegedWithJavaxSecurityAuthSubject_withJavaSecurityPrivilegedExceptionAction_withJavaSecurityAccessControlContext_(JavaxSecurityAuthSubject *subject, id<JavaSecurityPrivilegedExceptionAction> action, JavaSecurityAccessControlContext *context);

FOUNDATION_EXPORT JavaxSecurityAuthSubject *JavaxSecurityAuthSubject_getSubjectWithJavaSecurityAccessControlContext_(JavaSecurityAccessControlContext *context);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityAuthSubject)

#endif // _JavaxSecurityAuthSubject_H_
