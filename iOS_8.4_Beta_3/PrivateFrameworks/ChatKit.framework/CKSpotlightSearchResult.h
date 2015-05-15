/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSpotlightSearchResult : NSObject {
    NSString *_chatGUID;
    NSDate *_messageDate;
    NSString *_messageGUID;
    NSString *_summary;
}

@property (nonatomic, copy) NSString *chatGUID;
@property (nonatomic, retain) NSDate *messageDate;
@property (nonatomic, copy) NSString *messageGUID;
@property (nonatomic, copy) NSString *summary;

- (id)chatGUID;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 chatGUID:(id)arg2;
- (id)messageDate;
- (id)messageGUID;
- (void)setChatGUID:(id)arg1;
- (void)setMessageDate:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
