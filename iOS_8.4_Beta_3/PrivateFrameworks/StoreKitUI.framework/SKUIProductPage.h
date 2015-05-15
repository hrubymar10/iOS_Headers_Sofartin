/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPage : NSObject <NSCopying> {
    long long _defaultPageFragment;
    SKUIProductPageItem *_item;
    NSData *_itmlData;
    NSHTTPURLResponse *_itmlResponse;
    SSMetricsConfiguration *_metricsConfiguration;
    NSString *_metricsPageDescription;
    NSURL *_pageURL;
    SKUIProductPageProductInfo *_productInformation;
    NSArray *_relatedContentSwooshes;
    SKUIReviewConfiguration *_reviewConfiguration;
    SKUIUber *_uber;
}

@property(assign,retain) NSData * ITMLData;
@property(assign,retain) NSHTTPURLResponse * ITMLResponse;
@property(assign,readwrite) long long defaultPageFragment;
@property(assign,retain) SKUIProductPageItem * item;
@property(assign,retain) SSMetricsConfiguration * metricsConfiguration;
@property(assign,copy) NSString * metricsPageDescription;
@property(assign,copy) NSURL * pageURL;
@property(assign,retain) SKUIProductPageProductInfo * productInformation;
@property(assign,copy) NSArray * relatedContentSwooshes;
@property(assign,retain) SKUIReviewConfiguration * reviewConfiguration;
@property(assign,retain) SKUIUber * uber;

- (void).cxx_destruct;
- (id)ITMLData;
- (id)ITMLResponse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)defaultPageFragment;
- (id)item;
- (id)metricsConfiguration;
- (id)metricsPageDescription;
- (id)pageURL;
- (id)productInformation;
- (id)relatedContentSwooshes;
- (id)reviewConfiguration;
- (void)setDefaultPageFragment:(long long)arg1;
- (void)setITMLData:(id)arg1;
- (void)setITMLResponse:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMetricsConfiguration:(id)arg1;
- (void)setMetricsPageDescription:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setProductInformation:(id)arg1;
- (void)setRelatedContentSwooshes:(id)arg1;
- (void)setReviewConfiguration:(id)arg1;
- (void)setUber:(id)arg1;
- (id)uber;

@end