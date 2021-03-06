/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAnimatorDOMFeature : NSObject <SKUIDOMFeature> {
    IKAppContext *_appContext;
    <SKUIAnimatorDOMFeatureDelegate> *_delegate;
    NSString *_featureName;
}

@property(assign,readonly) IKAppContext * appContext;
@property(assign,copy) NSString * debugDescription;
@property(assign,readwrite) <SKUIAnimatorDOMFeatureDelegate> * delegate;
@property(assign,copy) NSString * description;
@property(assign,copy) NSString * featureName;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) Class superclass;

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (id)appContext;
- (id)delegate;
- (id)featureName;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
