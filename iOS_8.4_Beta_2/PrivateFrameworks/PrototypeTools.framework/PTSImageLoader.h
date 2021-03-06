/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSImageLoader : NSObject {
    <PTSImageLoaderDelegate> *_delegate;
    bool _loading;
    NSString *_path;
}

@property(assign,readwrite) <PTSImageLoaderDelegate> * delegate;
@property(getter=isLoading,assign,readwrite) bool loading;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithPath:(id)arg1;
- (bool)isLoading;
- (void)setDelegate:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)startLoading;
- (void)stopLoading;

@end
