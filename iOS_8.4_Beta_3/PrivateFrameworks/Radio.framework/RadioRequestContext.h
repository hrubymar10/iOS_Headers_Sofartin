/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRequestContext : NSObject <NSCopying> {
    SSVFairPlaySAPSession *_SAPSession;
    bool _usesLocalNetworking;
}

@property(assign,retain) SSVFairPlaySAPSession * SAPSession;
@property(assign,readwrite) bool usesLocalNetworking;

- (void).cxx_destruct;
- (id)SAPSession;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSAPSession:(id)arg1;
- (void)setUsesLocalNetworking:(bool)arg1;
- (bool)usesLocalNetworking;

@end
