//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/android/graphics/Canvas.java
//

#ifndef _AndroidGraphicsCanvas_H_
#define _AndroidGraphicsCanvas_H_

@class AndroidGraphicsPaint;
@class AndroidGraphicsPath;
@class AndroidGraphicsRect;
@protocol AndroidGraphicsBitmap;

#import "JreEmulation.h"

#define AndroidGraphicsCanvas_ALL_SAVE_FLAG 31
#define AndroidGraphicsCanvas_CLIP_SAVE_FLAG 2
#define AndroidGraphicsCanvas_CLIP_TO_LAYER_SAVE_FLAG 16
#define AndroidGraphicsCanvas_FULL_COLOR_LAYER_SAVE_FLAG 8
#define AndroidGraphicsCanvas_HAS_ALPHA_LAYER_SAVE_FLAG 4
#define AndroidGraphicsCanvas_MATRIX_SAVE_FLAG 1

@protocol AndroidGraphicsCanvas < NSObject, JavaObject >

- (void)drawLineWithFloat:(jfloat)pX0
                withFloat:(jfloat)pY0
                withFloat:(jfloat)pX1
                withFloat:(jfloat)pY1
 withAndroidGraphicsPaint:(AndroidGraphicsPaint *)pLinePaint;

- (void)drawPathWithAndroidGraphicsPath:(AndroidGraphicsPath *)pPath
               withAndroidGraphicsPaint:(AndroidGraphicsPaint *)pPaint;

- (void)drawRectWithFloat:(jfloat)pX
                withFloat:(jfloat)pY
                withFloat:(jfloat)pMaxX
                withFloat:(jfloat)pMaxY
 withAndroidGraphicsPaint:(AndroidGraphicsPaint *)pPaint;

- (void)drawTextWithNSString:(NSString *)pText
                   withFloat:(jfloat)pX0
                   withFloat:(jfloat)pY0
    withAndroidGraphicsPaint:(AndroidGraphicsPaint *)pPaint;

- (void)rotateWithFloat:(jfloat)pRotationDegrees
              withFloat:(jfloat)pXcenter
              withFloat:(jfloat)pYcenter;

- (void)getClipBoundsWithAndroidGraphicsRect:(AndroidGraphicsRect *)pTmpRect;

- (void)clipRectWithAndroidGraphicsRect:(AndroidGraphicsRect *)pTmpRect;

- (void)drawBitmapWithAndroidGraphicsBitmap:(id<AndroidGraphicsBitmap>)pCache
                                    withInt:(jint)pLeft
                                    withInt:(jint)pTop
                   withAndroidGraphicsPaint:(AndroidGraphicsPaint *)pDimPaint;

- (jint)saveWithInt:(jint)pClipSaveFlag;

- (void)restoreToCountWithInt:(jint)pSave;

@end

__attribute__((always_inline)) inline void AndroidGraphicsCanvas_init() {}

J2OBJC_STATIC_FIELD_GETTER(AndroidGraphicsCanvas, MATRIX_SAVE_FLAG, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidGraphicsCanvas, CLIP_SAVE_FLAG, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidGraphicsCanvas, HAS_ALPHA_LAYER_SAVE_FLAG, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidGraphicsCanvas, FULL_COLOR_LAYER_SAVE_FLAG, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidGraphicsCanvas, CLIP_TO_LAYER_SAVE_FLAG, jint)

J2OBJC_STATIC_FIELD_GETTER(AndroidGraphicsCanvas, ALL_SAVE_FLAG, jint)

#endif // _AndroidGraphicsCanvas_H_
