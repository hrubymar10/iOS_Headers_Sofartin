/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKChangeRecord : NSObject {
    id mDetails;
    int mKind;
}

@property(assign,readonly) bool allowedInCommit;
@property(assign,readonly) id details;
@property(assign,readonly) int kind;

+ (id)changeRecordWithKind:(int)arg1 details:(id)arg2;

- (bool)allowedInCommit;
- (void)dealloc;
- (id)details;
- (id)initWithKind:(int)arg1 details:(id)arg2;
- (int)kind;

@end
