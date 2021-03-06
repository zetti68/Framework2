//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/javax/security/auth/SubjectDomainCombiner.java
//

#ifndef _JavaxSecurityAuthSubjectDomainCombiner_H_
#define _JavaxSecurityAuthSubjectDomainCombiner_H_

#include "J2ObjC_header.h"
#include "java/security/DomainCombiner.h"

@class IOSObjectArray;
@class JavaxSecurityAuthSubject;

@interface JavaxSecurityAuthSubjectDomainCombiner : NSObject < JavaSecurityDomainCombiner >

#pragma mark Public

- (instancetype)initWithJavaxSecurityAuthSubject:(JavaxSecurityAuthSubject *)subject;

- (IOSObjectArray *)combineWithJavaSecurityProtectionDomainArray:(IOSObjectArray *)currentDomains
                           withJavaSecurityProtectionDomainArray:(IOSObjectArray *)assignedDomains;

- (JavaxSecurityAuthSubject *)getSubject;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityAuthSubjectDomainCombiner)

FOUNDATION_EXPORT void JavaxSecurityAuthSubjectDomainCombiner_initWithJavaxSecurityAuthSubject_(JavaxSecurityAuthSubjectDomainCombiner *self, JavaxSecurityAuthSubject *subject);

FOUNDATION_EXPORT JavaxSecurityAuthSubjectDomainCombiner *new_JavaxSecurityAuthSubjectDomainCombiner_initWithJavaxSecurityAuthSubject_(JavaxSecurityAuthSubject *subject) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityAuthSubjectDomainCombiner)

#endif // _JavaxSecurityAuthSubjectDomainCombiner_H_
