/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDismissalItem : NSObject {
    NSDate *_expiration;
    unsigned long long _feeds;
}

@property(assign,retain) NSDate * expiration;
@property(assign,readonly) unsigned long long feeds;

- (void)addFeeds:(unsigned long long)arg1;
- (void)dealloc;
- (id)description;
- (id)expiration;
- (unsigned long long)feeds;
- (bool)hasExpired;
- (id)initWithFeeds:(unsigned long long)arg1;

@end
