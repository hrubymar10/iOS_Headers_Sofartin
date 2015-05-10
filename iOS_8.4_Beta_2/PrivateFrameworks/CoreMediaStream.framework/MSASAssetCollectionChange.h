/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAssetCollectionChange : NSObject {
    NSString *_GUID;
    NSString *_ctag;
    bool _wasDeleted;
}

@property(assign,retain) NSString * GUID;
@property(assign,retain) NSString * ctag;
@property(assign,readwrite) bool wasDeleted;

- (void).cxx_destruct;
- (id)GUID;
- (id)ctag;
- (id)description;
- (void)setCtag:(id)arg1;
- (void)setGUID:(id)arg1;
- (void)setWasDeleted:(bool)arg1;
- (bool)wasDeleted;

@end
