/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMetadataQueryResultGroup : NSObject {
    id _private;
    unsigned long long _private2;
    void *_reserved;
}

@property(assign,copy) NSString * attribute;
@property(assign,readonly) unsigned long long resultCount;
@property(assign,copy) NSArray * results;
@property(assign,copy) NSArray * subgroups;
@property(assign,retain) id value;

- (void)_addResult:(unsigned long long)arg1;
- (id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned long long)arg3 value:(id)arg4;
- (void)_zapResultArray;
- (id)attribute;
- (void)dealloc;
- (id)resultAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultCount;
- (id)results;
- (id)subgroups;
- (id)value;

@end
