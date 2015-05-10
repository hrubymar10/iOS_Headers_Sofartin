/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSQLiteUtils : NSObject

+ (void)bindBool:(bool)arg1 intoStatement:(struct sqlite3_stmt { }*)arg2 paramIndex:(int)arg3;
+ (void)bindData:(id)arg1 intoStatement:(struct sqlite3_stmt { }*)arg2 paramIndex:(int)arg3;
+ (void)bindDate:(id)arg1 intoStatement:(struct sqlite3_stmt { }*)arg2 paramIndex:(int)arg3;
+ (void)bindDouble:(double)arg1 intoStatement:(struct sqlite3_stmt { }*)arg2 paramIndex:(int)arg3;
+ (void)bindString:(id)arg1 intoStatement:(struct sqlite3_stmt { }*)arg2 paramIndex:(int)arg3;
+ (void)bindUnsignedInteger:(unsigned long long)arg1 intoStatement:(struct sqlite3_stmt { }*)arg2 paramIndex:(int)arg3;
+ (bool)boolFromStatement:(struct sqlite3_stmt { }*)arg1 columnIndex:(int)arg2;
+ (void)closeExecutedPreparedStatement:(struct sqlite3_stmt { }*)arg1;
+ (id)dataFromStatement:(struct sqlite3_stmt { }*)arg1 columnIndex:(int)arg2;
+ (id)dateFromStatement:(struct sqlite3_stmt { }*)arg1 columnIndex:(int)arg2;
+ (double)doubleFromStatement:(struct sqlite3_stmt { }*)arg1 columnIndex:(int)arg2;
+ (bool)isResponseOkFromPreparedStatementExecution:(int)arg1;
+ (id)stringFromStatement:(struct sqlite3_stmt { }*)arg1 columnIndex:(int)arg2;
+ (unsigned long long)unsignedIntegerFromStatement:(struct sqlite3_stmt { }*)arg1 columnIndex:(int)arg2;

@end
