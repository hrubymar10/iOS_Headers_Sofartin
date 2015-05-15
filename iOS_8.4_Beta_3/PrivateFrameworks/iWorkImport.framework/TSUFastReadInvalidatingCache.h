/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFastReadInvalidatingCache : NSObject {
    NSCondition *mCondition;
    id mGenerator;
    bool mIsGenerating;
    long long mReaderCount;
    bool mReentrant;
    NSArray *mToDispose;
    id mValue;
}

- (void)dealloc;
- (id)initForReentrant:(bool)arg1 withGenerator:(id)arg2;
- (void)invalidate;
- (void)p_setValue:(id)arg1;
- (id)value;

@end
