/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBButton : NSObject <BBUniquableObject, NSCopying, NSSecureCoding> {
    BBAction *_action;
    NSString *_identifier;
    BBImage *_image;
    NSString *_title;
}

@property (nonatomic, copy) BBAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSData *glyphData;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) BBImage *image;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)_possiblyCachedButtonForInitializedButton:(id)arg1;
+ (void)_removeButtonFromCache:(id)arg1;
+ (id)buttonWithTitle:(id)arg1 action:(id)arg2;
+ (id)buttonWithTitle:(id)arg1 action:(id)arg2 identifier:(id)arg3;
+ (id)buttonWithTitle:(id)arg1 glyphData:(id)arg2 action:(id)arg3 identifier:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 image:(id)arg2 action:(id)arg3 identifier:(id)arg4;
+ (bool)supportsSecureCoding;

- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)glyphData;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)uniqueIdentifier;

@end
