/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverGatewayAddBulletinRequest : NSObject {
    NSString *_bulletinID;
    NSString *_sectionID;
    NSDate *_timeout;
    id _timeoutHandler;
}

@property(assign,retain) NSString * bulletinID;
@property(assign,retain) NSString * sectionID;
@property(assign,retain) NSDate * timeout;
@property(assign,copy) id timeoutHandler;

- (id)bulletinID;
- (void)dealloc;
- (id)sectionID;
- (void)setBulletinID:(id)arg1;
- (void)setSectionID:(id)arg1;
- (void)setTimeout:(id)arg1;
- (void)setTimeoutHandler:(id)arg1;
- (id)timeout;
- (id)timeoutHandler;

@end