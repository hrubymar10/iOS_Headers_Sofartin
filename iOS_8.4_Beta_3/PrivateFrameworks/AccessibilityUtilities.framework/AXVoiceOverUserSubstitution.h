/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXVoiceOverUserSubstitution : NSObject <NSCopying, NSSecureCoding> {
    bool _active;
    bool _appliesToAllApps;
    NSSet *_bundleIdentifiers;
    bool _ignoreCase;
    bool _isReplacementTextAllPunctuation;
    bool _isReplacementTextSurroundedByPunctuation;
    NSString *_originalString;
    NSString *_replacementString;
    NSUUID *_uuid;
}

@property(assign,readwrite) bool active;
@property(assign,readwrite) bool appliesToAllApps;
@property(assign,copy) NSSet * bundleIdentifiers;
@property(assign,readwrite) bool ignoreCase;
@property(assign,readonly) bool isReplacementTextAllPunctuation;
@property(assign,readonly) bool isReplacementTextSurroundedByPunctuation;
@property(assign,copy) NSString * originalString;
@property(assign,copy) NSString * replacementString;
@property(assign,retain) NSUUID * uuid;

+ (bool)supportsSecureCoding;

- (bool)active;
- (bool)appliesToAllApps;
- (id)bundleIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignoreCase;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReplacementTextAllPunctuation;
- (bool)isReplacementTextSurroundedByPunctuation;
- (id)originalString;
- (id)replacementString;
- (void)setActive:(bool)arg1;
- (void)setAppliesToAllApps:(bool)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setIgnoreCase:(bool)arg1;
- (void)setOriginalString:(id)arg1;
- (void)setReplacementString:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end