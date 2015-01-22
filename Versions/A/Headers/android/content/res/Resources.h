//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/android/content/res/Resources.java
//

#ifndef _AndroidContentResResources_H_
#define _AndroidContentResResources_H_

@class AndroidUtilTypedValue;
@class IOSIntArray;
@protocol AndroidContentResDisplayMetrics;
@protocol AndroidContentResTypedArray;
@protocol AndroidGraphicsDrawableDrawable;
@protocol AndroidUtilAttributeSet;
@protocol JavaLangCharSequence;

#import "JreEmulation.h"

@protocol AndroidContentResResources < NSObject, JavaObject >

- (NSString *)getStringWithInt:(jint)pKey;

- (jint)getColorWithInt:(jint)pKey;

- (jint)getDimensionPixelSizeWithInt:(jint)pKey;

- (id<AndroidContentResDisplayMetrics>)getDisplayMetrics;

- (id<AndroidGraphicsDrawableDrawable>)getDrawableWithInt:(jint)pKey;

- (jboolean)getBooleanWithInt:(jint)pKey;

- (id<JavaLangCharSequence>)getTextWithInt:(jint)pKey;

- (jint)getIntegerWithInt:(jint)pKey;

- (NSString *)getStringWithInt:(jint)pKey
                  withNSString:(NSString *)pDefault;

- (void)getValueWithInt:(jint)pKey
withAndroidUtilTypedValue:(AndroidUtilTypedValue *)pOut
            withBoolean:(jboolean)pResolveRefs;

@end

__attribute__((always_inline)) inline void AndroidContentResResources_init() {}

@protocol AndroidContentResResources_Theme < NSObject, JavaObject >

- (id<AndroidContentResTypedArray>)obtainStyledAttributesWithAndroidUtilAttributeSet:(id<AndroidUtilAttributeSet>)pAttribs
                                                                        withIntArray:(IOSIntArray *)pView
                                                                             withInt:(jint)pI
                                                                             withInt:(jint)pI2;

@end

__attribute__((always_inline)) inline void AndroidContentResResources_Theme_init() {}

#endif // _AndroidContentResResources_H_