/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageInformationViewController : UIViewController <SKUIContentRatingArtworkLoaderObserver> {
    SKUIClientContext *_clientContext;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIProductInformationView *_informationView;
    SKUIProductPageItem *_item;
    NSOperationQueue *_operationQueue;
    SKUIProductPageProductInfo *_productInfo;
}

@property(assign,readonly) SKUIClientContext * clientContext;
@property(assign,copy) NSString * debugDescription;
@property(assign,copy) NSString * description;
@property(assign,readonly) unsigned long long hash;
@property(assign,readonly) SKUIProductPageItem * item;
@property(assign,retain) NSOperationQueue * operationQueue;
@property(assign,readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contentRatingResourceLoader;
- (id)_informationLinesWithItem:(id)arg1 ratingImage:(id)arg2;
- (id)_informationLinesWithProductInfo:(id)arg1;
- (void)_updateLinesWithRatingImage:(id)arg1;
- (id)clientContext;
- (void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3;
- (void)dealloc;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;
- (id)initWithProductInformation:(id)arg1 clientContext:(id)arg2;
- (id)item;
- (void)loadView;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end
