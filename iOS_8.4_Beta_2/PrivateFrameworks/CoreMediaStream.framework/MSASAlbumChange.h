/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAlbumChange : NSObject {
    NSString *_GUID;
    NSString *_URLString;
    MSASInvitation *_invitation;
    NSString *_name;
    NSString *_ownerEmail;
    NSString *_ownerFirstName;
    NSString *_ownerFullName;
    NSString *_ownerLastName;
    NSString *_ownerPersonID;
    bool _wasDeleted;
}

@property(assign,retain) NSString * GUID;
@property(assign,retain) NSString * URLString;
@property(assign,retain) MSASInvitation * invitation;
@property(assign,retain) NSString * name;
@property(assign,copy) NSString * ownerEmail;
@property(assign,copy) NSString * ownerFirstName;
@property(assign,copy) NSString * ownerFullName;
@property(assign,copy) NSString * ownerLastName;
@property(assign,copy) NSString * ownerPersonID;
@property(assign,readwrite) bool wasDeleted;

- (void).cxx_destruct;
- (id)GUID;
- (id)URLString;
- (id)description;
- (id)invitation;
- (id)name;
- (id)ownerEmail;
- (id)ownerFirstName;
- (id)ownerFullName;
- (id)ownerLastName;
- (id)ownerPersonID;
- (void)setGUID:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOwnerEmail:(id)arg1;
- (void)setOwnerFirstName:(id)arg1;
- (void)setOwnerFullName:(id)arg1;
- (void)setOwnerLastName:(id)arg1;
- (void)setOwnerPersonID:(id)arg1;
- (void)setURLString:(id)arg1;
- (void)setWasDeleted:(bool)arg1;
- (bool)wasDeleted;

@end
