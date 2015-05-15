/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyBestIDSValueQuery : NSObject {
    <ABPropertyBestIDSValueQueryDelegate> *_delegate;
    ABPropertyIDSRequest *_idsRequest;
    NSArray *_propertyItems;
    NSMutableArray *_validIDSItems;
}

@property(assign,readonly) ABPropertyGroupItem * bestIDSProperty;
@property(assign,readwrite) <ABPropertyBestIDSValueQueryDelegate> * delegate;
@property(assign,retain) ABPropertyIDSRequest * idsRequest;
@property(assign,retain) NSArray * propertyItems;
@property(assign,retain) NSMutableArray * validIDSItems;

- (id)bestIDSProperty;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)idsRequest;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2;
- (id)propertyItems;
- (void)setDelegate:(id)arg1;
- (void)setIdsRequest:(id)arg1;
- (void)setPropertyItems:(id)arg1;
- (void)setValidIDSItems:(id)arg1;
- (id)validIDSItems;

@end