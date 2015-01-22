//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/javax/security/auth/Subject.java
//

#ifndef _JavaxSecurityAuthSubject_H_
#define _JavaxSecurityAuthSubject_H_

@class IOSClass;
@class JavaIoObjectInputStream;
@class JavaIoObjectOutputStream;
@class JavaSecurityAccessControlContext;
@class JavaUtilLinkedList;
@class JavaxSecurityAuthAuthPermission;
@class JavaxSecurityAuthSubjectDomainCombiner;
@class JavaxSecurityAuthSubject_SecureSet;
@protocol JavaSecurityDomainCombiner;
@protocol JavaSecurityPrivilegedExceptionAction;
@protocol JavaUtilCollection;
@protocol JavaUtilSet;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/security/PrivilegedAction.h"
#include "java/util/AbstractSet.h"
#include "java/util/Iterator.h"

#define JavaxSecurityAuthSubject_serialVersionUID -8308522755600156056LL

@interface JavaxSecurityAuthSubject : NSObject < JavaIoSerializable > {
 @public
  id<JavaUtilSet> principals_;
  jboolean readOnly_;
  JavaxSecurityAuthSubject_SecureSet *privateCredentials_;
  JavaxSecurityAuthSubject_SecureSet *publicCredentials_;
}

- (instancetype)init;

- (instancetype)initWithBoolean:(jboolean)readOnly
                withJavaUtilSet:(id<JavaUtilSet>)subjPrincipals
                withJavaUtilSet:(id<JavaUtilSet>)pubCredentials
                withJavaUtilSet:(id<JavaUtilSet>)privCredentials;

+ (id)doAsWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)subject
      withJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action;

+ (id)doAsPrivilegedWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)subject
                withJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action
            withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

+ (id)doAs_PrivilegedActionWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)subject
                       withJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action
                   withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

+ (id)doAsWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)subject
withJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action;

+ (id)doAsPrivilegedWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)subject
       withJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action
            withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

+ (id)doAs_PrivilegedExceptionActionWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)subject
                       withJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action
                            withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

- (jboolean)isEqual:(id)obj;

- (id<JavaUtilSet>)getPrincipals;

- (id<JavaUtilSet>)getPrincipalsWithIOSClass:(IOSClass *)c;

- (id<JavaUtilSet>)getPrivateCredentials;

- (id<JavaUtilSet>)getPrivateCredentialsWithIOSClass:(IOSClass *)c;

- (id<JavaUtilSet>)getPublicCredentials;

- (id<JavaUtilSet>)getPublicCredentialsWithIOSClass:(IOSClass *)c;

- (NSUInteger)hash;

- (void)setReadOnly;

- (jboolean)isReadOnly;

- (NSString *)description;

- (void)readObjectWithJavaIoObjectInputStream:(JavaIoObjectInputStream *)inArg;

- (void)writeObjectWithJavaIoObjectOutputStream:(JavaIoObjectOutputStream *)outArg;

+ (JavaxSecurityAuthSubject *)getSubjectWithJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

- (void)checkState;

- (void)copyAllFieldsTo:(JavaxSecurityAuthSubject *)other;

@end

FOUNDATION_EXPORT BOOL JavaxSecurityAuthSubject_initialized;
J2OBJC_STATIC_INIT(JavaxSecurityAuthSubject)

J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject, principals_, id<JavaUtilSet>)
J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject, privateCredentials_, JavaxSecurityAuthSubject_SecureSet *)
J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject, publicCredentials_, JavaxSecurityAuthSubject_SecureSet *)

J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthSubject, serialVersionUID, jlong)

FOUNDATION_EXPORT JavaxSecurityAuthAuthPermission *JavaxSecurityAuthSubject__AS_;
J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthSubject, _AS_, JavaxSecurityAuthAuthPermission *)

FOUNDATION_EXPORT JavaxSecurityAuthAuthPermission *JavaxSecurityAuthSubject__AS_PRIVILEGED_;
J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthSubject, _AS_PRIVILEGED_, JavaxSecurityAuthAuthPermission *)

