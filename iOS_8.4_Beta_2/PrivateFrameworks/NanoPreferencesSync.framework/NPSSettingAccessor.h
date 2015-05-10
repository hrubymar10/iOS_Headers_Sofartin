/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
 */

@interface NPSSettingAccessor : NSObject {
    NSString *_container;
    NSString *_containerPath;
    NSString *_domain;
    bool _hasChangesToWrite;
    NPSDomainAccessor *_nanoDomainAccessor;
    long long _type;
}

@property(assign,retain) NSString * container;
@property(assign,retain) NSString * containerPath;
@property(assign,retain) NSString * domain;
@property(assign,readwrite) bool hasChangesToWrite;
@property(assign,retain) NPSDomainAccessor * nanoDomainAccessor;
@property(assign,readwrite) long long type;

+ (id)serializeObject:(id)arg1 error:(id*)arg2;
+ (id)unserializeObject:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)container;
- (id)containerPath;
- (id)copyKeyList;
- (id)domain;
- (bool)hasChangesToWrite;
- (id)initWithNanoDomain:(id)arg1;
- (id)initWithUserDefaultsDomain:(id)arg1 container:(id)arg2;
- (id)initWithUserDefaultsDomain:(id)arg1 containerPath:(id)arg2;
- (id)nanoDomainAccessor;
- (id)objectForKey:(id)arg1;
- (id)serializedObjectForKey:(id)arg1 error:(id*)arg2;
- (void)setContainer:(id)arg1;
- (void)setContainerPath:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasChangesToWrite:(bool)arg1;
- (void)setNanoDomainAccessor:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setType:(long long)arg1;
- (bool)synchronize;
- (bool)synchronizeForReading;
- (bool)synchronizeForWriting;
- (long long)type;

@end