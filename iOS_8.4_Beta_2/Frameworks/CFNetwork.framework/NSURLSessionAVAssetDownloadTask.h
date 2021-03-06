/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask {
    unsigned long long _AVAssetDownloadToken;
    NSURL *_URL;
    NSURL *_destinationURL;
}

@property(assign,readonly) unsigned long long AVAssetDownloadToken;
@property(assign,copy) NSURL * URL;
@property(assign,copy) NSURL * destinationURL;

- (unsigned long long)AVAssetDownloadToken;
- (id)URL;
- (id)destinationURL;

@end
