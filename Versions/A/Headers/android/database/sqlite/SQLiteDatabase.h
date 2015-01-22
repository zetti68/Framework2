//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/Zetzsche/Development/SimarisCurves/com.siemens.android.wrapper/src/android/database/sqlite/SQLiteDatabase.java
//

#ifndef _AndroidDatabaseSqliteSQLiteDatabase_H_
#define _AndroidDatabaseSqliteSQLiteDatabase_H_

@protocol AndroidDatabaseCursor;

#import "JreEmulation.h"

#define AndroidDatabaseSqliteSQLiteDatabase_OPEN_READONLY 1

@interface AndroidDatabaseSqliteSQLiteDatabase : NSObject {
}

- (void)close;

- (id<AndroidDatabaseCursor>)rawQueryWithNSString:(NSString *)pSqlCom
                                           withId:(id)pObject;

+ (AndroidDatabaseSqliteSQLiteDatabase *)openDatabaseWithNSString:(NSString *)path
                                                           withId:(id)factory
                                                          withInt:(jint)flags;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void AndroidDatabaseSqliteSQLiteDatabase_init() {}

J2OBJC_STATIC_FIELD_GETTER(AndroidDatabaseSqliteSQLiteDatabase, OPEN_READONLY, jint)

#endif // _AndroidDatabaseSqliteSQLiteDatabase_H_
