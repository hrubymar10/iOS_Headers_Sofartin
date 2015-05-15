/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemMetadata : NSObject {
    GEOBusiness *_business;
    <MKMapItemVendorDeal> *_deal;
    bool _hasCheckedForVendorDeal;
    NSMutableDictionary *_imageCache;
}

@property(assign,readonly) GEOBusiness * business;
@property(assign,retain) <MKMapItemVendorDeal> * deal;
@property(assign,readwrite) bool hasCheckedForVendorDeal;
@property(assign,retain) NSMutableDictionary * imageCache;

- (void).cxx_destruct;
- (void)addImage:(id)arg1 forURL:(id)arg2;
- (id)business;
- (id)deal;
- (id)description;
- (bool)hasCheckedForVendorDeal;
- (id)imageCache;
- (id)imageForURL:(id)arg1;
- (id)initWithBusiness:(id)arg1;
- (void)setDeal:(id)arg1;
- (void)setHasCheckedForVendorDeal:(bool)arg1;
- (void)setImageCache:(id)arg1;

@end