FOUNDATION_EXPORT JavaxSecurityAuthAuthPermission *JavaxSecurityAuthSubject__SUBJECT_;
J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthSubject, _SUBJECT_, JavaxSecurityAuthAuthPermission *)

FOUNDATION_EXPORT JavaxSecurityAuthAuthPermission *JavaxSecurityAuthSubject__PRINCIPALS_;
J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthSubject, _PRINCIPALS_, JavaxSecurityAuthAuthPermission *)

FOUNDATION_EXPORT JavaxSecurityAuthAuthPermission *JavaxSecurityAuthSubject__PRIVATE_CREDENTIALS_;
J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthSubject, _PRIVATE_CREDENTIALS_, JavaxSecurityAuthAuthPermission *)

FOUNDATION_EXPORT JavaxSecurityAuthAuthPermission *JavaxSecurityAuthSubject__PUBLIC_CREDENTIALS_;
J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthSubject, _PUBLIC_CREDENTIALS_, JavaxSecurityAuthAuthPermission *)

FOUNDATION_EXPORT JavaxSecurityAuthAuthPermission *JavaxSecurityAuthSubject__READ_ONLY_;
J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthSubject, _READ_ONLY_, JavaxSecurityAuthAuthPermission *)

#define JavaxSecurityAuthSubject_SecureSet_SET_Principal 0
#define JavaxSecurityAuthSubject_SecureSet_SET_PrivCred 1
#define JavaxSecurityAuthSubject_SecureSet_SET_PubCred 2
#define JavaxSecurityAuthSubject_SecureSet_serialVersionUID 7911754171111800359LL

@interface JavaxSecurityAuthSubject_SecureSet : JavaUtilAbstractSet < JavaIoSerializable > {
 @public
  JavaxSecurityAuthSubject *this$0_;
  JavaUtilLinkedList *elements_;
  jint setType_;
  JavaxSecurityAuthAuthPermission *permission_;
}

- (instancetype)initWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)outer$
             withJavaxSecurityAuthAuthPermission:(JavaxSecurityAuthAuthPermission *)perm;

- (instancetype)initWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)outer$
             withJavaxSecurityAuthAuthPermission:(JavaxSecurityAuthAuthPermission *)perm
                          withJavaUtilCollection:(id<JavaUtilCollection>)s;

- (void)verifyElementWithId:(id)o;

- (jboolean)addWithId:(id)o;

- (id<JavaUtilIterator>)iterator;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)size;

- (id<JavaUtilSet>)getWithIOSClass:(IOSClass *)c;

- (void)readObjectWithJavaIoObjectInputStream:(JavaIoObjectInputStream *)inArg;

- (void)writeObjectWithJavaIoObjectOutputStream:(JavaIoObjectOutputStream *)outArg;

- (void)copyAllFieldsTo:(JavaxSecurityAuthSubject_SecureSet *)other;


@end

__attribute__((always_inline)) inline void JavaxSecurityAuthSubject_SecureSet_init() {}

J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject_SecureSet, this$0_, JavaxSecurityAuthSubject *)
J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject_SecureSet, elements_, JavaUtilLinkedList *)
J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject_SecureSet, permission_, JavaxSecurityAuthAuthPermission *)

J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthSubject_SecureSet, serialVersionUID, jlong)

J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthSubject_SecureSet, SET_Principal, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthSubject_SecureSet, SET_PrivCred, jint)

J2OBJC_STATIC_FIELD_GETTER(JavaxSecurityAuthSubject_SecureSet, SET_PubCred, jint)

@interface JavaxSecurityAuthSubject_SecureSet_SecureIterator : NSObject < JavaUtilIterator > {
 @public
  JavaxSecurityAuthSubject_SecureSet *this$0_;
  id<JavaUtilIterator> iterator_;
}

- (instancetype)initWithJavaxSecurityAuthSubject_SecureSet:(JavaxSecurityAuthSubject_SecureSet *)outer$
                                      withJavaUtilIterator:(id<JavaUtilIterator>)iterator;

