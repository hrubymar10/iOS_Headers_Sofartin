/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCWebClipPayload : MCPayload {
    NSURL *_URL;
    bool _fullScreen;
    NSNumber *_fullScreenNum;
    NSData *_iconData;
    bool _isRemovable;
    NSNumber *_isRemovableNum;
    NSString *_label;
    bool _precomposed;
    NSNumber *_precomposedNum;
    NSString *_savedIdentifier;
}

@property (nonatomic, readonly, retain) NSURL *URL;
@property (nonatomic, readonly) bool fullScreen;
@property (nonatomic, readonly) NSNumber *fullScreenNum;
@property (nonatomic, readonly, retain) NSData *iconData;
@property (nonatomic, readonly) bool isRemovable;
@property (nonatomic, readonly) NSNumber *isRemovableNum;
@property (nonatomic, readonly, retain) NSString *label;
@property (nonatomic, readonly) bool precomposed;
@property (nonatomic, readonly) NSNumber *precomposedNum;
@property (nonatomic, retain) NSString *savedIdentifier;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)URL;
- (id)description;
- (bool)fullScreen;
- (id)fullScreenNum;
- (id)iconData;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isRemovable;
- (id)isRemovableNum;
- (id)label;
- (id)payloadDescriptionKeyValueSections;
- (bool)precomposed;
- (id)precomposedNum;
- (id)savedIdentifier;
- (void)setSavedIdentifier:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;

@end
