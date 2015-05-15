/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADProperties : NSObject {
    unsigned int mIsMerged;
    unsigned int mIsMergedWithParent;
    OADProperties *mParent;
}

+ (id)defaultProperties;

- (void)dealloc;
- (void)flatten;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDefaults;
- (bool)isEqual:(id)arg1;
- (bool)isMerged;
- (bool)isMergedPropertyForSelector:(SEL)arg1;
- (bool)isMergedWithParent;
- (id)overrideForSelector:(SEL)arg1;
- (void)p_setParent:(id)arg1;
- (id)parent;
- (void)removeUnnecessaryOverrides;
- (void)setMerged:(bool)arg1;
- (void)setMergedWithParent:(bool)arg1;
- (void)setParent:(id)arg1;
- (void)setParent:(id)arg1 myRestrictedClass:(Class)arg2;

@end