- (jboolean)hasNext;

- (id)next;

- (void)remove;

- (void)copyAllFieldsTo:(JavaxSecurityAuthSubject_SecureSet_SecureIterator *)other;

@end

__attribute__((always_inline)) inline void JavaxSecurityAuthSubject_SecureSet_SecureIterator_init() {}

J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject_SecureSet_SecureIterator, this$0_, JavaxSecurityAuthSubject_SecureSet *)
J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject_SecureSet_SecureIterator, iterator_, id<JavaUtilIterator>)

@interface JavaxSecurityAuthSubject_SecureSet_$1 : JavaxSecurityAuthSubject_SecureSet_SecureIterator {
}

- (id)next;

- (instancetype)initWithJavaxSecurityAuthSubject_SecureSet:(JavaxSecurityAuthSubject_SecureSet *)outer$
                                      withJavaUtilIterator:(id<JavaUtilIterator>)arg$0;

@end

__attribute__((always_inline)) inline void JavaxSecurityAuthSubject_SecureSet_$1_init() {}

@interface JavaxSecurityAuthSubject_SecureSet_$2 : JavaUtilAbstractSet {
 @public
  JavaUtilLinkedList *elements_;
  IOSClass *val$c_;
}

- (jboolean)addWithId:(id)o;

- (id<JavaUtilIterator>)iterator;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)size;

- (instancetype)initWithIOSClass:(IOSClass *)capture$0;

- (void)copyAllFieldsTo:(JavaxSecurityAuthSubject_SecureSet_$2 *)other;


@end

__attribute__((always_inline)) inline void JavaxSecurityAuthSubject_SecureSet_$2_init() {}

J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject_SecureSet_$2, elements_, JavaUtilLinkedList *)
J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject_SecureSet_$2, val$c_, IOSClass *)

@interface JavaxSecurityAuthSubject_$1 : NSObject < JavaSecurityPrivilegedAction > {
 @public
  JavaSecurityAccessControlContext *val$context_;
  JavaxSecurityAuthSubjectDomainCombiner *val$combiner_;
}

- (id)run;

- (instancetype)initWithJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)capture$0
              withJavaxSecurityAuthSubjectDomainCombiner:(JavaxSecurityAuthSubjectDomainCombiner *)capture$1;

@end

__attribute__((always_inline)) inline void JavaxSecurityAuthSubject_$1_init() {}

J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject_$1, val$context_, JavaSecurityAccessControlContext *)
J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject_$1, val$combiner_, JavaxSecurityAuthSubjectDomainCombiner *)

@interface JavaxSecurityAuthSubject_$2 : NSObject < JavaSecurityPrivilegedAction > {
 @public
  JavaSecurityAccessControlContext *val$context_;
  JavaxSecurityAuthSubjectDomainCombiner *val$combiner_;
}

- (JavaSecurityAccessControlContext *)run;

- (instancetype)initWithJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)capture$0
              withJavaxSecurityAuthSubjectDomainCombiner:(JavaxSecurityAuthSubjectDomainCombiner *)capture$1;

@end

__attribute__((always_inline)) inline void JavaxSecurityAuthSubject_$2_init() {}

J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject_$2, val$context_, JavaSecurityAccessControlContext *)
J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject_$2, val$combiner_, JavaxSecurityAuthSubjectDomainCombiner *)

@interface JavaxSecurityAuthSubject_$3 : NSObject < JavaSecurityPrivilegedAction > {
 @public
  JavaSecurityAccessControlContext *val$context_;
}

- (id<JavaSecurityDomainCombiner>)run;

- (instancetype)initWithJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)capture$0;

@end

__attribute__((always_inline)) inline void JavaxSecurityAuthSubject_$3_init() {}

J2OBJC_FIELD_SETTER(JavaxSecurityAuthSubject_$3, val$context_, JavaSecurityAccessControlContext *)

#endif // _JavaxSecurityAuthSubject_H_