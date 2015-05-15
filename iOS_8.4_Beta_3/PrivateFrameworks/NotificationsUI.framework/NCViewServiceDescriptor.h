/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@interface NCViewServiceDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString *_bundleIdentifier;
    NSString *_viewControllerClassName;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *viewControllerClassName;

+ (id)descriptorWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)viewControllerClassName;

@end
