/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCMDMPayload : MCPayload {
    int _accessRights;
    NSString *_checkInURLString;
    bool _checkOutWhenRemoved;
    NSNumber *_checkOutWhenRemovedNum;
    NSData *_identityPersistentID;
    NSString *_identityUUID;
    NSString *_serverURLString;
    bool _signMessage;
    NSNumber *_signMessageNum;
    NSString *_topic;
    bool _useDevelopmentAPNS;
    NSNumber *_useDevelopmentAPNSNum;
}

@property(assign,readonly) int accessRights;
@property(assign,retain) NSString * checkInURLString;
@property(assign,readonly) bool checkOutWhenRemoved;
@property(assign,readonly) NSNumber * checkOutWhenRemovedNum;
@property(assign,retain) NSData * identityPersistentID;
@property(assign,retain) NSString * identityUUID;
@property(assign,retain) NSArray * localizedAccessRightDescriptions;
@property(assign,retain) NSString * serverURLString;
@property(assign,readonly) bool signMessage;
@property(assign,readonly) NSNumber * signMessageNum;
@property(assign,retain) NSString * topic;
@property(assign,readonly) bool useDevelopmentAPNS;
@property(assign,readonly) NSNumber * useDevelopmentAPNSNum;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)_invalidRightsError;
- (id)_invalidTopicError;
- (id)_nonHTTPSURLErrorForField:(id)arg1;
- (int)accessRights;
- (id)checkInURLString;
- (bool)checkOutWhenRemoved;
- (id)checkOutWhenRemovedNum;
- (id)description;
- (id)identityPersistentID;
- (id)identityUUID;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)localizedAccessRightDescriptions;
- (id)payloadDescriptionKeyValueSections;
- (id)serverURLString;
- (void)setIdentityPersistentID:(id)arg1;
- (bool)signMessage;
- (id)signMessageNum;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)topic;
- (bool)useDevelopmentAPNS;
- (id)useDevelopmentAPNSNum;

@end
