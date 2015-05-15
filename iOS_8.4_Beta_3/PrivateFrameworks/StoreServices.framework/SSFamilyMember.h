/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSFamilyMember : NSObject <SSXPCCoding> {
    NSString *_firstName;
    NSString *_iCloudAccountName;
    NSNumber *_iCloudIdentifier;
    NSNumber *_iTunesIdentifier;
    NSString *_lastName;
    bool _me;
    bool _sharingPurchases;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,retain) NSString * firstName;
@property(assign,readonly) unsigned long long hash;
@property(assign,retain) NSString * iCloudAccountName;
@property(assign,retain) NSNumber * iCloudIdentifier;
@property(assign,retain) NSNumber * iTunesIdentifier;
@property(assign,retain) NSString * lastName;
@property(getter=isMe,assign,readwrite) bool me;
@property(getter=isSharingPurchases,assign,readwrite) bool sharingPurchases;
@property(assign,readonly) Class superclass;

- (id)copyXPCEncoding;
- (id)description;
- (id)firstName;
- (id)iCloudAccountName;
- (id)iCloudIdentifier;
- (id)iTunesIdentifier;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isMe;
- (bool)isSharingPurchases;
- (id)lastName;
- (id)newCacheRepresentation;
- (void)setFirstName:(id)arg1;
- (void)setICloudAccountName:(id)arg1;
- (void)setICloudIdentifier:(id)arg1;
- (void)setITunesIdentifier:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMe:(bool)arg1;
- (void)setSharingPurchases:(bool)arg1;

@end