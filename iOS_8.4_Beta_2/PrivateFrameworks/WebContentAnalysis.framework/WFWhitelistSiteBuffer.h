/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFWhitelistSiteBuffer : NSObject {
    unsigned long long maxSize;
    NSMutableArray *siteBuffer;
    NSMutableSet *siteSet;
}

@property(assign,readwrite) unsigned long long maxSize;
@property(assign,retain) NSMutableArray * siteBuffer;
@property(assign,retain) NSMutableSet * siteSet;

- (void)addURLString:(id)arg1;
- (bool)containsMetasitePrefixOfURLString:(id)arg1;
- (bool)containsURLString:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)maxSize;
- (void)setMaxSize:(unsigned long long)arg1;
- (void)setSiteBuffer:(id)arg1;
- (void)setSiteSet:(id)arg1;
- (id)siteBuffer;
- (id)siteSet;
- (void)trimToSize:(unsigned long long)arg1;

@end
