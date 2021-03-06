/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVPrincipalSearchPropertySet : NSObject {
    NSSet *_properties;
}

@property(assign,readonly) NSSet * stringProperties;
@property(assign,readonly) bool supportsPropertySearch;

+ (id)searchSetWithProperties:(id)arg1;

- (void)dealloc;
- (id)initWithSearchProperties:(id)arg1;
- (id)initWithStringProperties:(id)arg1;
- (bool)isEqualToPropertySet:(id)arg1;
- (id)stringProperties;
- (bool)supportsPropertySearch;
- (bool)supportsPropertyTypeWithNameSpace:(id)arg1 andName:(id)arg2;
- (bool)supportsWellKnownType:(int)arg1;

@end
