/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSMediaItem : IKJSObject <IKJSMediaItem> {
    IKAppMediaItemBridge *_bridge;
}

@property(assign,readonly) IKAppMediaItemBridge * bridge;
@property(assign,retain) NSString * description;
@property(assign,retain) NSString * subtitle;
@property(assign,retain) NSString * title;
@property(assign,retain) NSString * url;

- (void).cxx_destruct;
- (id)bridge;
- (id)description;
- (id)initWithArgument:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)startLoadingCertificateDataForURI:(id)arg1 withCallback:(id)arg2;
- (void)startLoadingContentIdentifierDataForURI:(id)arg1 withCallback:(id)arg2;
- (void)startLoadingKeyDataForURI:(id)arg1 requestData:(id)arg2 withCallback:(id)arg3;
- (id)subtitle;
- (id)title;
- (id)url;

@end
