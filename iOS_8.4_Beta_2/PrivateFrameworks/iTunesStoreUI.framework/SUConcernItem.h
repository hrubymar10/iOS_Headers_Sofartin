/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUConcernItem : NSObject {
    bool _default;
    NSString *_identifier;
    NSString *_title;
}

@property(getter=isDefaultConcern,assign,readwrite) bool defaultConcern;
@property(assign,retain) NSString * identifier;
@property(assign,retain) NSString * title;

- (void)dealloc;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (bool)isDefaultConcern;
- (void)setDefaultConcern:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
