/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDirectorySearchQuery : NSObject {
    bool _findGroups;
    bool _findLocations;
    bool _findResources;
    bool _findUsers;
    unsigned long long _resultLimit;
    NSSet *_terms;
}

@property(assign,readwrite) bool findGroups;
@property(assign,readwrite) bool findLocations;
@property(assign,readwrite) bool findResources;
@property(assign,readwrite) bool findUsers;
@property(assign,readwrite) unsigned long long resultLimit;
@property(assign,retain) NSSet * terms;

- (bool)findGroups;
- (bool)findLocations;
- (bool)findResources;
- (bool)findUsers;
- (unsigned long long)resultLimit;
- (void)setFindGroups:(bool)arg1;
- (void)setFindLocations:(bool)arg1;
- (void)setFindResources:(bool)arg1;
- (void)setFindUsers:(bool)arg1;
- (void)setResultLimit:(unsigned long long)arg1;
- (void)setTerms:(id)arg1;
- (id)terms;

@end