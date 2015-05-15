/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentOptionsModel : NSObject {
    id _modelChangedHandler;
    NSMutableDictionary *_optionGroupMap;
    NSMutableArray *_optionGroups;
    PKPaymentOptionsRecents *_recents;
}

@property (nonatomic, copy) id modelChangedHandler;
@property (nonatomic, readonly) NSArray *optionGroups;

+ (id)_detailForReferenceObject:(id)arg1 withGroupType:(id)arg2;
+ (int)_propertyIDForGroupType:(id)arg1;
+ (id)_titleForReferenceObject:(id)arg1 withGroupType:(id)arg2;

- (void)_addMeCardEntriesForPropertyID:(int)arg1 toCoreRecentAndOptionsGroup:(id)arg2 afterItem:(id)arg3;
- (id)_displayableNameFor:(id)arg1 withLabel:(id)arg2;
- (void)_fetchItemsFromCoreRecentsWithPropertyID:(int)arg1 forOptionGroup:(id)arg2 afterItem:(id)arg3;
- (void)_mergeInCoreRecentsResults:(id)arg1 withPropertyID:(int)arg2 forOptionGroup:(id)arg3 afterItem:(id)arg4;
- (void)addPeoplePickedLabeledValue:(id)arg1 contact:(id)arg2 propertyID:(int)arg3 toOptionsGroup:(id)arg4;
- (void)dealloc;
- (id)init;
- (id)modelChangedHandler;
- (id)optionGroupForGroupType:(id)arg1;
- (id)optionGroups;
- (void)setModelChangedHandler:(id)arg1;
- (void)setOptionGroupType:(id)arg1 options:(id)arg2 selectedIndex:(long long)arg3 displayMode:(id)arg4 displayName:(id)arg5 editable:(bool)arg6 newItemHandler:(id)arg7 pickedItemHandler:(id)arg8 selectedValueChangedHandler:(id)arg9;
- (void)setPaymentPasses:(id)arg1 selectedIndex:(long long)arg2 selectedValueChangedHandler:(id)arg3;
- (void)setShippingMethods:(id)arg1 currencyCode:(id)arg2 selectedIndex:(long long)arg3 displayMode:(id)arg4 selectedValueChangedHandler:(id)arg5;

@end
