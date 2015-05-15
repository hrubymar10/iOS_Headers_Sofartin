/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCFontDatabaseCacheEntry : NSObject {
    bool _bold;
    int _fontClass;
    bool _italic;
    NSString *_name;
}

@property (nonatomic, readonly) bool bold;
@property (nonatomic, readonly) int fontClass;
@property (nonatomic, readonly) bool italic;
@property (nonatomic, readonly) NSString *name;

+ (id)newFontDatabaseCacheEntryWithName:(id)arg1 fontClass:(int)arg2 bold:(bool)arg3 italic:(bool)arg4;

- (bool)bold;
- (void)dealloc;
- (id)description;
- (int)fontClass;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 fontClass:(int)arg2 bold:(bool)arg3 italic:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)italic;
- (id)name;

@end
