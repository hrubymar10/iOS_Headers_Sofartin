/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicJSPlaybackRequest : NSObject {
    MPStoreItemMetadataContext *_containerItem;
    NSString *_featureName;
    NSArray *_items;
    NSData *_recommendationData;
    unsigned long long _shuffleMode;
    unsigned long long _startIndex;
    unsigned long long _upNextAction;
}

@property (nonatomic, readonly) MPStoreItemMetadataContext *containerItem;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSData *recommendationData;
@property (nonatomic, readonly) unsigned long long shuffleMode;
@property (nonatomic, readonly) unsigned long long startIndex;
@property (nonatomic, readonly) unsigned long long upNextAction;

- (void).cxx_destruct;
- (id)containerItem;
- (id)featureName;
- (id)init;
- (id)initWithJSDictionary:(id)arg1;
- (id)items;
- (id)recommendationData;
- (unsigned long long)shuffleMode;
- (unsigned long long)startIndex;
- (unsigned long long)upNextAction;

@end
