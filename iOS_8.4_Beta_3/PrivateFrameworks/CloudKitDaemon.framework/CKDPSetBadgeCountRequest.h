/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying> {
    unsigned int _badgeCount;
    bool _forDevice;
    struct { 
        unsigned int badgeCount : 1; 
        unsigned int forDevice : 1; 
    } _has;
}

@property (nonatomic) unsigned int badgeCount;
@property (nonatomic) bool forDevice;
@property (nonatomic) bool hasBadgeCount;
@property (nonatomic) bool hasForDevice;

+ (id)options;

- (unsigned int)badgeCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)forDevice;
- (bool)hasBadgeCount;
- (bool)hasForDevice;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBadgeCount:(unsigned int)arg1;
- (void)setForDevice:(bool)arg1;
- (void)setHasBadgeCount:(bool)arg1;
- (void)setHasForDevice:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
