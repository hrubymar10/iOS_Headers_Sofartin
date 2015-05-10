/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUUserActivityContainerItem : NSObject <NSCopying, NSMutableCopying> {
    long long _containerItemType;
    MPMediaEntity *_selectedMediaEntity;
    MPMediaEntity *_visualReferenceMediaEntity;
}

@property(assign,readonly) long long containerItemType;
@property(assign,readonly) _MPUProtoBufUserActivityContainerItem * protoBufUserActivityContainerItem;
@property(assign,readonly) MPMediaEntity * selectedMediaEntity;
@property(assign,readonly) MPMediaEntity * visualReferenceMediaEntity;

- (void).cxx_destruct;
- (long long)containerItemType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContainerItemType:(long long)arg1;
- (id)initWithProtoBufUserActivityContainerItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)protoBufUserActivityContainerItem;
- (id)selectedMediaEntity;
- (id)visualReferenceMediaEntity;

@end