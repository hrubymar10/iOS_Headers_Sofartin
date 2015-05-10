/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying> {
    NSString *_actionLocKey;
    NSString *_launchImage;
    NSMutableArray *_localizedArguments;
    NSString *_localizedKey;
    NSString *_soundName;
    NSString *_text;
}

@property(assign,retain) NSString * actionLocKey;
@property(assign,readonly) bool hasActionLocKey;
@property(assign,readonly) bool hasLaunchImage;
@property(assign,readonly) bool hasLocalizedKey;
@property(assign,readonly) bool hasSoundName;
@property(assign,readonly) bool hasText;
@property(assign,retain) NSString * launchImage;
@property(assign,retain) NSMutableArray * localizedArguments;
@property(assign,retain) NSString * localizedKey;
@property(assign,retain) NSString * soundName;
@property(assign,retain) NSString * text;

- (void).cxx_destruct;
- (id)actionLocKey;
- (void)addLocalizedArguments:(id)arg1;
- (void)clearLocalizedArguments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionLocKey;
- (bool)hasLaunchImage;
- (bool)hasLocalizedKey;
- (bool)hasSoundName;
- (bool)hasText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)launchImage;
- (id)localizedArguments;
- (id)localizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedArgumentsCount;
- (id)localizedKey;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionLocKey:(id)arg1;
- (void)setLaunchImage:(id)arg1;
- (void)setLocalizedArguments:(id)arg1;
- (void)setLocalizedKey:(id)arg1;
- (void)setSoundName:(id)arg1;
- (void)setText:(id)arg1;
- (id)soundName;
- (id)text;
- (void)writeTo:(id)arg1;

@end
