/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBBulletinUpdate : NSObject {
    BBBulletin *_bulletin;
    unsigned long long _feeds;
    bool _shouldSync;
    long long _type;
}

@property(assign,retain) BBBulletin * bulletin;
@property(assign,readonly) unsigned long long feeds;
@property(assign,readonly) bool shouldSync;
@property(assign,readonly) long long type;

+ (id)modifyForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
+ (id)removeForBulletin:(id)arg1 feeds:(unsigned long long)arg2 shouldSync:(bool)arg3;

- (id)bulletin;
- (void)dealloc;
- (unsigned long long)feeds;
- (id)initWithBulletin:(id)arg1 feeds:(unsigned long long)arg2 type:(long long)arg3 shouldSync:(bool)arg4;
- (bool)shouldSync;
- (long long)type;
- (id)typeDescription;

@end