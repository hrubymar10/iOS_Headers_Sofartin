/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUCustomFormatCondition : NSObject <NSCopying> {
    int mConditionType;
    double mConditionValue;
    TSUCustomFormatData *mData;
}

@property(assign,readonly) int conditionType;
@property(assign,readonly) double conditionValue;
@property(assign,readonly) TSUCustomFormatData * data;

- (int)conditionType;
- (double)conditionValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)init;
- (id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
