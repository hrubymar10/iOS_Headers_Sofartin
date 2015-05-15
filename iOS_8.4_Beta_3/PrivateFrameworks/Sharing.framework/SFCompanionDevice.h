/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionDevice : NSObject {
    NSDictionary *_activities;
    NSMutableSet *_connections;
    NSString *_identifier;
    NSString *_name;
    id _node;
    NSString *_serviceName;
    NSArray *_services;
    NSString *_type;
    NSString *_uniqueIdentifier;
}

@property(assign,retain) NSDictionary * activities;
@property(assign,retain) NSMutableSet * connections;
@property(assign,copy) NSString * identifier;
@property(assign,copy) NSString * name;
@property(assign,retain) id node;
@property(assign,retain) NSString * serviceName;
@property(assign,retain) NSArray * services;
@property(assign,copy) NSString * type;
@property(assign,retain) NSString * uniqueIdentifier;

- (id)activities;
- (id)connections;
- (void)dealloc;
- (long long)distance;
- (struct CGImage { }*)icon;
- (id)identifier;
- (id)init;
- (id)model;
- (id)name;
- (id)node;
- (id)serviceName;
- (id)services;
- (void)setActivities:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNode:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)type;
- (id)uniqueIdentifier;

@end
