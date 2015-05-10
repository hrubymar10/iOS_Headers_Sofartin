/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface BABookmarkItem : NSObject {
    WebBookmark *_bookmark;
    WebBookmarkCollection *_collection;
}

@property(assign,retain) WebBookmark * bookmark;
@property(assign,readonly) WebBookmarkCollection * collection;

- (id)bookmark;
- (id)collection;
- (void)dealloc;
- (id)description;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2;
- (void)setBookmark:(id)arg1;

@end
