/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPRemoteInterfaceKeyedArchiverDelegate : NSObject <NSKeyedArchiverDelegate> {
    bool _imageIsNamed;
}

@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) bool imageIsNamed;
@property(assign,readonly) Class superclass;

- (void)archiver:(id)arg1 didEncodeObject:(id)arg2;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
- (bool)imageIsNamed;
- (void)setImageIsNamed:(bool)arg1;

@end
