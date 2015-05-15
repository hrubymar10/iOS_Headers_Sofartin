/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscriptionNotification : PBCodable <NSCopying> {
    NSMutableArray *_additionalFields;
    CKDPSubscriptionNotificationAlert *_alert;
    struct { 
        unsigned int shouldBadge : 1; 
        unsigned int shouldSendContentAvailable : 1; 
    } _has;
    bool _shouldBadge;
    bool _shouldSendContentAvailable;
}

@property(assign,retain) NSMutableArray * additionalFields;
@property(assign,retain) CKDPSubscriptionNotificationAlert * alert;
@property(assign,readonly) bool hasAlert;
@property(assign,readwrite) bool hasShouldBadge;
@property(assign,readwrite) bool hasShouldSendContentAvailable;
@property(assign,readwrite) bool shouldBadge;
@property(assign,readwrite) bool shouldSendContentAvailable;

- (void).cxx_destruct;
- (void)addAdditionalFields:(id)arg1;
- (id)additionalFields;
- (id)additionalFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalFieldsCount;
- (id)alert;
- (void)clearAdditionalFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlert;
- (bool)hasShouldBadge;
- (bool)hasShouldSendContentAvailable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdditionalFields:(id)arg1;
- (void)setAlert:(id)arg1;
- (void)setHasShouldBadge:(bool)arg1;
- (void)setHasShouldSendContentAvailable:(bool)arg1;
- (void)setShouldBadge:(bool)arg1;
- (void)setShouldSendContentAvailable:(bool)arg1;
- (bool)shouldBadge;
- (bool)shouldSendContentAvailable;
- (void)writeTo:(id)arg1;

@end
