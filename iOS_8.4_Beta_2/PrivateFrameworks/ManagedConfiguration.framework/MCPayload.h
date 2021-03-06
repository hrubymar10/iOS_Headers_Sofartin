/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPayload : NSObject {
    NSString *_UUID;
    NSString *_displayName;
    NSString *_identifier;
    bool _mustInstallNonInteractively;
    NSString *_organization;
    NSString *_payloadDescription;
    NSString *_persistentResourceID;
    MCProfile *_profile;
    NSString *_type;
    long long _version;
}

@property(assign,retain) NSString * UUID;
@property(assign,retain) NSString * displayName;
@property(assign,retain) NSString * friendlyName;
@property(assign,retain) NSString * identifier;
@property(assign,retain) NSArray * installationWarnings;
@property(assign,readwrite) bool mustInstallNonInteractively;
@property(assign,retain) NSString * organization;
@property(assign,retain) NSString * payloadDescription;
@property(assign,retain) NSString * persistentResourceID;
@property(assign,readonly) MCProfile * profile;
@property(assign,readonly) NSDictionary * restrictions;
@property(assign,retain) NSString * type;
@property(assign,readonly) long long version;

+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)badFieldValueErrorWithField:(id)arg1;
+ (id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)localizedDescriptionForPayloadCount:(unsigned long long)arg1;
+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)arg1;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)payloadFromDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)payloadsFromArray:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)typeStrings;
+ (id)wrapperPayloadDictionary;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (id)displayName;
- (id)friendlyName;
- (id)identifier;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)malformedPayloadErrorWithError:(id)arg1;
- (bool)mustInstallNonInteractively;
- (id)organization;
- (id)payloadDescription;
- (id)payloadDescriptionKeyValueSections;
- (id)persistentResourceID;
- (id)profile;
- (id)restrictions;
- (void)setDisplayName:(id)arg1;
- (void)setMustInstallNonInteractively:(bool)arg1;
- (void)setPersistentResourceID:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (id)type;
- (long long)version;

@end
