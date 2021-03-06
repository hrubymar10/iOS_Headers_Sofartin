/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityApplicationExtensionDiscovery : NSObject {
    id _extensionMatchingContext;
    NSArray *_extensionPointIdentifiers;
    bool _matchesOnlyUserElectedExtensions;
    bool _performsInitialMatching;
    bool _sourceIsManaged;
}

@property(assign,retain) id extensionMatchingContext;
@property(assign,copy) NSArray * extensionPointIdentifiers;
@property(assign,readwrite) bool matchesOnlyUserElectedExtensions;
@property(assign,readwrite) bool performsInitialMatching;
@property(assign,readwrite) bool sourceIsManaged;

- (id)activitiesMatchingInputItems:(id)arg1 error:(id*)arg2 updateBlock:(id)arg3;
- (void)cancelUpdatesIfNeeded;
- (void)dealloc;
- (id)extensionMatchingContext;
- (id)extensionPointIdentifiers;
- (id)init;
- (id)initWithExtensionPointIdentifiers:(id)arg1;
- (bool)matchesOnlyUserElectedExtensions;
- (bool)performsInitialMatching;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setExtensionPointIdentifiers:(id)arg1;
- (void)setMatchesOnlyUserElectedExtensions:(bool)arg1;
- (void)setPerformsInitialMatching:(bool)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (bool)sourceIsManaged;

@end
