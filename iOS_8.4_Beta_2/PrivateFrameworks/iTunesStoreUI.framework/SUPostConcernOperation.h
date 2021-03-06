/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUPostConcernOperation : ISOperation <ISStoreURLOperationDelegate> {
    NSString *_commentText;
    SUConcernItem *_concern;
    unsigned long long _itemIdentifier;
}

@property(assign,retain) NSString * commentText;
@property(assign,retain) SUConcernItem * concern;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readwrite) unsigned long long itemIdentifier;
@property(assign,readonly) Class superclass;

- (id)_httpBody;
- (id)commentText;
- (id)concern;
- (void)dealloc;
- (id)initWithConcern:(id)arg1;
- (unsigned long long)itemIdentifier;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)run;
- (void)setCommentText:(id)arg1;
- (void)setConcern:(id)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;

@end
